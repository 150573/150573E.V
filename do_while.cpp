#include <iostream>
using namespace std;

int main (){
    string food;
    char resp;
     cout<<"please enter a food you like:";
     cin>>food;
     cout<<"Do you wish to continue (Y/N)";
     cin>>resp;

     do{
        cout<<"please enter the food you like";
        cin>>food;
        cout<<"Do you wish to continue";
        cin>>resp;
     }while(resp!='N');
    return 0;
}
