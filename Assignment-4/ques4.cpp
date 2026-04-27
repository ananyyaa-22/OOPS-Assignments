#include <iostream>
using namespace std;

class Student {
public:
    int id;
    void display() {
        cout << "Student ID: " << id << endl;
    }
};

int main() {

    int *ptr = new int(10);
    cout << "Integer: " << *ptr << endl;
    delete ptr;

    float *fptr = new float(5.5);
    cout << "Float: " << *fptr << endl;
    delete fptr;

    int *arr = new int[3]{1,2,3};
    cout << "Int Array: ";
    for(int i=0;i<3;i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr;

    float *farr = new float[3]{1.1,2.2,3.3};
    cout << "Float Array: ";
    for(int i=0;i<3;i++) cout << farr[i] << " ";
    cout << endl;
    delete[] farr;

    Student *s = new Student;
    s->id = 101;
    s->display();
    delete s;

    Student *sArr = new Student[2];
    for(int i=0;i<2;i++) sArr[i].id = i+1;

    for(int i=0;i<2;i++) sArr[i].display();
    delete[] sArr;

    return 0;
}