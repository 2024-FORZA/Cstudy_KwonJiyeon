#include <stdio.h>
#include <math.h>

int main() {
    int d, h, w;
    double k, realh, realw;
    
    scanf("%d %d %d", &d, &h, &w);
    
    k = sqrt((double)(d * d) / (h * h + w * w));
    
    realh = h * k;
    realw = w * k;
    
    printf("%d %d", (int)realh, (int)realw);
    
    return 0;
}
