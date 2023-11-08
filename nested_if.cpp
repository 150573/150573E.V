#include<iostream>
using namespace std;
int main()
{
    int age;
    string interest, interest2;
    cout<<"enter age\n";
    cin>>age;
    if(age>=4&&age<=10){
        cout<<"entre interest";
        cin>>interest;
    if(interest=="soccer"){
        cout<<"assing to soccer club\n";
    }
    if(interest=="art"){
        cout<<"assing to art club\n";
    }else {
        cout<<"assing to other club\n";
    }
    }
    else{
        cout<<"Admission unseccesfull\n";
    }
    return 0;
}