#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,*a,len,temp,j;
    scanf("%d",&len);
    
    //Dynamically allocating memory for array
    a = (int*) malloc(len * sizeof(int));
    
    for(i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    
    //Sort the array
    for (i=0;i<len;i++)
    {
        for (j=0;j<len-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
      
    //Traversing the array, finding the unique integer as mentioned in the question the number must appear exactly twice 
    //except one unique number
    for(i=0;i<len-1;i+=2){
        if(a[i]!=a[i+1]){
            printf("%d is the unique number\n",a[i]);
            break;
        }
    }
}
