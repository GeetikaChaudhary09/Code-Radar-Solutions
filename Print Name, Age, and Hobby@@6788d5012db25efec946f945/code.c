#include<stdio.h>
int main(){
    char ch[100];
    int b;
    char ch2[100];
    scanf("%c %d %c", &ch, &b, &ch2);
    printf("Name: %c\n", ch);
    printf("Age: %d\n", b);
    printf("Hobby: %c\n", ch2);
    return 0;
    
}