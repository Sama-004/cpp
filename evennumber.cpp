#include <iostream>
using namespace std;
int main(){
    cout<<"enter number"<<endl;
    int n;
    cin>>n;
    int i=2;
    int sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"the sum is"<<" "<<sum<<endl;




    return 0;
}