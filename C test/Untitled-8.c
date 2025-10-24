#include<stdio.h>
void print(int x)
{
    int i,m,n;
    for (i=1;i<=x;i++)
    {    
        for (n=1;n<=x-i;n++)
        {    printf(" ");}
        for(m=1;m<=2*i-1;m++)
        {    printf("*"); }
        printf("\n");
    }

}
int main(void)
{
    int x;
    printf("请输入行数x:");
    scanf("%d",&x);
    print(x) ;
}