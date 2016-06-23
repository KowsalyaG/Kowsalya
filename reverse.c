#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int i,j=0,len;
    scanf("%s",a);
    len=strlen(a);
    for(i=len-1;i>=0;i--){
        b[j++]=a[i];
    }
    printf("%s",b);
    return 0;
}
