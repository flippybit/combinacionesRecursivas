#include<stdio.h>
 
/* Recursive function to search x in arr[l..r] */
int recSearch(int visitados[], int l, int r, int nums[])
{
     if (r < l)
        return -1;

        if (visitados[l] != nums[l])
        {
            visitados[l]=nums[l];
            int i= 0;
            int j= 0;
            
            while(i < r )
            {  
               //  printf("visit: %d num: %d\n",visitados[i],nums[i]);
                // mientrasd no este en los visitados 
                if(nums[i] != visitados[i])
                printf("%d %d \n",visitados[l],nums[i]);
            i++;
            }
        } 
       // printf("l:%d\t r:%d\n", l,r);
     /*    int c = -1;
        while(c++<r)
            printf("%d",visitados[c]); */;
     return recSearch(visitados, l+1, r, nums);
}
 
int main()
{
    int nums[] = {0,1,2,4};
    int visitados[4] = {-1,-1,-1}, i;
    int n = sizeof(visitados)/sizeof(visitados[0]);
    int x = 3;
    int index = recSearch(visitados, 0, 3, nums);
    if (index != -1)
       printf("\n\nElement %d is present at index %d", x, index);
    else
        printf("\n\nElement %d is not present", x);
    return 0;
}