#include "register.h"
using namespace std;

extern unordered_map<string, string> users; // Declare the global user map

void registerUser() {
    string username, password;
    cout << "=== Register ===\n";
    cout << "Enter a username: ";
    cin >> username;

    if (users.find(username) != users.end()) {
        cout << "Username already exists! Please choose a different one.\n";
        return;
    }

    cout << "Enter a password: ";
    cin >> password;

    users[username] = password;
    cout << "Registration successful! You can now log in.\n";
}
