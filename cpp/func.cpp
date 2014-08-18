#include <iostream>

using namespace std;

// Store your function in a variable.
// Function with no arguments and no return.
void (*func)() = 0;
// Function with two arguments and return.
int (*arg_func)(int, int) = 0;

void print()
{
    cout << "Hooray" << endl;
}

int sum(int a, int b)
{
    return a + b;
}

// Passing function as argument.
void call_function(void (*f)())
{
    f();
}

// Passing function with parameters as argument.
int call_arg_function(int (*f)(int, int))
{
    return f(2, 2);
}

int main(int argc, char const *argv[])
{
    func = print;
    func(); // Print Hooray.
    call_function(print); // Print Hooray.

    arg_func = sum;
    cout << arg_func(2, 2) << endl; // Print 4.
    cout << call_arg_function(sum) << endl; // Print 4.

    return 0;
}
