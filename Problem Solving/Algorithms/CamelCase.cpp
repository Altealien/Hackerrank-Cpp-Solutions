#include <iostream>

int camelcase(std::string s) {
    int count =1;
    for(char c : s){
        if(std::isupper(c)){
            count++;
        }
    }
    return count;
}