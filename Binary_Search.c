#include<stdio.h>
int main() {
    int num;
    printf("Enter the length\n");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the array elements\n");
    for(int i=0; i<num; i++){
        scanf("%d", &(arr[i]));
    }
    printf("Enter the number to be found\n");
    int findnum;
    scanf("%d", &findnum);
    int start=0, end=num-1;
    while (end>=start) {
        int mid=(start+end)/2;
        if(arr[mid]==findnum){
            printf("Number found");
            break;
        }
        else if(arr[mid] > findnum) {
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return 0;
}