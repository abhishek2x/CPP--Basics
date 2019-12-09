// Classroom-Constructor-1
// Parameterised Constructor


#include <iostream>
using namespace std;

class A
{
private:
    int x, y;
public:
    A(int a, int b){
        x = a;
        y = b;
    }
    void get(){
        cout << x;
    }
};

int main(){
    A a(5, 10);
    a.get();
    return 0;
}
