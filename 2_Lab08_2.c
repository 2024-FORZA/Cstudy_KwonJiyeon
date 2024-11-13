#include <stdio.h>
#include <stdlib.h>

struct Arr{
    int x;
    int y;
}array [100000];

int compare(const void* a, const void* b){
    struct Arr *arrA = (struct Arr *)a;
    struct Arr *arrB = (struct Arr *)b;

    if(arrA->x == arrB->x){
        return arrA->y - arrB->y;
    }
	return arrA->x - arrB->x;
}

int main(){
    int i, n, x, y;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        array[i].x = x;
        array[i].y = y;
    }

    qsort(array, n, sizeof(struct Arr), compare);

    for(i=0; i<n; i++) printf("%d %d\n", array[i].x, array[i].y);
    
    return 0;
}