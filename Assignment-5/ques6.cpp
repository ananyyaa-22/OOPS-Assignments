#include <iostream>
using namespace std;

class Book
{
protected:
  string title;
  string author;
  float price;

public:
  Book(string t, string a, float p)
  {
    title = t;
    author = a;
    price = p;
  }
  void displayBook()
  {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
  }
};

class Textbook : public Book
{
protected:
  string subject;

public:
  Textbook(string t, string a, float p, string s)
      : Book(t, a, p)
  {
    subject = s;
  }
  void displayTextbook()
  {
    displayBook();
    cout << "Subject: " << subject << endl;
  }
};

int main()
{
  Book b("The Alchemist", "Paulo Coelho", 299.0);
  b.displayBook();

  Textbook t("Mathematics", "RD Sharma", 599.0, "Mathematics");
  t.displayTextbook();

  return 0;
}