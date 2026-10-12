#include <stdio.h> 
int main(){
    int a=1, b=2;
    printf("a=%d, b=%d\n", a, b);
    int *p=&a;
    int *q=&b;
    int t=*p;
    *p=*q;
    *q=t;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}