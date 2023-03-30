#include <stdio.h>
#include <stdlib.h>


void printFibo(int count) {
    static int n1 = 0, n2 = 1, n3 = 0;
    if (count > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
        printFibo(count - 1);
    }
}


int main()
{
    printf("size char: %d\n", sizeof(char));
    printf("size int: %d\n", sizeof(int));
    printf("size uint: %d\n", sizeof(unsigned int));
    printf("size short: %d\n", sizeof(short));
    printf("size long: %d\n", sizeof(long));
    printf("size double: %d\n", sizeof(double));
    printf("\nDemo Function Pointer!\n");
    Demo_FnPointer();
    printf("\nDemo struct!\n");
    Demo_Struct();

    Print_sizeStruct();

    Demo_Union();
    printf("\n");

    int count = 15;
    printFibo(count-2);

    printf("\n Mang con tro\n");
    /* char arr[] = "adasdas";
        char *p1;
        p1 = arr;

        printf("%s ", p1);
    */
    char *s1="acbdefjhg";

    for(int i =0; i<10; i++){
        printf("%c ", *(s1+i));
    }

    printf("%s ", s1);

    Demo_Queue();

    printf("\nDemo malloc\n");
    demo_malloc();
    return 0;
}
