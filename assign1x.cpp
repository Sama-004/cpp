#include <iostream>
using std::cout;
using std::cin;

int main(){
    int a{}, b{};

    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;
    cout << a << "+" << b << " is\t" << a+b<< '\n';
    cout << a << "-" << b << " is\t" << a-b << '\n';




    return 0;
}