#include <stdio.h>

int main(){
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i =0;i<n;i++){
        int x;
        printf("Enter array element %d: ",i+1);
        scanf("%d",&x);
        arr[i]=x;

    }
    for(int i=0;i<n;i++){
        printf("\nElement %d in array is: %d",i,arr[i]);
    }
    return 0;
}