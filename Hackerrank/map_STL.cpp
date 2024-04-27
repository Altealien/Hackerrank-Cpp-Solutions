#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int queries, queryType, score{0};
    std::string name ="";
    std::map<std::string,int> myMap; 
    std::cin >> queries;
    myMap.insert(make_pair(name,score));
    while(std::cin >> queryType){
        switch (queryType) {
            case 1:
                std::cin >> name >> score;
                myMap[name] += score;
                break;
            case 2:
                std::cin >> name;
                myMap.erase(name);
                break;
            case 3:
                std::cin >> name;
                std::map<std::string,int>::iterator itr = myMap.find(name);
                std::cout << myMap[name] << std::endl;
                break;
        }
    }
    return 0;
}