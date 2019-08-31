#include <iostream>

int main()
{
    using namespace std;
    int int_var = __INT_MAX__;

    cout << sizeof(char) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    
    cout << hex;
    cout << int_var << endl;

    return 0;
}
