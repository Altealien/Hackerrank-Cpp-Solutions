#include <iostream>
#include <vector>

int main(){
    int sizeOfOutVector, queries, sizeOfInVector,indexOfOutVector,indexOfInVector;
    std::cin >> sizeOfOutVector >> queries;
    
    std::vector<std::vector<int>> numbers(sizeOfOutVector);
   
    for(int i=0; i<sizeOfOutVector;i++){
        std::cin >> sizeOfInVector;
        numbers[i].resize(sizeOfInVector);
        for(int j=0; j<sizeOfInVector;j++){
            std::cin >> numbers[i][j];
        }
    }
    for(int i=0; i<queries; i++){
        std::cin >> indexOfOutVector >> indexOfInVector;
        std::cout <<numbers[indexOfOutVector][indexOfInVector] << std::endl;
    }


    return 0;
}