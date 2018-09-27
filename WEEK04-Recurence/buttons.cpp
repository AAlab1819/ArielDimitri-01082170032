#include <iostream>

using namespace std;

int main()
{
    long long buttons;
    cin >> buttons;
    cout << (buttons - 1) * buttons * (buttons + 1) / 6 + buttons << endl;
    return 0;
}
