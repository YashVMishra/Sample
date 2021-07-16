#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr, sum, limit;
    printf("Enter the limit of array\n");
    scanf("%d", &limit);
    ptr=(int*)malloc(limit*sizeof(int));
    for(int i=0;i<limit;i++){
        printf("Enter the array element : ");
        scanf("%d", (ptr+i));
    }
    for(int i=0;i<limit;i++){
        sum+=*(ptr+i);
    }
    printf("The sum of elements is %d", sum);
    free(ptr);
    return 0;
}