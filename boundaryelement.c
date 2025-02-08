 
#include<stdio.h>
int main(){
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
		for(j=0;j<n;j++){
			if(i==0||i==n-1||j==0||j==n-1){
				printf("%d\t",arr[i][j]);
			}
		}
	}

}