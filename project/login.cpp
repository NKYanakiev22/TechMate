#include "login.h"

extern std::unordered_map<std::string, std::string> users; // Use the global users map

bool login() {
    std::string username, password;
    int attempts = 3; // Allow 3 attempts to log in

    while (attempts > 0) {
        std::cout << "Enter your username: ";
        std::cin >> username;
        std::cout << "Enter your password: ";
        std::cin >> password;

        // Check if the username exists and the password matches
        if (users.find(username) != users.end() && users[username] == password) {
            std::cout << "Login successful! Welcome, " << username << "!\n";
            return true;
        }
        else {
            attempts--;
            std::cout << "Incorrect username or password. Attempts remaining: " << attempts << "\n";
        }
    }

    std::cout << "Too many failed attempts.\n";
    return false; // Login failed
}