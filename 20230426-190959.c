#include <stdio.h>

#define MAX_SIZE 10

int main() {
  int matrix[MAX_SIZE][MAX_SIZE];
  int *ptr;
  int i, j, n, sum = 0;

  printf("Enter the size of matrix: ");
  scanf("%d", &n);

  // Fill the matrix with user input
  printf("Enter the elements of matrix:\n");
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Sum the diagonal elements using pointer
  ptr = &matrix[0][0];
  for(i = 0; i < n; i++) {
    for(j=0;j<n;j++){
    sum += *(ptr + i*n + i);
    }
  }

  printf("Sum of diagonal elements: %d", sum);

  return 0;
}
    