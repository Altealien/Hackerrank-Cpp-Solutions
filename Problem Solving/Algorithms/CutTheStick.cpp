#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> cutTheSticks(std::vector<int> arr) {
    std::vector<int> size;
    while(arr.size() != 0){
        size.push_back(arr.size());
        auto minLength = *std::min_element(arr.begin(), arr.end());
        arr.erase(std::remove(arr.begin(), arr.end(), minLength), arr.end());
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > minLength){
                arr[i] -= minLength;
            }
        }
    }
    return size;
}
