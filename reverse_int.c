#include <stdio.h>
#include <string.h>
int main()
{
    long long int a,b,rem[1000000];
    long long int flag=0,i,j=0,len=1;
    scanf("%lld",&a);
    if(a<0){
        a=-1*a;
        flag=1;
    }
    while(a>0){
        rem[j++]=a%10;
        a=a/10;
    }
    for(i=j-1;i>=0;i--,len=len*10){
        b=b+rem[i]*len;
    }
    if(flag==0)
    printf("%d",b);
    if(flag==1){
    b=-1*b;
    printf("%d",b);
    }
    return 0;
}
