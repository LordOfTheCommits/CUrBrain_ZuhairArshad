#include<stdio.h>
int subtractProductAndSum(int n){  
    if (n<=0) {
        printf("Invalid Number!!");
        return 0;
    }
    int sum=0,product=1;
     while (n != 0) {
        int digit = n % 10;  
        sum+=digit;
        product*=digit;
      n= n/ 10;
    }
    return  (product-sum);
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int result=subtractProductAndSum(n);
    printf("%d is Expected Output",result);
    return 0;
}