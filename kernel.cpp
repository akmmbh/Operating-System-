#include "gdt.h"
#include "types.h"
void printf(char* str){
    static uint16_t* VideoMemory = (uint16_t*)0xb8000;
    static uint8_t x=0,y=0;
    for(int i=0;str[i]!='\0';i++){
        VideoMemory[80*y+x]=(VideoMemory[80*y+x]& 0xFF00)|str[i];
        x++;
        if(x>=80)
        {
            y++;
            x=0;
        }
        if(y>=25){
             for(y=0;y<25;y++)
               for(x=0;x<80;x++)
               VideoMemory[]
        }
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