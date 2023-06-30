#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    /*Logic: Store the dereferenced value of both pointers in new variables so the original values 
    aren't affected.*/
     int c = *a;
     int d = *b;

     *a = c+d;
     *b = std::abs(c-d);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}