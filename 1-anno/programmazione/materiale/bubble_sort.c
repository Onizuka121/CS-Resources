#include <stdio.h>

void bubble_sort(int *a, int n) {
  int scambio = 1;
  n = n - 1;
  while (scambio) {
    scambio = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] > a[i + 1]) {
        int tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
        scambio = 1;
      }
    }
    n -= 1;
  }
}

void print_array(int *a, int n) {
  printf("{ ");
  for (int i = 0; i < n; i++)
    printf(" %d ,", *(a + i));
  printf("}\n");
}

int main() {
  int a[] = {1, 0, 8, 2, -2, 9, 10, 534, 3, 4, 9, 11, 5, 6, 7, 24};
  print_array(a, sizeof(a) / sizeof(int));
  bubble_sort(a, sizeof(a) / sizeof(int));
  print_array(a, sizeof(a) / sizeof(int));
}
