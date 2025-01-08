#include <stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a=0; int b=1;
    if(n==0) printf("%d",a);
    else if(n==1) printf("%d",b);
    else{
        int next;
        for(int i=2; i<n+1; i++){
            if (i==n) break;
            next=a+b;
            a=b; b=next;
        }
        printf("%d",next);
    }
    return 0;
}