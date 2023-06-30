#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, position, minRange, maxRange;
    std::cin>> size;
    
    std::vector<int> v(size);
    for(int i =0; i<size;i++){
        std::cin >> v[i];
    }
    
    std::cin>> position;
    std::cin >> minRange >> maxRange;
    v.erase(v.begin()+(position-1));
    
    
    v.erase((v.begin()+(minRange-1)),(v.begin()+(maxRange-1)));
    int newSize = v.size();
    std::cout << newSize << std::endl;
    for(int i=0;i<newSize;i++){
        std::cout << v[i] << " ";
    }
    return 0;
}
