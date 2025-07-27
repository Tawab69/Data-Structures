#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector declaration and initialization
    vector<int> vec;                           // Empty vector
    vector<int> vec2(5, 10);                   // Vector with 5 elements, each initialized to 10
    vector<int> vec3 = {1, 2, 3, 4, 5};       // Initializer list
    vector<int> vec4(vec3);                    // Copy constructor
    vector<int> vec5(vec3.begin(), vec3.begin() + 3); // Range constructor

    // Output initial vectors
    cout << "vec2 (size 5, value 10): ";
    for (const auto& val : vec2) cout << val << " ";
    cout << "\nvec3 (initializer list): ";
    for (const auto& val : vec3) cout << val << " ";
    cout << "\nvec4 (copy of vec3): ";
    for (const auto& val : vec4) cout << val << " ";
    cout << "\nvec5 (range from vec3): ";
    for (const auto& val : vec5) cout << val << " ";
    cout << "\n\n";

    // Element access
    cout << "Element access for vec3:\n";
    cout << "  Front: " << vec3.front() << "\n";
    cout << "  Back: " << vec3.back() << "\n";
    cout << "  At index 2: " << vec3.at(2) << "\n";
    cout << "  Operator[] index 2: " << vec3[2] << "\n";
    int* data_ptr = vec3.data();
    cout << "  Data pointer first element: " << *data_ptr << "\n\n";

    // Modifiers
    vec.push_back(100);                             // Add element to end
    vec.emplace_back(200);                          // Construct element in-place
    vec.insert(vec.begin() + 1, 50);                // Insert at position
    vec.emplace(vec.begin(), 10);                   // Emplace at beginning
    vec.pop_back();                                 // Remove last element
    vec.assign(3, 99);                              // Assign 3 elements with value 99
    vec.swap(vec2);                                 // Swap contents with vec2
    vec.clear();                                    // Clear vector

    cout << "After modifiers, vec (swapped with vec2, then cleared): ";
    for (const auto& val : vec) cout << val << " ";
    cout << "\nAfter swap, vec2: ";
    for (const auto& val : vec2) cout << val << " ";
    cout << "\n\n";

    // Capacity
    cout << "Capacity operations on vec3:\n";
    cout << "  Size: " << vec3.size() << "\n";
    cout << "  Capacity: " << vec3.capacity() << "\n";
    cout << "  Max size: " << vec3.max_size() << "\n";
    cout << "  Empty: " << (vec3.empty() ? "Yes" : "No") << "\n";
    vec3.reserve(10);                               // Reserve space
    cout << "  Capacity after reserve(10): " << vec3.capacity() << "\n";
    vec3.shrink_to_fit();                           // Shrink to fit
    cout << "  Capacity after shrink_to_fit: " << vec3.capacity() << "\n";
    vec3.resize(7, 0);                              // Resize to 7, fill with 0
    cout << "  Size after resize(7): " << vec3.size() << "\n";
    cout << "  vec3 content: ";
    for (const auto& val : vec3) cout << val << " ";
    cout << "\n\n";

    // Iterators
    cout << "Iterators for vec3:\n";
    cout << "  Forward: ";
    for (auto it = vec3.begin(); it != vec3.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n  Reverse: ";
    for (auto rit = vec3.rbegin(); rit != vec3.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << "\n";

    return 0;
}
