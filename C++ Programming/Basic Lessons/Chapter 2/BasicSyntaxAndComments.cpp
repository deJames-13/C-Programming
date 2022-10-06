// one line comment
/*
This is a multi line comment
*/

#include <iostream>  // standard input output library
using namespace std; // aliasing the standad class by calling it first

// argc means the count of arguments placed while executing the file
// argv is the array of arguments used in executing
int main(int argc, char **argv)
{
    // with std alias
    cout << "Hello World" << endl;
    // without std alias
    // std::cout << "Hello, World" << std::endl;s
    return 0;
}