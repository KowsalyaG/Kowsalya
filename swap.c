#include<stdio.h>
#include<string.h>
int main(){
    char a[100],temp;
    int i,j,len;
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i+=2){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    printf("%s",a);
    return 0;
}
