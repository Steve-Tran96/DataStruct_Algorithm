/*
    Nhập vào số nguyên dương n, tiếp theo là n số nguyên của dãy số a.
    Hãy sắp xếp dãy số a thành dãy không giảm (số sau không bé hơn số trước)
    và in dãy đó ra màn hình, sau mỗi phần tử có đúng một khoảng trắng.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int a[20] = {1,4,5,3,2,10,7,9,6};
int n;

void Input_Arr(){

	scanf("%d",&n);
	int i;
	for (i=0; i < n; i++){
        printf("\ni[%d]: ", i);
		scanf("%d",&a[i]);
	}
}

void Out_Arr(){
    int i =0;
    for(i =0; i<n; i++){
        printf("\na[%d] = %d", i, a[i]);
	}
}

int main()
{
   // Input_Arr();
   n=10;
	//Bubble_Sort(a, n);
	//Insertion_Sort(a,n);
	//Selection_Sort(a,n);
	//mergeSort(a,0, n-1);
	//shellSort(a,n);
	MinNumberNotExists(a,n);
    Out_Arr();


    return 0;
}



