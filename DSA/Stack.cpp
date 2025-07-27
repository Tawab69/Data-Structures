#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Stack declaration and initialization
    stack<int> stk;

    // Push elements
    stk.push(10);                                   // Push element
    stk.push(20);
    stk.push(30);
    stk.emplace(40);                                // Construct and push element

    cout << "Stack after pushing 10, 20, 30, 40:\n";
    stack<int> temp = stk;                     // Copy stack for display
    cout << "  Elements (top to bottom): ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << "\n\n";

    // Element access
    cout << "Element access:\n";
    cout << "  Top element: " << stk.top() << "\n\n";

    // Modifiers
    stk.pop();                                      // Remove top element
    cout << "After pop, top element: " << stk.top() << "\n";
    stack<int> stk2;
    stk2.push(100);
    stk2.push(200);
    stk.swap(stk2);                                 // Swap with another stack
    cout << "After swap, stk top: " << stk.top() << "\n";
    cout << "After swap, stk2 top: " << stk2.top() << "\n\n";

    // Capacity
    cout << "Capacity operations on stk:\n";
    cout << "  Size: " << stk.size() << "\n";
    cout << "  Empty: " << (stk.empty() ? "Yes" : "No") << "\n";

    return 0;
}
