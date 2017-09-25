#include<stdio.h>
#include<stdlib.h>


int main(){
    int i,*arr,len,hash[10000]={0};
    scanf("%d",&len);
    
    //Dynamically allocating memory for array
    arr = (int*) malloc(len * sizeof(int));
    
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    
    for(i=0;i<len;i++){
        if(hash[arr[i]]>1){
            printf("%d is the first the element in the array which is repeated",arr[i]);
            break;
        }
    }

}
