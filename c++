#include <iostream>
using namespace std;
int main ()
{
int a,b,c;
cin>>a>>b>>c;
if (b>a && a>c ||a>b&&c>a)
{cout<<a;}

else if(a>b&&b>c||b>a&&c>b)
cout<<b;

else if(c>a&&b>c||a>c&&c>b)
cout<<c;


system ("pause");
return 0 ;}
