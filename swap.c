#include<stdio.h>
int isSquare(int n1,int n2){
    int t;
    t=n1;
    n1=n2;
    n2=t;
    printf("After swapping: n1= %d, n2= %d",n1,n2);
    return;
}

int main(){
    int n1,n2;
    printf("Input 1st number : ");
    scanf("%d",&n1);
    printf("Input 2nd number : ");
    scanf("%d",&n2);
    int ans;
    isSquare(n1,n2);
    return 0;
    
}