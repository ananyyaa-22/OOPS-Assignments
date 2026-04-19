#include <iostream>
#include <cstdarg>
using namespace std;

class Sum {
private:
    int total;

public:
    Sum() {
        total = 0;
    }

    void operator()(int count, ...) {
        total = 0;

        va_list args;
        va_start(args, count);

        for (int i = 0; i < count; i++) {
            total += va_arg(args, int);
        }

        va_end(args);
    }

    void display() {
        cout << "Sum = " << total << endl;
    }
};

int main() {
    Sum s;

    s(3, 10, 20, 30);   
    s.display();

    s(5, 1, 2, 3, 4, 5); 
    s.display();

    return 0;
}