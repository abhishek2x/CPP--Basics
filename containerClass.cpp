#include <iostream>
using namespace std;

class First{
   public:
    void show(){
        cout << "Hello from first class\n";
    } 
};
// Container Class
class Second{
    // creating object of first class
    First f;
    public:
        // Constructor
        Second(){
            // calling function of first class
            f.show();
        }
};

int main(){
    // creating an object of second class
    Second s;
}