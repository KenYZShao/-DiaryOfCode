//Any changes made to the variable in the function don’t affect the actual argument. 
#include<iostream>
using namespace std;
void increment(int a, int b) {
	a = a + 50;
	b = b + 40;
	cout << "The value of x inside the function: " << a << endl;
	cout << "The value of y inside the function: " << b << endl;
}

void main() {
	int x = 20, y = 10;
	increment(x,y);
	cout << "The actual value of x is: " << x<< endl;
	cout << "The actual value of y is: " <<y;
}
