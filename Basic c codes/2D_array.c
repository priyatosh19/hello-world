#include <stdio.h>
#include <stdlib.h>
int main() {
   int row, col;
   printf("Enter no of row and no of column(giving space):-");
   scanf("%d %d",&row,&col);
   int *arr = (int *)malloc(row * col * sizeof(int));
   int i, j;
   printf("Enter the elements-");
   for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
         scanf("%d",(arr + i*col + j));
   printf("The matrix elements are:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("%d ", *(arr + i*col + j));
      }
      printf("\n");
   }
   free(arr);
   return 0;
}
