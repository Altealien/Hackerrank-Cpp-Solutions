#include <iostream>
#include <string>

std::string kangaroo(int x1, int v1, int x2, int v2) {
    double n = static_cast<double>((x2-x1))/(v1-v2); // this calculates the number of jumps
    /*IF N IS A +VE INTEGER, IT MEANS THE KANGAROOS WILL EVENTUALLY MEET*/
    if(n >=0 && n == static_cast<int>(n)){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
    std::cout << kangaroo(21,6,47,3) << std::endl;
}
