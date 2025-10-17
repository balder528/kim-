#include <stdio.h>

int main() {
    int a, b, c, max;

    //提示用户输入三个值
    printf("请输入三个整数: \n");
    scanf("%d %d %d",&a, &b, &c);
    
    //比较找出最大值
     if (a>=b) {
        if(a>=c) {
          max=a;
        }else{
           max=c;
        }
    }else{
       if (b>=c){
           max=b;
      }else{
        max =c;
      } 
    }
    
    //输出结果
    printf("这三个数中的最大值是:%d\n",
  max);

    return 0;
  }
