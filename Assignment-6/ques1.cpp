#include <iostream>
#include <string.h>
using namespace std;
class Book
{
public:
  string title;
  string author;
  int isbn;

  void setDetails(string &title, string &author, int &isbn)
  {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
  }

  void display()
  {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
  }
};
class Library
{
  public:
  Book books[100];
  static int count;

    bool addNewBook(string &title, string &author, int &isbn){
    if(count>=100){
      return false;
    }
    books[count].setDetails(title, author, isbn);
    count++;
    return true; 
  }
  
    bool  removeBooks(string &isbn);
    void displayDetails();
};
int Library::count;
bool Library::removeBooks(string &isbn){
  for(int i=0; i<count; i++){
    
  }
}