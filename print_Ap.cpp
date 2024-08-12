#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter nth term :";
    cin>>n;
    int ap=4;
    for(int i=1;i<=n;i++){
        cout<<ap<<" ";
        ap+=3;
    }
}