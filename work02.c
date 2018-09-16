//Colin Hosking
//Work 01
//Systems pd05
//2018-09-17

#include <stdio.h> 
#include <stdlib.h>


int main(){
    unsigned int i = 2224060017;
    char * ip = &i;
    
    printf("i in hexidecimal: %x \n",i);
    printf("i in decimal: %u \n",i);

    printf("Byte 1: %hhx , %d \n", *ip, *ip); //increment the pointer to point to the next byte
    ip+=1;
    printf("Byte 2: %hhx , %d \n", *ip, *ip);
    ip+=1;
    printf("Byte 3: %hhx , %d \n", *ip, *ip);
    ip+=1;
    printf("Byte 4: %hhx , %d \n", *ip, *ip);
    
    ip-= 3;  //reset the pointer to point to the first byte in the int
    
    printf("Bytes incremented by 1\n");
    
    *ip+=1;                                          //increment the value the pointer points to by 1
    printf("Byte 1: %hhx , %d \n", *ip, *ip);
    ip+=1;
    *ip+=1;
    printf("Byte 2: %hhx , %d \n", *ip, *ip);
    ip+=1;
    *ip+=1;
    printf("Byte 3: %hhx , %d \n", *ip, *ip);
    ip+=1;
    *ip+=1;
    printf("Byte 4: %hhx , %d \n", *ip, *ip);
    
    printf("Bytes incremented by 16\n");
    
    i-= 3; //reset the pointer to point to the first byte in the int
    
    *ip+=16;                                          //increment the value the pointer points to by 16
    printf("Byte 1: %hhx , %d \n", *ip, *ip);
    ip+=1;
    *ip+=16;
    printf("Byte 2: %hhx , %d \n", *ip, *ip);
    ip+=1;
    *ip+=16;
    printf("Byte 3: %hhx , %d \n", *ip, *ip);
    ip+=1;
    *ip+=16;
    printf("Byte 4: %hhx , %d \n", *ip, *ip);
        
    
}