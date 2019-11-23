/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for CT.
Code,, Run offline from literally only one place in world.
WE are proffesional company. friend!

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int* intArr(int size){
    int *array = calloc(size,sizeof(int));
    return array;
}

int main()
{
    int* software=intArr(5);
    printf("{%i,%i,%i,%i,%i}",software[0],software[1],software[2],software[3],software[4]);
    free(software);
    return 0;
}
