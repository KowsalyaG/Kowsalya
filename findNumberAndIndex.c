#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,*arr,len;
    scanf("%d",&len);
    
    //Dynamically allocating memory for array
    arr = (int*) malloc(len * sizeof(int));
    
    for(i=0;i<len;i++)
        scanf("%d",&arr[i]);
    
    //Traversing the array & finding the element which is equal to its index
    for(i=0;i<len;i++){
        if(arr[i]==i){
            printf("The number %d is equal to its index %d\n",arr[i],i);
        }
    }
}
