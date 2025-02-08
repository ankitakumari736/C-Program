#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n;
	printf("Enter the size of matrix:\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter the elements of the matrix:\n");
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
			if(i%2!=0){
				swap(&arr[i][0],&arr[i][n-1]);
			}
	}
	printf("snake matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}