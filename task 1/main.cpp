#include <iostream>
#include <exception>

using namespace std;

void CheckEqual(const string& left, const string& right)
{
    if (left != right)
        throw runtime_error(left + " != " + right);       
}


int main(int argc, char** argv) {
    try {
        CheckEqual("Hello C++", "Hello C++");
        CheckEqual("Hello C++", "Bye C++");
    } catch (runtime_error& e) {
        cout << e.what() << endl;
    } 
    return 0;
}

