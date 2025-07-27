#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Queue declaration and initialization
    queue<int> q;

    // Push elements
    q.push(10);                                     // Push element
    q.push(20);
    q.push(30);
    q.emplace(40);                                  // Construct and push element

    cout << "Queue after pushing 10, 20, 30, 40:\n";
    queue<int> temp = q;                       // Copy queue for display
    cout << "  Elements (front to back): ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << "\n\n";

    // Element access
    cout << "Element access:\n";
    cout << "  Front element: " << q.front() << "\n";
    cout << "  Back element: " << q.back() << "\n\n";

    // Modifiers
    q.pop();                                        // Remove front element
    cout << "After pop, front element: " << q.front() << "\n";
    queue<int> q2;
    q2.push(100);
    q2.push(200);
    q.swap(q2);                                     // Swap with another queue
    cout << "After swap, q front: " << q.front() << "\n";
    cout << "After swap, q2 front: " << q2.front() << "\n\n";

    // Capacity
    cout << "Capacity operations on q:\n";
    cout << "  Size: " << q.size() << "\n";
    cout << "  Empty: " << (q.empty() ? "Yes" : "No") << "\n";

    return 0;
}
