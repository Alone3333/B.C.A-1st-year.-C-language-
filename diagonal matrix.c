#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, j, sum = 0;
  int *mat;

  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);

  // Dynamically allocate memory for the matrix
  mat = (int*)malloc(n * n * sizeof(int));

  // Read the matrix elements using pointer arithmetic
  printf("Enter the matrix elements:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", (mat + i * n + j));
    }
  }

  // Calculate the sum of diagonal elements
  for (i = 0; i < n; i++) {
    sum += *(mat + i * n + i);
  }

  // Print the sum of diagonal elements
  printf("Sum of diagonal elements = %d\n", sum);

  // Free the dynamically allocated memory
  free(mat);

  return 0;
}
    