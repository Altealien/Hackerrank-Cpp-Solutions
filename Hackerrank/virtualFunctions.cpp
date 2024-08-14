#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Person
{
public:
    std::string name;
    int age;
    virtual void getdata()
    {
    }
    virtual void putdata()
    {
    }
};

class Professor : public Person
{
    int publications, cur_id;
    static int professor_count;

public:
    Professor()
    {
        cur_id = professor_count++;
    }
    void getdata() override
    {
        std::cin >> name >> age >> publications;
    }
    void putdata() override
    {
        std::cout << name << " " << age << " " << publications << " " << cur_id << std::endl;
    }
};
int Professor::professor_count = 1;

class Student : public Person
{
    int marks[6];
    int cur_id;
    int mark, sum{0};
    static int student_count;

public:
    Student()
    {
        cur_id = student_count++;
    }
    void getdata() override
    {
        std::cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            std::cin >> mark;
            marks[i] = mark;
            sum += mark;
        }
    }
    void putdata() override
    {
        std::cout << name << " " << age << " " << sum << " " << cur_id << " " << std::endl;
    }
};
int Student::student_count = 1;

int main()
{

    int n, val;
    std::cin >> n; // The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        std::cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
