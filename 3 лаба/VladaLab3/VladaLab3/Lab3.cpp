#include "Header.h"

int main()
{
    string text = read();
    cout << text<< endl<< endl;
    string townDep;
    string townArr;
    cout << "Enter city of departure:" << endl;
    cin >> townDep;
    cout << "Enter city of arrival" << endl;
    cin >> townArr;
    algorithmFloyd(text, townDep,townArr);
}
