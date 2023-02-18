#include <stdio.h>
int main(void){
    int a,b,c;
    printf("输入a,b");
    scanf("%d%d",&a,&b);
    c=(a/10*10)+(a%10*1000)+(b/10+b%10*100);
    printf("%d\n",c);
    
    
    
    
    
    
    
    return 0;
}
