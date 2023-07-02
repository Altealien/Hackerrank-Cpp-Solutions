#include<iostream>
#include<string>

std::string catAndMouse(int x, int y, int z) {
    int bigDiff = std::abs(z-x);
    int smallDiff = std::abs(z-y);
    if(bigDiff ==smallDiff){
        return "Mouse C";
    }
    else if(bigDiff > smallDiff){
        return "Cat B";
    }
    else{
        return "Cat A";
    }


}

int main(){
    std::cout<<catAndMouse(100,0,0);
}