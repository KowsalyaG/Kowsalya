#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
char str[10];
int i = 0,j,count,inc;
scanf("%s",str);
while (1==sscanf(str+i, "%*[^0-9]%d%n", &count, &inc))
{
    for(j=0;j<count;j++)
        printf("%c",*(str+i));
    i += inc;
    count = 1;
}
    return 0;
}
