#include <iostream>
#include <vector>
#include <algorithm> 

int hurdleRace(int k, std::vector<int> height) {
    sort(height.begin(),height.end());
    int maxHurdleHeight = height[height.size()-1];
    if(k>=maxHurdleHeight){
        return 0;
    }
    else{
        return maxHurdleHeight-k;
    }
}

int main(){
    std::cout <<"Enter player height:";
    int playerHeight;
    std::cin>> playerHeight;

    std::cout <<"Enter number of hurdles:";
    int n;
    std::cin>> n;

    std::vector<int> hurdleHeight(n);
    std::cout<<"Enter hurdle heights:";
    for(int i=0;i<n;i++){
        std::cin >> hurdleHeight[i];
    }

    std::cout<< "Number of magic potions needed is "<<hurdleRace(playerHeight,hurdleHeight)<<"."<< std::endl;
}