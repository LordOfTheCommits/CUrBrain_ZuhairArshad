#include<stdio.h>
int main()
{
    

    int n,k;

        printf("Enter number and k th index ");
        scanf("%d%d", &n,&k);

        int arr[n+1];
        int z=1;
        for (int i = 1; i < n; i++){
           if(n%i==0)
           {
            arr[z]=i;
           z++;
           }
        }
        if(k>z)
        {
            printf("-1");
            return 0;
        }
        printf("Kth factor is %d ",arr[k]);

    return 0;
}