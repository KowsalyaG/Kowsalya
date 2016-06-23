#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int i,j=0,len=1;
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        b[j++]=a[i]-48;
    }
    for(i=0;i<len;i++){
    printf("%d",b[i]);
    }
    return 0;
}
