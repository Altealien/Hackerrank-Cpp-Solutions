#include <iostream>
#include <sstream>
using namespace std;

class Student{
    public:
    void set_age(int age){
        Age =age;
    }
    void set_standard(int standard){
        Standard =standard;
    }
    void set_first_name(std::string firstname){
        First_name = firstname;
    }
    void set_last_name(std::string lastname){
        Last_name = lastname;
    }
    int get_age(){
        return Age;
    }
    int get_standard(){
        return Standard;
    }
    std::string get_first_name(){
        return First_name;
    }
    std::string get_last_name(){
        return Last_name;
    }
    //this function puts all the information into the stream and manipulates it(i guess?)
    /*  clear()- To clear the stream.
        str()- To get and set string object whose content is present in the stream. 
        operator <<- Add a string to the stringstream object. 
        operator >>- Read something from the stringstream object.*/
    std::stringstream string(){
       std::stringstream ss;
       ss << get_age();
       ss << ",";
       ss << get_first_name();
       ss << ",";
       ss << get_last_name();
       ss << ",";
       ss << get_standard();
       
       return ss;
    }
    std::string to_string(){
        std::stringstream result = string();
        std::string realString = result.str(); // str()->To get and set string object whose content is present in the stream.
        return realString;
    }
  private:
    int Age,Standard;
    std::string First_name, Last_name;  
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}