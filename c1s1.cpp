#include <iostream>
using namespace std;

class sub {
    int a, b, s;

public:
    void get(int a1, int b1) {
        a = a1;
        b = b1;
    }

    int call() {
        s = a - b;
        return s;
    }

    void putg() {
        cout << "Subtraction is: " << s << endl;
    }
};

int main() {
    sub s1;
    s1.get(10, 5);
    s1.call();
    s1.putg();
    return 0;
}


