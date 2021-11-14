#include <iostream>
using namespace std;

int main () {
    // Say Hello five times
    for (int index = 0; index < 5; ++index)
        cout << "HelloWorld!" << endl;
    char input = 'i';
    cout << "To exit, press 'm'" << endl;
    while(input != 'm') {
        cin  >> input;
    }
    exit(0);
}
