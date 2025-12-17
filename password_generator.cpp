#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int length;

    string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowercase = "abcdefghijklmnopqrstuvwxyz";
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()-_=+[]{}<>?/";

    string allCharacters = uppercase + lowercase + numbers + symbols;

    cout << "Enter password length: ";
    cin >> length;

    if (length <= 0) {
        cout << "Invalid password length." << endl;
        return 0;
    }

    srand(time(0));

    string password = "";

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % allCharacters.length();
        password += allCharacters[randomIndex];
    }

    cout << "Generated Password: " << password << endl;

    return 0;
}
