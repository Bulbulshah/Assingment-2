#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	 cout << "iomanip Manipulators:\n";
	
	// printing set width
	cout<< setw(12) << "Roll Number" << setw(12) << " Name " << setw(14) <<"Mark\n";
	cout<< setw(12) << "101" << setw(12) << " Bulbul " << setw(14) <<"306\n";
	cout<< setw(12) << "102" << setw(12) << " Nazia " << setw(14) <<"321\n";
	cout<< setw(12) << "103" << setw(12) << " Shakir " << setw(14) <<"170\n";
	cout<< setw(12) << "104" << setw(12) << " Ismail" << setw(14) <<"300\n";
	
	 // Demonstrating left and right alignment
    cout << " left and right alignment:\n";
    cout << left << setw(12) << "Left" << setw(12) << 100 << endl;
    cout << left << setw(12) << "Left" << setw(12) << 100 << endl;
    
     // Demonstrating fixed and setprecision
    cout << "\n3. fixed and setprecision:\n";
    cout << "Original: " << 123.456789 << endl;
    cout << fixed << setprecision(2) << "Fixed (2 decimals): " << 123.456789 << endl;
	 return 0;
}
