#include <iostream>#include "windows.h"
using namespace std;
int main()
{
    double s, t;
    int k1, k2;

    cout << "input S: ";
    cin >> s;

    cout << "input T: ";
    cin >> t;

    k1 = (int)t / (int)s;
    k2 = static_cast<int>(t) / static_cast<int>(s);

    cout << "\nK = " << k1 << endl;
    cout << "K (static_cast) = " << k2 << endl;

    system("pause");

    return 0;
}