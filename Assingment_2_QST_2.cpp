#include<iostream>
using namespace std;
int main()
{
    string full_name, course; 
    int score;
    cout<<"Entre full_name\ncourse\nscore\n";
    cin>>full_name; cin>>course; cin>>score;
    if(score>=70){
        cout<<"'A'\n";
    }
    else if(score>=60&&score<=69){
        cout<<"'B'\n";
    }
    else if(score>=50&&score<=59){
        cout<<"'C'\n";
    }
    else if(score>=40&&score<=49){
        cout<<"'D'\n";
    }
    else if(score<40){
        cout<<"'F'\n";
    }
    else{
        cout<<"Invalid score\n";
    }
    return 0;
}