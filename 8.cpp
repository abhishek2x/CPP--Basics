// Classroom-Constructor-1
// Copy Constructor


#include <iostream>
using namespace std;

class ABC
{
private:
    int a, b;
public:
    ABC(int i, int j){
        a = i;
        b = j;
    }
    ABC(ABC& other){
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
    b.get();
    a.get();
    return 0;
}
