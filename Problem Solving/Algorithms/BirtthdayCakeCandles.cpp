#include <iostream>
#include <vector>

int birthdayCakeCandles(std::vector<int> candles) {
    int count{0}, max{0};
    for(int i =0;i<candles.size();i++){
        if(candles[i]>max){
            max = candles[i];
        }
    }
    for (int i{0};i<candles.size();i++){
        if(max==candles[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int size;
    std::cout << "Enter the size of the vector:";
    std::cin >> size;
    std::vector<int> candles(size);
    for(int i=0; i<size; i++){
        std::cin >> candles[i];
    }

    std::cout<<"The tallest candle appears "<<birthdayCakeCandles(candles)<<" times!"<<std::endl;

}