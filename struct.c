#include <stdio.h>
#include <stdlib.h>

typedef enum Dogtype{ Chihuahua, Husky } Dogtype;

typedef struct Dog {
    Dogtype type;
} Dog;

void bark(Dog *dog){
    if (dog->type == Chihuahua){
        printf("Chihuahua\n");
    }
    else if (dog->type == Husky){
        printf("Husky\n");
    }
}

void Demo_Struct(){

    Dog dg1 = {Chihuahua};
    Dog dg2 = {Husky};

    bark(&dg1);
    bark(&dg2);
}

