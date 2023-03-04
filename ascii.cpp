#include <iostream>
using namespace std;
// this can be done in two ways 
//1) using  char ch and using the char itself in the if condition
//2) using 
int main(){
    /*
    char ch;
    cout << "enter your character ";
    cin >> ch;
    if(ch>='a' && ch<='z'){
        cout << "lowercase\n";
    }    
    else if (ch>='A' && ch<='Z'){
        cout<<"uppercase\n";

    }
    else if (ch>='0'&&ch<='9'){
        cout<<"numbers\n";
    }
    else {
        cout<<"something other than uppercase,lowercase and numbers\n";
    }

    */
 //METHOD 2 USING ASCII VALUE 
 char ch;
 cout <<"enter your character"<<endl;
 cin >> ch;
 int a;
 a=int(ch);
if(a>=97 && a<=122){
    cout<<"lowercase"<<endl;
}
else if (a>=65 && a<=90){
    cout<<"uppercase"<<endl;
}
else if (a>=48 && a<=57){
    cout<<"number"<<endl;
}
else {
    cout<< "something other than numbers,uppercase,lowercase"<<endl;
}



    return 0;
}