#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// gggssaaaa

int *get_data(char *d) {
  int i = 0, j = 0;
  char g[4];
  char s[3];
  char a[5];
  while (d[i] != '\0') {
    if (i <= 2) {
      g[j] = d[i];
    } else if (i >= 3 && i <= 4) {
      s[j] = d[i];
    } else {
      a[j] = d[i];
    }

    if (i == 2) {
      g[3] = '\0';
      j = 0;
    } else if (i == 4) {
      s[2] = '\0';
      j = 0;
    } else if (i == 8) {
      j = 0;
      a[4] = '\0';
    } else {
      j++;
    }
    i++;
  }
  printf("%s %s %s\n", g, s, a);
  int g_int = 0;
  char *days[] = {"lun", "mar", "mer", "gio", "ven", "sab", "dom"};
  for (int i = 0; i < 7; i++) {
    if (strcmp(days[i], g) == 0) {
      g_int = i + 1;
      break;
    }
  }
  int *out = malloc(sizeof(int) * 3);
  out[0] = g_int;
  sscanf(s, "%d", &(out[1]));
  sscanf(a, "%d", &(out[2]));

  return out;
}

int dwacomp(char *d1, char *d2) {
  int *d1_data = get_data(d1);
  int *d2_data = get_data(d2);

  if (d1_data[2] == d2_data[2]) {
    if (d1_data[1] == d2_data[1]) {
      if (d1_data[0] == d2_data[0]) {
        return 0;
      } else if (d1_data[0] > d2_data[0]) {
        return 1;
      } else {
        return -1;
      }
    } else if (d1_data[1] > d2_data[1]) {
      return 1;
    } else {
      return -1;
    }
  } else if (d1_data[2] > d2_data[2]) {
    return 1;
  } else {
    return -1;
  }
}
