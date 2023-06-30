#include <iostream>

using namespace std;

class Rectangle{
    public:
       virtual void display(){
        std::cout << width <<" " << height << std::endl;
    }
    protected:
    int width, height;
};

class RectangleArea:public Rectangle{
    public:
        void read_input(){
        std::cin >> width >> height;
    }
        void display() override{
        int area = width * height;
        std::cout <<area;
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}