#include<stdio.h>
int main(){
    int a, n;
    scanf("%d %d", &a, &n);
    printf("%d\n", n, (a >> n) & 1);
}