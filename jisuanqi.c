#include <stdio.h>
int main(){
system("chcp 65001");
double a,b;
char op;
while(1){
    printf("请输入算式：\n");
    scanf("%lf%c%lf",&a,&op,&b);
    switch (op){
        case '+':
            printf("=%lf\n",a+b);
            break;
        case '-':
            printf("=%lf\n",a-b);
            break;
        case '*':
            printf("=%lf\n",a*b);
            break;
        case '/':
            if(b==0){
                printf("除数不能为零\n"); 
            }else{
                printf("=%lf\n",a/b);
            }
            break;
    }
}
    return 0;
}   