#include <iostream>
using namespace std;

int main (){
    string food;
    char resp;
     cout<<"please enter a food you like:";
     cin>>food;
     cout<<"Do you wish to continue (Y/N)";
     cin>>resp;

     while(resp!='N'){
        cout<<"please enter the food you like";
        cin>>food;
        cout<<"Do you wish to continue";
        cin>>resp;
     }
     return 0;
}
