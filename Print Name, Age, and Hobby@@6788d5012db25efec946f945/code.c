#include<stdio.h>
int main(){
    char ch[100];
    int b;
    char ch2[100];
    scanf("%s %d %s", ch, &b, ch2);
    printf("Name: %s\n", ch);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", ch2);
    return 0;
    
}