#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNumber(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main() {
    srand(time(0));
    cout << randomNumber(1, 100) << endl;
}
