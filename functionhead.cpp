#include <iostream>
using namespace std;

void mainfunction(){
    cout << "user defined function\n";
}
int main (){
    cout << "This is where the main starts\n" ;
    mainfunction();
    mainfunction();
    cout << "This is where the main stops\n";

    return 0;
}
// functions cannot be defined inside other function
//like 
/* int main(){
    void userdefinedfunction(){

    }
}
will give you an eroor we have to define functions seperately*/
