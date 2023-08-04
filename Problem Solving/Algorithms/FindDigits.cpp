#include <iostream>
#include <string>

int findDigits(int n) {
    int count{0};
    std::string numberString = std::to_string(n);
    
    for(int i =0; i< numberString.size();i++){
        int digitValue = numberString[i]-'0';
        if(digitValue!=0&&(n%digitValue)==0){
            count++;
        }
    }
    return count;
}

int main(){
    std::cout <<"Enter a number:";
    int number;
    std::cin >>number;
    std::cout << findDigits(1012);
}