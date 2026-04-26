#include <iostream>
using namespace std;

class Shape
{
public:
  void draw()
  {
    cout << "This is a shape" << endl;
  }
};

class Circle : public Shape
{
public:
  void sides()
  {
    cout << "Circle has no sides" << endl;
  }
};

int main()
{
  Shape a;
  a.draw();
  Circle d;
  d.draw();  
  d.sides(); 
  return 0;
}
