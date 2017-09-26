#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,len1,len2;
    
    scanf("%d",&len1);
    int arr1[len1];
    for(i=0;i<len1;i++){
        scanf("%d",&arr1[i]);
    }
    
    scanf("%d",&len2);
    int arr2[len2];
    for(i=0;i<len2;i++){
        scanf("%d",&arr2[i]);
    }
    int flag=0;
    for(i=0;i<len1;i++){
        flag=0;
        for(j=0;j<len2;j++){
            if(arr1[i]==arr2[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("arr1 is not a subset of arr2");
            break;
        }
    }
    if(flag==1)
        printf("arr1 is subset of arr2");
}
