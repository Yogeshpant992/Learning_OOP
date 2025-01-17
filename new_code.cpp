#include <iostream>
#include <cstring>
using namespace std;

class Addition {
    char str[200]; // Increased size to accommodate concatenated strings
public:
    Addition() {
        str[0] = '\0'; // Initialize to an empty string
    }

    Addition( char str[]) {
        strcpy(this->str, str);
    }

    Addition operator+(Addition& s2) {
        Addition s3;
        strcpy(s3.str, this->str); // Copy the first string
        strcat(s3.str, s2.str);    // Concatenate the second string
        return s3; // Return the new object
    }

    const char* getString()  { // Method to access the string
        return str;
    }
};

int main() {
    char st2[] = {"This is really good"};
    char st3[] = {" time to start."};

    Addition a1(st2);
    Addition a2(st3);
    Addition a3;

    a3 = a1 + a2;

    cout << "Concatenation: " << a3.getString() << endl; // Use the method to get the string
    return 0;
}