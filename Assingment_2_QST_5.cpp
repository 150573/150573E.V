#include<iostream>
using namespace std;
int main ()
{
   int choice_of_area, r, lenght, width, base, height, area;
   const int pi=3.14;
    cout<<"choose choice_of_area 1, 2, 3\n";
    cin>>choice_of_area;
    switch(choice_of_area){
        case 1:
        cout<<"calculate area of circle\n";
        cout<<"Entre r\n";
        cin>>r;
         area= pi*r*r;
        cout<<"area is:"<<area<<"\n";
        break;
        case 2:
        cout<<"calculate area of rectangle\n";
        cout<<"entre lenght\n";
        cin>>lenght;
        cout<<"Entre width\n";
        cin>>width;
        area=lenght*width;
        cout<<"area is:"<<area<<"\n";
        break;
        case 3:
        cout<<"calculate area of triangle\n";
        cout<<"Entre base\n";
        cin>>base;
        cout<<"Entre height\n";
        cin>>height;
        area=base*height/2; 
        cout<<"area is:"<<area<<"\n";
        break;
        default:
        cout<<"Quit\n";
    }
    return 0;
}