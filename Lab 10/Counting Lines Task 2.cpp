#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("Notes.Txt");

    string line;
    int count = 0;
    if (!file) {
        cout << "File not Found!" << endl;
        return 0;
    }
    while (getline(file, line)) {
        count++;
    }
    cout << "Total Number of Lines: " << count << endl;

    file.close();

    return 0;
}
