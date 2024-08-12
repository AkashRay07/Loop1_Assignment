#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<26){
        cout<<97+i<<" -> "<<char(97+i)<<endl;
        i++;
    }
    return 0;
}