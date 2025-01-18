#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo {
  char *info;
  struct nodo *succ;
  struct nodo *prec;
};
typedef struct nodo nodo;

int ContaRipetizioniIgnoraMaiuscolo(nodo *a, char *s) {
  if (a == NULL)
    return 0;

  int count = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] = s[i] + ('a' - 'A');
  }

  nodo *curr = a;
  while (curr != NULL) {
    if (strlen(s) == strlen(curr->info)) {
      int is_char_equal = 1;
      for (int i = 0;
           curr->info[i] != '\0' && s[i] != '\0' && is_char_equal != 0; i++) {
        char c = curr->info[i];
        if (c >= 'A' && c <= 'Z')
          c = c + ('a' - 'A');
        if (c == s[i]) {
          is_char_equal = 1;
        } else {
          is_char_equal = 0;
        }
      }

      if (is_char_equal == 1)
        count++;
    }

    curr = curr->succ;
  }

  return count;
}
