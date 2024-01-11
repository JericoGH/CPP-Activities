// C++ Stack
#include <iostream>
#include <stack>

using std::cout;
using std::cin;
using std::endl;

int main() {
	// Stack push, pop, top, pop function.
	//1. Numbers stack
	std::stack<int> numbers;
	numbers.push(1);
	numbers.push(2);
	
	while (!numbers.empty()) {
		cout << numbers.top() << " ";
		numbers.pop();
	}
	cout << endl;
	
	//2. Names stack
	std::stack<std::string> names;
	names.push("Jerico");
	names.push("Lorenzo");
	
	while (!names.empty()) {
		cout << names.top() << " ";
		names.pop();
	}
	cout << endl;
	
		
	//3. .size function
	std::stack<int> howMany;
	for (int i = 0; i < 10; i++) {
		howMany.push(i);
	}
	cout << howMany.size() << " ";
	howMany.pop();
	cout << howMany.size() << " ";
	cout << endl;

	//4. .empty function (prints 0 = false, 1 = true that stack is empty)
	std::stack<int> isitempty;
	isitempty.push(5);
	isitempty.push(2);
	
	cout << isitempty.empty() << " ";
	
	while(!isitempty.empty()) {
		isitempty.pop();
	}
	cout << isitempty.empty() << " ";
	cout << endl;

	
	//5. Accessing specific element inside stack
	cout << howMany.top()-8 << " ";
	cout << howMany.top()-5 << " " << endl;
	cout << endl;
	
}