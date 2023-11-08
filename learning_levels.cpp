#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"entre age\n";
    cin>>age;
    if(age>=7){
        cout<<"admitt to grade school\n";
    }
    else if(age>=5&&age<=6){
    cout<<"Admit to kindergerten\n";
    }
    else if(age>=3&&age<=4){
        cout<<"admit to pre_school\n";
    }
    else if(age>=1&&age<=2){
        cout<<"admit to playground\n";
    }
    else if(age<1){
        cout<<"reject\n";
    }
    else{
        cout<<"not interested\n";
    }
    return 0;
}