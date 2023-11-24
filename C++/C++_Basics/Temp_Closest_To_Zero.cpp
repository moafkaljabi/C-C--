#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int N;
    std::cout << "Enter your array size: ";
    cin >> N;
    cin.ignore();
    string TEMPS;
    std::cout << "Enter your Temp values: "; 
    getline(cin, TEMPS);

    istringstream buf(TEMPS);

    int t, m = 0;
    for (int i = 0; i < N; ++i) {

        buf >> t;

        if (i == 0 || abs(t) < abs(m)) {
            m = t;
        } else if (abs(t) == abs(m)) {
            m = abs(t);
        }
    }
    cout << m << endl;
    return 0;
}