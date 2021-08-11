#include<stdio.h>

int main(void){
    int i, j, k=0;
/*     for (i = 0; i <= 9; i++) {
        for (j = i+1; j <= 9; j++) {
            for (k = j+1; k <= 9; k++) {
                printf("%d%d%d\n", i, j, k);
            }
        }
    } */
/* 
    i=0;
    printf("i = %d\n",i);
    while(i++ < 3)
    {
        j=0;
        printf("\n");
        while (j++ <3)
        printf("%d",j);
    }    
        printf("\n"); */

    i = 9;

    while(i++<1000)
    {
        printf("%d\t",i);   
       if(  i%10 ==0 )
      {
        printf("i = %d\n",i);
         int num =i;
        

      }
   
    } 
}