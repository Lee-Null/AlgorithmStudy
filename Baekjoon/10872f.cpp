#include <cstdio>

using namespace std;

int factorial(int n){
	int ret = 1;
	for(int i = 2; i <= n; i++){
		ret *= i;
	}
	return ret;
}

int main(void){
	int N;

	scanf("%d", &N);

	printf("%d\n", factorial(N));

	return 0;
}