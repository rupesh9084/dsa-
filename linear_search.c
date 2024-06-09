#include<stdio.h>

int main(){
int arr[50],i,k=0,search,size;
printf("enter the size of array:");
scanf("%d",&size);
printf("Enter the %d Number:",size);
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("enter the number that you want to search:");
scanf("%d",&search);
for(i=0;i<size;i++){
    if(arr[i]==search){
        printf("number is found at position %d",i+1);
        k++;
      
      
    }  
}
if(k==0){
    printf("number is not found");
}
return 0;
}