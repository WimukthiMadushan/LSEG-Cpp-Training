#include <iomanip>
#include <iostream>

using namespace std;

#define NEXT_YEAR 2027;

int main() {

    int     year        = 2026;
    float   temperature = 36.9;
    double  pi          = 3.14;
    char    grade       = 'A';
    bool    isCppFun    = true;

    cout << year << endl;
    cout << temperature << endl;
    cout << setprecision(10) << pi << endl;
    cout << grade << endl;
    cout << isCppFun << endl;
    cout << "Next Year: " << NEXT_YEAR;

    return 0;
}
