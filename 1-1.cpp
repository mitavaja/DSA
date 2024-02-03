#include<iostream>
using namespace std;

int main()
{
//print 
	cout << "hello world" <<endl ; 
	
//static
	int a=5,b=7;
	
	cout << a+b;
	
//dynamic
	int x, y;
	int sum;
	  
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	  
	sum = x + y;
	cout << "Sum is: " << sum;
 		
	return 0;
}

