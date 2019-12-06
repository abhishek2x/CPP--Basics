// Calling practice
#include <iostream>
using namespace std;
class Calling{
public:
    int age;
    string name;
    char gender;

    Calling(string name, int age, char gender){
        age = 0;
        name = "";
        gender = 'M';
    }
    void printDetails(string name, int age, char gender){
        cout << endl <<"OUTPUT : "<< endl;
        cout << name << endl << age << endl << gender << endl;
    }
};

int main(){
    int age;
    string name;
    char gender;

    Calling ob(name, age, gender);

    cout << "Enter name" << endl;
    cin >> name;
    cout << endl << "Enter age" << endl;
    cin >> age;
    cout << endl << "Enter gender" << endl;
    cin >> gender;

    ob.printDetails(name, age, gender);
    return 0;
}
