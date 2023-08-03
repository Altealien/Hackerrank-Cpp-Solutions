#include <iostream>
#include <math.h> 

int pageCount(int n, int p) {
    int forwardCount = p/2;
    int backwardCount = (n/2)-(p/2);
    return std::min(forwardCount,backwardCount);
}
int main(){
    std::cout << pageCount(6,4);
}