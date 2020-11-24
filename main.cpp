// this is new
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
double celsius(double num) {
    double celsius = 5.0 / 9.0 * (num - 32);
    return celsius;
};

double fahrenheit(double num) {
    double fahrenheit = 9.0 / 5.0 * (num + 32);
    return fahrenheit;
}
// so is this
int main() {
    string temp;
    double num;
    string str;
    cout << "Please enter f or c to convert to Fahrenheit and Celsius respectively, followed by a space and then the number to convert and press enter: " << endl;
    cin >> temp >> num;
    
    if (temp == "f" && temp.length()  == 1) {
    /* ran into a logical error that would make the program hang if entered (temp.length - 1 == 0) if multiple characters were in temp, however, A normal invalid input was reached if a value for num is entered.... curious. I'm assuming the value of 0 equating to false being the culprit */
        cout << fahrenheit(num) << endl;
        cout << temp.length() - 1 << endl;
    } else if (temp == "c" && temp.length() == 1) {
        cout << celsius(num) << endl;    }
     else {
         cout << "Invalid input, try again" << endl;
    }
    
    return 0;
}
