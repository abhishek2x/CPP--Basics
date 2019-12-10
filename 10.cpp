// Classroom-Constructor-1
// Copy Constructor(c)


#include <iostream>
using namespace std;

class ABC{
    private:
        int a, b;
    public:
        ABC(int i, int j){
            a = i;
            b = j;
        }
        ABC(ABC& other){        // Copy constructor
            a = other.a;
            b = other.b;
        }
        void get(){
            cout << a << endl << b << endl;
        }
};

int main(){
    ABC a(10, 20);
    ABC b(a);       //Copy constructor
    ABC c(b);       //Copy constructor
    c.get();
    return 0;
}
