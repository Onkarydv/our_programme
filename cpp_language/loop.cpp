#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<< endl;
    cin>>n;
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }   
        cout<<"sum of n natural number is:"<< endl;
        cout<< sum <<endl;

    return 0;
}