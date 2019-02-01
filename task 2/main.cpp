#include <iostream>
#include <sstream>
#include <exception>
#include "rational.h"

using namespace std;

int main()
{
    try {
        Rational r(1, 0);
        cout << "Doesn't throw in case of zero denominator" << endl;
        return 1;
    } catch (invalid_argument& e) {
        cout << "caught exception invalid_argument: " << e.what() << endl;
    }

    try {
        auto x = Rational(1, 2) / Rational(0, 1);
        cout << "Doesn't throw in case of division by zero" << endl;
        return 2;
    } catch (domain_error& e) {
        cout << "caught exception domain_error: " << e.what() << endl;
    }

    cout << "OK" << endl;
    return 0;
    
    return 0;
}
