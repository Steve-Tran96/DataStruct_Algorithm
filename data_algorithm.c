/*
    Nhập vào số nguyên dương n, tiếp theo là n số nguyên của dãy số a.
    Hãy sắp xếp dãy số a thành dãy không giảm (số sau không bé hơn số trước)
    và in dãy đó ra màn hình, sau mỗi phần tử có đúng một khoảng trắng.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Dang sap xeo chuoi quet tu phan tu cuoi ve phan tu 1
    * day gia tri cao nhat trong day 1 den n len vi tri n
    * sau do loai phan tu vi tri n ra bang cach n=n-1 = for loop
    * tiep tuc day phan tu cao nhat trong mang con lai len -> ... den khi n = 0;
 */
void Bubble_Sort(int a[], int n){
    int i,j;

    for(i = n; i >= 1; i--){
        for (j = 0; j< i; ++j){
            int temp;
            if(a[j] < a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}

/* phan biet thanh 2 ve
    * sort va chua sort
    * quet mang tu phan tu 1 den n voi i (gan position va value)
    * lay phan tu position (value) tat ca phan tu trong danh sach sort
     (neu phan tu cuoi trong danh sach sort < value -> value la max
    ->  (chuoi[position] = value)) - khong thay doi
*/
void Insertion_Sort(int a[], int n){
    int value, position;
    int i = 1;
    for(i; i< n; i++){
        position = i;
        value = a[i];

        while(position>0 && a[position-1] > value){
            a[position] = a[position - 1];
            position--;
        }

        a[position] = value;
    }
}
//-----------------------------------------
void Selection_Sort(int a[], int n){
    int i,j, pos, temp;
    int min;
    for(i=0; i<n; i++){
        pos = i;
        for(j=i+1; j<n; j++){
            if(a[pos]>a[j]){
                pos = j;
            }
        }
        if(pos != i){
            temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
    }
}
//-----------------------------------------
void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++){
    	L[i] = arr[l + i];
	}
    for (j = 0; j < n2; j++){
    	R[j] = arr[m + 1+ j];
	}
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int l, int r){
    if (l < r){
        int m = l+(r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}
//-----------------------------------
void shellSort(int a[], int n){
	int interval, i, j, temp;
	for(interval = n/2; interval > 0; interval /= 2){
		for(i = interval; i < n; i++){
			temp = a[i];
			for(j = i; j >= interval && a[j - interval] > temp; j -= interval){
				a[j] = a[j - interval];
			}
			a[j] = temp;
		}
    }
}

//---------------------------------------

void quickSort(int a[], int l, int r){
	int p = a[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}

/*
*   Cho một dãy a gồm n số tự nhiên. Hãy đưa ra số tự nhiên nhỏ nhất
    chưa xuất hiện trong dãy.
*/
void MinNumberNotExists(int a[], int n){
    Bubble_Sort(a,n);
    if(a[0]>0) return 0;
    for(int i = 1; i<n; i++){
        if((a[i] - a[i-1]) > 1){
            return a[i-1]+1;
        }
    }
    printf("Min Number Not Exists: %d");
    return(a[n-1] + 1);
}

