#include <iostream>
#include <vector>
#include <algorithm>


int diagonalDifference(std::vector<std::vector<int>> v){
    int leftSum{0}, rightSum{0};
    int size = v.size();
    for(int i=0; i<size; i++){
        leftSum += v[i][i]; 
    }
    int j =0;
    for(int i = size-1; i>=0; i--){
        rightSum += v[j][i];
        j++;
    }
    int absoluteDifference = std::abs(leftSum - rightSum);
    return absoluteDifference;
}

int main(){
    std::vector<std::vector<int>> v = {{11,2,4}, {4,5,6}, {10,8,-12}};
    std::cout << diagonalDifference(v) << std::endl;
}