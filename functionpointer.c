#include <stdio.h>
#include <stdlib.h>

/*  Function pointer */
/*  Pointer tro duoc moi noi tren memory layout
    Neu pointer tro den doan code cua mot function -> function pointer

*/
/*
typedef void (*Barkfn)();

typedef struct Dog {
    Barkfn bark;
} Dog;

void Chihuahua(){

    printf("Chihuahu\n");
}

void Husky(){

    printf("Husky\n");
}
*/


typedef struct Dog {
    void (*bark)(); // equivalent (<=>)typedef void (*Barkfn)();
} Dog;

void Chihuahua(){

    printf("Chihuahu\n");
}

void Husky(){

    printf("Husky\n");
}



void Demo_FnPointer(){

    Dog dg1 = {Chihuahua};
    Dog dg2 = {Husky};

    dg1.bark();
    dg2.bark();
}



