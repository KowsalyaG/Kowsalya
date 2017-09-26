#include<stdio.h>
#include<stdlib.h>


int main(){
    int i,*arr,len,temp,j;
    scanf("%d",&len);
    
    //Dynamically allocating memory for array
    arr = (int*) malloc(len * sizeof(int));
    
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    
    //Sort the array
    for (i=0;i<len;i++)
    {
        for (j=0;j<len-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
      
    //Traversing the array, finding the unique integer as mentioned in the question the number must appear exactly twice 
    //except one unique number
    for(i=0;i<len-1;i+=2){
        if(arr[i]!=arr[i+1]){
            printf("%d is the unique number\n",arr[i]);
            break;
        }
    }
}
