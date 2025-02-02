#include<stdio.h>
int main(){
    int rows = 5, i, j;
    for (i = rows; i >= 1; i--){
        for (j = 1; j <= rows - i; j++){
            printf("  ");
        }
        for (j = 1; j <= i; j++){
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
