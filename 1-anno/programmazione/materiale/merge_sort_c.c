#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(char *, int, int, int, int);

void merge_sort(char *a, int lx, int n) {
  if (lx < n) {
    int mid = (lx + n) / 2;
    merge_sort(a, lx, mid);
    merge_sort(a, mid + 1, n);
    merge(a, lx, mid, mid + 1, n);
  }
}

void merge(char *a, int s0, int l0, int s1, int l1) {
  char tmp[(l1 - s0) + 1];
  int k = 0, tmp_s0 = s0;
  while (s0 <= l0 && s1 <= l1) {
    if (a[s0] <= a[s1]) {
      tmp[k] = a[s0];
      s0++;
    } else {
      tmp[k] = a[s1];
      s1++;
    }
    k++;
  }

  while (s0 <= l0) {
    tmp[k] = a[s0];
    s0++;
    k++;
  }

  while (s1 <= l1) {
    tmp[k] = a[s1];
    s1++;
    k++;
  }

  for (int i = tmp_s0, k = 0; i <= l1; i++, k++) {
    a[i] = tmp[k];
  }
}

int main() {
  char a[] = "5674225662210";
  merge_sort(a, 0, strlen(a) - 1);
  printf("%s\n", a);
}
