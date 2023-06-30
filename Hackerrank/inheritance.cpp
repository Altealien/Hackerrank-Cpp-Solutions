#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Triangle{
    public:
    void triangle(){
        std::cout << "I am a triangle\n";
    }
};

class Isoceles:public Triangle{
    public:
    void isoceles(){
        std::cout << "I am an isoceles triangle\n";
    }
    void description(){
        std::cout << "In an isosceles triangle two sides are equal\n";
    }
};

class Equilateral : public Isoceles{
    public:
        void equilateral(){
            std::cout << "I am an equilateral triangle\n";
        }
};


int main(){
    Equilateral eqr;
    eqr.triangle();
    eqr.isoceles();
    eqr.description();
    eqr.equilateral();
    
    /* We use the equilateral class because it has access to all the other classes. 
    i.e if I created a Triangle object , i'll only be able to access the methods in the Triangle class
        if I created an Isoceles object, i'll only be able to access the methods in the Isoceles class
        and the Triangle class(since it inherits it.) */
    return 0;
}