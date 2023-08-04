#include <iostream>
#include <math.h> 

int pageCount(int n, int p) {
    int forwardCount = p/2;
    int backwardCount = (n/2)-(p/2);
    return std::min(forwardCount,backwardCount);
}
int main(){
    std::cout << "Enter number of pages:";
    int numberOfPages;
    std::cin >> numberOfPages;
    std::cout << "Enter page number:";
    int pageNumber;
    std::cin >> pageNumber;
    std::cout << "The minimum number of page flips is: "<< pageCount(numberOfPages,pageNumber)<< std::endl;
}