#include <iostream>
using namespace std;

class Person
{
private: 
    int num =85; 
protected:
    int age =10;

public:
    int id= 25;
};

class Student : public Person
{
    public: 
    void print(){
        cout<< age<< endl;
    }
};
class Teacher : protected Person
{
    public: 
    void print(){
        cout<<age<<" "<<id<<endl;
    }
};
class Staff : private Person
{
    public: 
    void print(){
        cout<<age<<" "<<id<<endl;
    }
};

int main()
{
    Student s;
    // cout<< s.num; -> invalid
    // cout<< s.age;
    s.print();
    cout<< s.id<< endl;

    Teacher t;
    // cout<< t.num;
    // cout<< t.age;
    // cout<< t.id;
    t.print();

    Staff f;
    // cout<< f.num;
    // cout<< f.age;
    // cout<< f.id;
    f.print();
}