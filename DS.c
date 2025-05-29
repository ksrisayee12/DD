#include <stdio.h>

int main(){
    int n;
    int a=0, b=1, c;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("\nThe Fibonacci Series are: %d", a);
    for(int i = 1; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
        printf(", %d", a);
    }
}