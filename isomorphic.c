#include<stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    int l1,l2,map[100000]={-1},marked[100000]={0},i;
    scanf("%s",a);
    l1=strlen(a);
    scanf("%s",b);
    l2=strlen(b);
    if(l1!=l2){
        return 0;
    }
    else {
        for(i=0;i<l1;i++){
            if(map[a[i]]==-1){
                if(marked[b[i]]==1)
                return 0;
                map[a[i]]=b[i];
                marked[b[i]]=1;
            }
            else if(map[a[i]]!=b[i])
            return 0;
        }
    }
    return 1;
}
