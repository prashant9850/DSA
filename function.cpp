#include<iostream>
using namespace std;
void printname(string name){
    cout<<"hello "<<name;
}
int main(){
    string name;
    cout<<"enter a name - ";
    cin>>name;
    printname(name);
}