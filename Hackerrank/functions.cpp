#include <iostream>
#include <vector>

void compareTriplets(std::vector<int>a, std::vector<int>b){
    int pointsBob{0}, pointsAlice{0};
    std::vector<int> result;
    for(int i = 0; i<a.size(); i++){
        if(a[i]>b[i]){
            pointsAlice++;
        }
        else if(a[i]<b[i]){
            pointsBob++;
        }
        else{
            continue;
        }
    }
        result.push_back(pointsAlice);
        result.push_back(pointsBob);
        
   
    for(int i = 0;i <result.size();i++){
        std::cout << result[i] <<" ";
     }
}
int main(){
     std::vector<int> a ={6,8,12};
     std::vector<int> b ={7,9,15};

     compareTriplets(a,b);
      
}