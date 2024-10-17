#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

char buff[255];
    memset(buff,0,255);
    fgets(buff,255,stdin);
    // pile \n 0   --> pile 0 0
    buff[strlen(buff)-1]=0;  




    for (int i = 0; i < 4; i++)
    {
        if(buff[i]>='A' && buff[i] < 'Z'){
        
            buff[i] =buff[i]+32;
      
        }
    }
            printf("%s\n",buff);


    return 0;
}