#include<stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    printf("Enter the number to be searched\n");
    int findnum;
    scanf("%d", &findnum);
    int flag=0; //to check for number if its present
    for(int i=0;i<5;i++){
        if(arr[i]==findnum)
        flag++;
    }
    if(flag)
    printf("Number Found");
    else
    printf("Number not found");
    return 0;
}