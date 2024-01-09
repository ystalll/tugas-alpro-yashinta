#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    
    cout << "masukan nilai a: ";
    cin >> a;
    
    cout << "masukan nilai b: ";
    cin >> b;
    
    if (a % 2 == 1 && b % 2 == 0) {
    	cout << "nilai a (" << a << ") adalah bilangan ganjil, dan nilai b (" << b << ") adalah bilangan genap." << endl;
    } else {
    	cout << "kondisi tidak memenuhi syarat" << endl;	
	}
 
 return 0;
}
