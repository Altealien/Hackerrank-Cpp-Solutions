#include <iostream>
#include <vector>

int divisibleSumPairs(int n, int k, std::vector<int> ar) {
    int count{0};
    for(int i=0; i<n-1; i++){
       for(int j=i+1;j<n;j++){
           if((ar[i]+ar[j])%k==0){
               count++;
           }
       }
    }
    return count;
}
int main(){
    std::vector<int> vector ={1,3,2,6,1,2};
    std::cout << divisibleSumPairs(6,3,vector)<<std::endl;
}