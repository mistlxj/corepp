#include <iostream>
using namespace std;

int main() 
{
	typedef void (*FunctionPointer)(int);
	int value = 21;
	int* pointer = &value;
	
	int * pointer_r = reinterpret_cast<int*> (pointer); 
	// Error: reinterpret_cast from type 'const int*' to type 'int*' casts away constness
	
	//FunctionPointer funcP = reinterpret_cast<FunctionPointer> (pointer);
    
    cout << "end of" << endl;
}