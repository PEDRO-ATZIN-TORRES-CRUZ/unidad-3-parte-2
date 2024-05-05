#include <iostream>
using namespace std;
int main()
{
	float f_num, Total = 0.0;
	do
{
	cout << "enter a number: ";
	cin >> f_num;
	Total += f_num;
	
}
while(f_num != 0.0);
cout << "Total Sum = " << Total;
return 0;
}
