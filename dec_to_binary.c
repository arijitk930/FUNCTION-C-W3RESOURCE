#include<stdio.h>
long long binary(int n){
    int rem,bno=0,f=1;
    while (n>0)
    {
        rem = n% 2;
        bno = bno + rem * f;
        f = f * 10;
        n = n / 2;
    }
    return bno;
}
int main(){
    int n;
    long long bno;
    printf("Input any number : ");
    scanf("%d",&n);
    bno= binary(n);
    printf("The Binary value is: %ld",bno);
    return 0;
}