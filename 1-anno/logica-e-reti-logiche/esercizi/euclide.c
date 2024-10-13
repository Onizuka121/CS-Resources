#include <stdio.h>
#include <stdlib.h>

int euclide(int n,int m){
        if(m == 0){
		return n;
	}
	return euclide(m,n%m);
}

int main(int argc, char **argv){
	int n = atoi(argv[1]);
	int m = atoi(argv[2]);
	printf("mcd tra %d e %d -> ",n,m);
	printf("%d\n",euclide(n,m));
}

