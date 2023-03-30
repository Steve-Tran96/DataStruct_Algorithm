union{
 float Data4Types;
 struct Bytes{
    char byte1;
    char byte2;
    char byte3;
    char byte4;
 }Bytes;
}Data;

void Demo_Union(){
    printf("\nDemo Union\n");
    Data.Data4Types = 26.04;
    printf("4Byte: \nByte1: %d\nByte2: %d\nByte3: %d\nByte4: %d",
           Data.Bytes.byte1,Data.Bytes.byte2,Data.Bytes.byte3,Data.Bytes.byte4);
}
