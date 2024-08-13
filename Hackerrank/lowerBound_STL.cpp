#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,n,queries,query;
    std::vector<int> myVec;
    std::cin >> size;
    for(int i = 0; i< size; i++){
        std::cin >> n;
        myVec.push_back(n);
    }
    std::cin >> queries;
    
    for(int i =0; i<queries; i++){
        std::cin >> query;
        std::vector<int>::iterator low; 
        low = std::lower_bound(myVec.begin(),myVec.end(),query);
        if(low != myVec.end() && *low == query){
            std::cout <<"Yes " << low  - myVec.begin() + 1 << std::endl;
        }
        else{
            std::cout <<"No " <<  low - myVec.begin() + 1 << std::endl;
        }

    }
    return 0;
}
