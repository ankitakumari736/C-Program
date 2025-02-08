#include<stdio.h>
void array_product(int arr[], int length){
    int p=1, i,j, res[length];
    for(i=0;i<length;i++){
        p=1;
        for(j=0;j<length;j++){
          if(i!=j)
          p*=arr[j];
    }
    res[i]=p;
}
    for(i=0;i<length;i++){
    printf("\n%d",res[i]);
    }
}
int main(){
    int i,length;
    printf("Enter length of array: ");
    scanf("%d",&length);
    int arr[length];
    printf("Enter array elements: ");
    for(i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    array_product(arr, length);
}