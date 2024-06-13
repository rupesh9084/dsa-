#include<stdio.h>

int main(){
int arr[50],i,j,temp,n;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter %d number: ",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=1;i<n;i++){
    for(j=i;j>=1;j--){
        if(arr[j-1]>arr[j]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
}
printf("the sorted array is:");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}