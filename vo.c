#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,j=0,len;
    scanf("%s",a);
    len=strlen(a);
    for(i=len-1;i>=0;i--){
        b[j++]=a[i];
    }
    b[j]='\0';
    printf("%s\n",b);
    j=0;
    for(i=0;i<len;i++){
        if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u')
        c[j++]=b[i];
    }
    printf("%s",c);
    return 0;
}
