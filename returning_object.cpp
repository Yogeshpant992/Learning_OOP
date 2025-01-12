#include <iostream>
using namespace std;

class MYclass {
public:
    int a;

    // Function to multiply the current object's 'a' with another object's 'a'
    MYclass myfunction(MYclass obj) {
        MYclass result; // Create a new MYclass object to hold the result
        result.a = this->a * obj.a; // Multiply and store in the result object
        return result; // Return the result object
    }
};

int main() {
    MYclass E1, E2, E3;
    E1.a = 23; // Initialize E1's 'a'
    E2.a = 42; // Initialize E2's 'a'

    cout << "Initial Value: " << E1.a << " " << E2.a << endl;

    // Call myfunction on E1 with E2 as argument and store the result in E3
    E3 = E1.myfunction(E2);

    cout << "New value of E3 after multiplying E1 and E2: " << E3.a << endl;

    return 0;
}