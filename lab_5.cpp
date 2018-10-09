#include <iostream>
#include <Math.h>
using namespace std;
int main()
{
    int x,y; 
    cout << "width of triangle is x= " <<endl;
    cin >> x;
    cout <<" height of triangle is y= " <<endl;
     cin >>y;
auto d=sqrt(pow(x,2)+pow(y,2));
cout<<"third side= " <<d<<endl;
return 0;
}