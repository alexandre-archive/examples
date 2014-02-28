/*
    Simple way to concat an array into a string.
    Similar `','.join([1, 2, 3])` from Python.
*/

#include <iostream>
#include <sstream>
#include <ostream>

using namespace std;

class Foo
{
public:
    string name;

    friend std::ostream & operator<<(std::ostream & out, const Foo & o);
};

ostream & operator<<(ostream & out, const Foo & o) {
   return out << o.name;
}

/*
    Join an array into a string.
*/
template <typename T>
string join(const string separator, T& list)
{
    stringstream s;

    int size = sizeof(list) / sizeof(*list);

    for (int i = 0; i < size; ++i)
    {
        if (i != 0)
        {
            s << separator;
        }

        s << list[i];
    }

    return s.str();
}

int main()
{
    // Examples
    string s [] = { "a", "b", "c" };
    cout << "join(\", \", { \"a\", \"b\", \"c\" }: " << join(", ", s) << endl;

    string s1 [] = { };
    cout << "join(\", \", { }: " << join(", ", s1) << endl;

    char c [] = { 'a', 'b', 'c' };
    cout << "join(\", \", { 'a', 'b', 'c' }): " << join(", ", c) << endl;

    int i [] = { 1, 2, 3, 4, 5 };
    cout << "join(\":\", { 1, 2, 3, 4, 5 }): " << join(":", i) << endl;

    Foo f1;
    f1.name = "Foo";

    Foo f2;
    f2.name = "Bar";

    Foo f [] = { f1, f2 };
    cout << "join(\"+\", { f1, f2 }): " << join("+", f) << endl;

    bool b [] = { false };
    cout << "join(\",\", { false }): " << join(",", b) << endl;

    return 0;
}