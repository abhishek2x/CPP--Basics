// constructor play
#include <iostream>
using namespace std;

class Rock{
    public:
    Rock(){
        cout << "I'm default\n";
    }
    Rock(int a){
        cout << "I'm first parameterised\n";
    }
    Rock(int a, int b){
        cout << "I'm first parameterised\n";
    }
    
    ~Rock(){
        cout << "I'm destroyed default\n";
    }
};

int main(){
    Rock();
    Rock(3);
    Rock(3, 8);
    return 0;
}
