#include<stdio.h>
int main(){
    int a, n;
    scanf("%d %d", &a, &n);
    int c = (a>>n)&1;
    printf("%d\n", n, c);
    return 0;
}