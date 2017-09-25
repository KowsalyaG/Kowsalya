#include<stdio.h>
#include <stdlib.h>
int main(){
    int i,*arr,len,max=-1,*hash;
    scanf("%d",&len);
    
    //Dynamically allocating memory for array
    arr = (int*) malloc(len * sizeof(int));
    
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
        // To find the largest number in array
        if(max<arr[i])
            max=arr[i];
    }
    
    //Dynamically allocating memory for hash map
    hash = (int*) malloc(max * sizeof(int));
    
    //Traversing the array and using hash map, finding the duplicates in the array
    for(i=0;i<len;i++){
        if(hash[arr[i]]>=0)
        hash[arr[i]]++;
        if(hash[arr[i]]>1){
            printf("%d is duplicated\n",arr[i]);
            hash[arr[i]]=-1;
        }
    }
}
