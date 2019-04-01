#include <iostream>
#include <vector>
#include <sstream>


using namespace std;

int main(int argc, char *argv[]) {
    string input;
    char letra;
        bool first = true;
        while (cin.get(letra)) {
            if (letra == '"') {
                if (first) {
                    cout << "``";
                    first = false;
                } else {
                    cout << "''";
                    first = true;
                }
            } else {
                cout << letra;
            }
        }


    return 0;
}