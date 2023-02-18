#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        if(a == b&& a==c){
            printf("等边三角形\n");
        }
        else if(a==b||a==c||b==c){
            printf("等腰三角形\n");
        }
    }
    else{
        printf("不能构成三角形\n");
    }
    //
    
    return 0;
}
  
