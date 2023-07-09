#include <stdio.h>
#include <stdlib.h>
int main() {
	
  // Create two files, one for even numbers and one for odd numbers.
  FILE *even_file = fopen("even.txt", "w");
  FILE *odd_file = fopen("odd.txt", "w");
  // Write the even numbers from 50 to 70 to the even file.
  int i;
  for (i = 50; i <= 70; i++) {
    if (i % 2 == 0) {
      fprintf(even_file, "%d\n", i);
    }
  }
  // Write the odd numbers from 50 to 70 to the odd file.
  for (i = 50; i <= 70; i++) {
    if (i % 2 != 0) {
      fprintf(odd_file, "%d\n", i);
    }
  }
  // Close the files.
  fclose(even_file);
  fclose(odd_file);
  return 0;
}

