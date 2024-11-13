#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
	return (*(int*)a-*(int*)b);
}

int main(){
	int n, k, x[1000];
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &x[i]);
	}
	qsort(x, n, sizeof(int), compare);
	///or(int i=0; i<k; i++){
	//	printf("%d", x[i]);
	//} ㅋㅋ 아 바본가
    printf("%d", x[n-k]);
	return 0;
}