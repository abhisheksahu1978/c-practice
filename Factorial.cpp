#include <iostream>
using namespace std;
int main(){
    int factorial = 1;
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i==0){
            cout<<1<<endl;
        }
        factorial = factorial * i;
        cout<<factorial<<" ";
    }
    cout<<" factorial of "<<n<<" is "<<factorial<<"."<<endl;
}