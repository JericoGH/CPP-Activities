#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> ten;

cout << "Welcome to my Task Manager!\n" << endl;

    ten.push("Play Guitar");
    ten.push("Exercise");
    ten.push("Take a Nap");
    ten.push("Practice Coding");
    ten.push("Cook Dinner");
    ten.push("Take a Walk");
    ten.push("Plan the Week");

    cout << "Tasks added to my list. \n" << endl;

    if (!ten.empty()) {
        cout << "First task: " << ten.front() << "\n";
    } else {
        cout << "No tasks in my list.\n";
    }

    cout << "Working on my tasks...\n" << endl;
    while (!ten.empty ()) {
        cout << "Task completed: " << ten.front() << "\n";
     ten.pop();
    }


    cout << "My task list is now empty. Yay!\n";

    return 0;
}