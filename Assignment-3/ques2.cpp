#include <iostream>
using namespace std;
class Rectangle{
  int length;
  int breadth;

  public:
  Rectangle(){
    length=0;
    breadth=0;
    int area=length*breadth;
    cout<<area<<endl;
  }

  Rectangle(int l,int b){
    length=l;
    breadth=b;
    int area=length*breadth;
    cout<<area<<endl;
  }

  Rectangle(int x){
    length=x;
    breadth=x;
    int area=length*breadth;
    cout<<area<<endl;
  }

  int area(){
    return length*breadth;
  }
};

int main(){
  Rectangle arr[3]={Rectangle(),Rectangle(10,20),Rectangle(5)};
}