// Classroom-Constructor-1
// Default Constructor

#include <iostream>
using namespace std;

class A{
    int x = 5;
    public:
        A(){
            cout << "I'm a constructor" << endl;
        }
};

int main(){
    A a1;
    return 0;
}
