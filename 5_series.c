#include<stdio.h>
int fact(int n){
    int fact=1;
    for (int i = 1; i <=n ; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
int  main(){
    int sum=0;
    for (int i = 1; i <=5 ; i++)
    {
        sum+=fact(i)/i;
    }
    printf("Sum of the series is: %d",sum);
    return 0;
    
}