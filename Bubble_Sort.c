#include<stdio.h>
int main() {
    int arr[5]={3,4,1,2,5};
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array is\n");
    for(int i=0;i<5;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}