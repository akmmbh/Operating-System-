#include "gdt.h"
void printf(char* str){
    unsigned short* VideoMemory = (unsigned short*)0xb8000;
    for(int i=0;str[i]!='\0';i++){
        VideoMemory[i]=(VideoMemory[i]& 0xFF00)|str[i];
        //upper this is done we want only high bits to print a char by char
        //and not changing bits which are responsibly for colorchange 
        //thats why we are using short which merges two bits into one so that we
        //not able to change the color bit as we not have to change that

    }
}
extern "C" void kernelMain(void *multiboot_structure, unsigned int magicnumber){
    printf("hello world");
    GlobalDiscriptorTable gdt;
    
    while(1);
}