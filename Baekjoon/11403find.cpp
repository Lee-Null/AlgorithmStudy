#include <cstdio>

int main(void){
	int n;
	int mat[101][101] = {0};

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);

	for(int k = 0; k < n; k++)
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				if(mat[i][k] && mat[k][j])
					mat[i][j] = 1;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}

	return 0;
}