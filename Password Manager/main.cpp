#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <filesystem>

using namespace std;


string generatePassword(int len) {
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?";
    string password = "";

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < len; i++) {
        password += characters[rand() % characters.length()];
    }

    return password;
}

void addPassword(ofstream& file) {
    string website, username, password;
    int length;

    cout << "Enter the website name: ";
    cin >> website;

    cout << "Please enter your username: ";
    cin >> username;

    cout << "Enter password length you want: ";
    cin >> length;

    password = generatePassword(length);

    file << website << "-------" << username << "--------" << password << "\n";
    cout << "Password added successfully" << endl;
}

void viewPasswords(ifstream& file) {
    string line;

    cout << "Stored passwords:\n";

    while (getline(file, line)) {
        cout << line << endl;
    }
}

int main() {

    string dir_path = "D:\Projects\C++ Projects\Password Manager";

    string file_name = "password.txt";

   
    ifstream inFile("passwords.txt"); // Open for reading

    if (!inFile.is_open()) {
        cout << "Password file not found. Creating a new file." << endl;
        inFile.close();  // Close the initially attempted file
        ofstream createFile("passwords.dat");  // Create a new file
        createFile.close();
        inFile.open("passwords.dat");  // Reopen the file for reading
    }


    ofstream outFile("passwords.txt", std::ios::app); // Open for writing (appending)

    int choice = 0;
    do {
        cout << "Press 1 to Add Passwords\n";
        cout << "Press 2 to View Passwords\n";
        cout << "Press 3 to Exit Passwords\n";
        cout << "Press your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addPassword(outFile);
                break;
            case 2:
                viewPasswords(inFile);
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please enter a valid choice from the given options" << endl;
        }
    } while (choice != 3);

    inFile.close();
    outFile.close();

    return 0;
}
