#include<stdio.h>
#define r 4
#define c 5
int spiralTraversal(int arr[r][c]){
	int top=0;
	int bottom=r-1;
	int left=0;
	int right=c-1;
	int i;
	while(top<=bottom && left<=right)
	{
		for(i=left;i<=right;i++)	
		printf("%d\t",arr[top][i]);
		top++;
		
		for(i=top;i<=bottom;i++)
		printf("%d\t",arr[i][right]);
		right--;
		
		if(top<=bottom)
		{
			for(i=right;i>=left;i--)
			printf("%d\t",arr[bottom][i]);
			bottom--;
		}
		else
		{
			for(i=bottom;i>=top;i--)
			printf("%d\t",arr[i][left]);
			left++;
		}
	}
	return 0;
}
int main()
{
	//int r,c;
	//printf("Enter size of matrix:\n");
	//scanf("%d%d",&r,&c);
	printf("Enter the matrix elements:\n");
	int i,j;
	int arr[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",arr[i][j]);
		}
		printf("\n");
	}
	spiralTraversal(arr);
	return 0;
}