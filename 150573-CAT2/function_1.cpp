#include<iostream>
using namespace std;
int add (int, int);
int main()
{
    int var1 =2, var2 =3;
    cout<< add(var1,var2);
    return 0;
}
int add(int a, int b){
    return a +b;
}