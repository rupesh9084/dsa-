#include<stdio.h>

int main(){
int arr[50],n,i,j,temp;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter %d number:",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("the sorted array is:");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}