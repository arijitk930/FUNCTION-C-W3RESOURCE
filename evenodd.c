#include<stdio.h>
int isEvenOdd(int n){
    if (n%2==0)
    {
        printf("The entered number is even.");
    }
    else{
        printf("The entered number is odd.");
    }
    return;
}
int main(){
    int n;
    printf("Input any number : ");
    scanf("%d",&n);
    isEvenOdd(n);
    return 0;
    
}