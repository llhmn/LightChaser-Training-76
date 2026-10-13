#include <stdio.h>
#include <stdlib.h>
int main(){
system("chcp 65001");  
int *arr; 
int i=0;
double sum=0;
arr=(int*)malloc(100*sizeof(int));
printf("请输入数字，输入-1结束：\n");
while(1){
    int a;
    scanf("%d",&a);
    if(a!=-1){
        arr[i]=a;
    }else {
        break;  
    }   
    sum+=arr[i];
    i++; 
};
printf("平均值为：%f\n",sum/i);
free(arr);
return 0;
}