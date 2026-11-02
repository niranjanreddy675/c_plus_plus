#include<stdio.h>
int linearsearch(int arr[],int n,int target){
    for(int i = 0;i<n;i++){
        if(arr[i]==target){
            return i;
            break;

        }
    }
    return -1;
}
     

int main(){
    int arr[]={2,3,4,5,6};
    int ans = linearsearch(arr,5,2);
    if (ans== -1){
        printf("the element is not found in given array\n");

    }else{
        printf("the target is found at index %d",ans);
        
    }
}
