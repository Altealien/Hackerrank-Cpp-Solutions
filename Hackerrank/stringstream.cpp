#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char ch;
    int num;
    
    std::vector<int> numbers;
    /*The getline function is typically used to read input from a stream, such as a file or a string, 
    until a specified delimiter is encountered. In the code you provided, 
    getline(ss, str, ',') is used to read data from the input stream ss until a comma (',') is encountered.*/
        while(getline(ss,str,','))
        {// with the help of the while loop it keeps on goin till there are no more commas
            num = stoi(str);
            numbers.push_back(num);
        }
    return numbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}