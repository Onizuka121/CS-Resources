


int i, n = 10;
float *a = malloc(n * sizeof(float)); /* O(1) */

for (i = 0; i < n; i++) {
    a[i] = 10 + i;
}

n++;  // Aumento la dimensione
a = realloc(a, n * sizeof(float)); /* O(n) nel caso peggiore, se deve copiare */

a[n - 1] = 0;  // Nuovo elemento

for (i = 0; i < n; i++) {
    printf("%f\n", a[i]);
}

free(a);

