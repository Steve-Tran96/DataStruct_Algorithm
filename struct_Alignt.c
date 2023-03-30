#pragma pack(4)
struct Date{
    short month;
    char day;
    char year;
    //short w2;
}; //total: 8 byte

typedef struct{
    unsigned short day      :5; // 1 - 31 (2^5)
    unsigned short month    :4; // 1- 12
    unsigned short year     :7; // 0 - 99
} Date2; // total : 2 byte

typedef struct{
    unsigned int day      :5; // 1 - 31 (2^5)
    unsigned int month    :4; // 1- 12
    unsigned int year     :7; // 0 - 99
} Date3; // total : 2 byte

struct Date4{
    int month ;
    char day ;
    int year;
};

void Print_sizeStruct(){

    struct Date dt1;
    Date2 dt;
    Date3 dt3;
    struct Date4 dt4;

    dt.day = 5;
    dt.month = 10;
    dt.year = 23;


    printf("\nsize of Date: %d", sizeof(dt1));
    printf("\nsize of Date2: %d",sizeof(dt));
    printf("\nsize of Date3: %d",sizeof(dt3));
    printf("\nsize of Date4: %d",sizeof(dt4));

    printf("\nDate2: %d-%d-%d", dt.day, dt.month, dt.year);
}
