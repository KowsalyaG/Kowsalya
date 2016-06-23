#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[50];
    int n1,n2,i,j=0;
    scanf("%s",a);
    scanf("%s",b);
    n1=strlen(a);
    n2=strlen(b);
    for(i=n1;i<(n1+n2);i++){
        a[i]=b[j++];
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}
