#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt");

    file << "Ali Raza 110" << endl;
    file << "Abdullah 1095" << endl;
    file << "Sobia 111" << endl;

    file.close();

    cout << "Student data written successfully.\n" << endl;
    ifstream readFile("students.txt");

    string name;
    int rollNo;

    cout << "Student Details:\n" << endl;
    while (readFile >> name >> rollNo) {

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << endl;
    }

    readFile.close();

    return 0;
}
