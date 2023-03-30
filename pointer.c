#include <stdio.h>
#include <stdlib.h> /// malloc


void demo_malloc(){
    int n, i, *ptr, sum = 0;
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
        ptr = (int *)malloc(n * sizeof(int));

        // Nếu không thể cấp phát,
        // hàm malloc sẽ trả về con trỏ NULL
        if (ptr == NULL)
        {
            printf("Co loi! khong the cap phat bo nho.");
            exit(0);
        }
        for (i = 0; i < n; ++i)
        {
            printf("Nhap gia tri %d: ", i+1);
            scanf("%d", ptr + i);
            printf("\n");
            sum += *(ptr + i);
        }

        for (i = 0; i < n; i++)
        {
            printf("\ni[%d]: %d\n", i,*(ptr + i));
            printf("\n");
        }
        printf("Tong = %d", sum);

        // Giải phóng vùng nhớ cho con trỏ
        free(ptr);

        for (i = 0; i < n; i++)
        {
            printf("\ni[%d]: %d\n", i,*(ptr + i));
            printf("\n");
        }
        return 0;
}
