#include<stdio.h>
int main(){
    int arr[10]={23,34,45,56,67,78,89,91,93,95};
    int l=0,h=9,key,mid;
    printf("Enter key");
    scanf("%d",&key);
    while(l<=h){
    mid=(l+h)/2;
    if(key==arr[mid]){
        printf("found it %d",mid);
    }            
    else if (key<arr[mid])
    {
    h=mid-1;
    }
    else {
    l=mid+1;
    }
    }
    printf("not found");
} 