#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n ;
    char ch ='#';

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            std::cout << " ";
        }
        for(int k=1; k<=i; k++){
            std::cout << ch;
        }
        std::cout << std::endl;
    }

    
    
}