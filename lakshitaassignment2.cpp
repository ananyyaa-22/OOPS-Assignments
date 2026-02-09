/*Que1
#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int roll_no;
    string degree;
    string hostel;
    double cgpa;

    void addDetails()
    {
        cout<< "Enter rname";
        cin>>name;

		cout<< "Enter roll number";
		cin>>roll_no;
		
		cout<< "Enter CG";
		cin>>cgpa;
		
        cout<< "Enter degree";
       cin>>degree;

        cout<< "Enter hostel";
        cin>>hostel;}
        
    void updateDetails(){
        cout<< "Enter name2";
        cin>>name;

		cout<< "Enter updated roll number";
		cin>>roll_no;
		
        cout<< "Enter updated degree";
        cin>>degree;

		}
		
	void updateCGPA(){
		cout<< "Enter updated cgpa";
		cin>>cgpa;
	}	
		
	void updateHostel(){
        cout<< "Enter Hostel";
        cin>>hostel;

    }
    
    void displayDetails(){
    	cout<< name << endl;
    	cout<< roll_no << endl;
		cout<< hostel << endl;
		cout<< cgpa << endl;
		cout<< degree << endl;
	}
};
int main(){
	Student s;
	s.addDetails();
	s.updateDetails();
	s.updateCGPA();
	s.updateHostel();
	s.displayDetails();
	return 0;
}*/

/*Que2
#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int roll_no;
    string degree;
    string hostel;
    double cgpa;

    void addDetails()
    {
        cout<< "Enter rname";
        cin>>name;

		cout<< "Enter roll number";
		cin>>roll_no;
		
		cout<< "Enter CG";
		cin>>cgpa;
		
        cout<< "Enter degree";
       cin>>degree;

        cout<< "Enter hostel";
        cin>>hostel;}
        
    void updateDetails(){
        cout<< "Enter name2";
        cin>>name;

		cout<< "Enter updated roll number";
		cin>>roll_no;
		
        cout<< "Enter updated degree";
        cin>>degree;

		}
	public:
	
	void updateCGPA(){
		cout<< "Enter updated cgpa";
		cin>>cgpa;
	}	
		
	void updateHostel(){
        cout<< "Enter Hostel";
        cin>>hostel;

    }
    
    void displayDetails(){
    	cout<< name << endl;
    	cout<< roll_no << endl;
		cout<< hostel << endl;
		cout<< cgpa << endl;
		cout<< degree << endl;
	}
};
int main(){
	Student s;
    s.updateCGPA();
	s.updateHostel();
	s.displayDetails();
	return 0;
}*/

/*Que3
#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int roll_no;
    string degree;
    string hostel;
    double cgpa;

    void addDetails()
    {
        cout<< "Enter rname";
        cin>>name;

		cout<< "Enter roll number";
		cin>>roll_no;
		
		cout<< "Enter CG";
		cin>>cgpa;
		
        cout<< "Enter degree";
       cin>>degree;

        cout<< "Enter hostel";
        cin>>hostel;}
        
    void updateDetails(){
        cout<< "Enter name2";
        cin>>name;

		cout<< "Enter updated roll number";
		cin>>roll_no;
		
        cout<< "Enter updated degree";
        cin>>degree;

		}
		
    public:	void updateCGPA(){
	private:	cout<< "Enter updated cgpa";
		cin>>cgpa;
	}	
		
	void updateHostel(){
        cout<< "Enter Hostel";
        cin>>hostel;

    }
    
    void displayDetails(){
    	cout<< name << endl;
    	cout<< roll_no << endl;
		cout<< hostel << endl;
		cout<< cgpa << endl;
		cout<< degree << endl;
	}
};
int main(){
	Student s;

	s.updateCGPA();
	s.updateHostel();
	s.displayDetails();
	return 0;
}*/

//Que4
/*#include<iostream>
using namespace std;
class rectangle{
    float width;
    float height;
    public:
    void getData(){
        cout<<"Enter Width:";
        cin>>width;
        
        cout<<"Enter Height";
        cin>>height;
    }
    
    void calculateArea(){
        float area= width*height;
        cout<<"Area is:"<<area;
    }
};
int main(){
    rectangle r;
    r.getData();
    r.calculateArea();
}*/

//Que 6 a
/*#include <iostream>
using namespace std;
class A{
public: void fun();   
}; 
void A::fun(){      
cout<<"in fun()"<<endl;
} 
int main(){ 
A obj;  obj.fun(); 
}*/

//Que6b
/*#include<iostream>
using namespace std;
int x=100;
int main(){
	int x=-100;
	cout<<"x = "<<x<<endl;
	cout<<"x = "<<::x<<endl;
	return 0;
}*/

//Que 6c
/*#include<iostream>
using namespace std;
class X{
static int i;
public:void show(){cout<<"i ="<<i<<endl;}
};
int X::i=1;
int main(){
X obj; obj.show();
}*/

//Que 6d
/*#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Sum = " << a + b;
    return 0;
}*/

//Que 7
/*#include <iostream>
using namespace std;

namespace ClassA {
    int value = 10;
    void display() {
        cout << "Value from ClassA: " << value << endl;
    }
}
namespace ClassB {
    int value = 20;
    void display() {
        cout << "Value from ClassB: " << value << endl;
    }
}
int main() {
    ClassA::display();
    ClassB::display();
    cout << "Accessing variables directly:" << endl;
    cout << ClassA::value << endl;
    cout << ClassB::value << endl;
    return 0;
}*/





