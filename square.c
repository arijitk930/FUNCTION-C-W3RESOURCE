#include<stdio.h>
double isSquare(double n){
    return n*n;
}

int main(){
    int n;
    printf("Input any number for square : ");
    scanf("%d",&n);
    double ans;
    ans=isSquare(n);
    printf("The square of %d is : %.2f ",n,ans);
    return 0;
    
}