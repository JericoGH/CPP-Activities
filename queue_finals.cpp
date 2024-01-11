#include <iostream>
#include <queue>

using namespace std;

int main () {
	queue<string> clients;

	cout << "Transaction Queuing System" << endl;
	clients.push("Robert");
	clients.push("Mark");
	clients.push("Jade");
	clients.push("Mary");
	clients.push("Chris");
	
	cout << "\nThere are " << clients.size() << " clients in queue for transaction." << endl;
	
	while (!clients.empty()) {
		char ans;
		cout << "\n" << clients.front() << " is now transacting..." << endl;
		cout << "Is transaction finished? (Y/N): ";
		cin >> ans;
		if (ans == 'Y') {
			clients.pop();
		}
	}
	
	cout << "\nAll transactions done." << endl;
}