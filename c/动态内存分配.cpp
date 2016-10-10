#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cnt = 0;
    void* p;
    while((p = malloc(100*1024*1024))){

        cnt++;
    }
   
    printf("Get %d 00MB.\n",cnt);
    return 0;
}



