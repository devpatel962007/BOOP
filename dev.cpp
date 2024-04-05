#include <iostream>
#include <string>

class Student {
private:
     int roll_no;
     std::String name;
     int age;

public:
     // Constructor
     student(int r , std::string n , int a) : roll_no(r), name(n), age(a) {}
    
    // Getter functions
    int getRollNo() { return roll no; }
    std::string getName() { return name; }
    int getAge() { return age; }

    // Setter functions
    void set RollNo(int r) {roll-no= r;}
    void setName(std::string n) { name= n; }
    void setAge(int a) { age = a;}
};