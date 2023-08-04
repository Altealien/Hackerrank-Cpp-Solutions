#include<iostream>

int utopianTree(int n) {
    int initHeight = 1, newHeight = initHeight;
    if (n==0){
        return initHeight;
    }
    else{
        for(int i =1; i<=n; i++){
            if(i%2==1){
            newHeight *=2;
        }
        else{
            newHeight += 1;
        }
    }
    return newHeight;
}
}
int main(){
    std::cout << utopianTree(0) << std::endl;
    std::cout << utopianTree(1) << std::endl;
    std::cout << utopianTree(4) << std::endl;
}