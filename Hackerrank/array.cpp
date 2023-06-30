#include <iostream> 

int main(){ 
    int n;
    std::cin >> n;
    
    int myArray[n]; 
    int reverseArray[n];
    
    for(int i =0; i<n;i++){
        std::cin >> myArray[i];
    }
    for(int i =0; i<n;i++)
        reverseArray[i] = myArray[n-(i+1)];

    for(int i =0; i<n; i++){
        std::cout << reverseArray[i]<<" ";
    }
}
    
    