#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter nth term :";
    cin>>n;
    int GP=3;
    for(int i=1;i<=n;i++){
        cout<<GP<<" ";
        GP*=4;
    }
}