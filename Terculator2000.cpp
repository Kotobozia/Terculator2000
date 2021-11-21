#include <iostream>
#include <string>
using namespace std;
int main()
{
    // enter
    double a, b, c;
    string calc = "*";
    //if no exit, work
    while (calc != "x")
    {
        cout << "Enter A" << endl;
        cin >> a;
        cout << "Enter action" << endl;
        cin >> calc;
        if (calc == "x")
        { //if wished to exit
            cout << "Do You wish to exit? Y/N" << endl;
            string ex;
            cin >> ex;
            if (ex == "Y")
            {
                return 0;
            }
            else
            {
                if (ex == "N")
                { // if changed mind
                    cout << endl
                         << "Enter the task again. Reenter A." << endl;
                    cout << "Enter A" << endl;
                    cin >> a;
                    cout << "Enter action" << endl;
                    cin >> calc;
                }
            }
        }
        cout << "Enter B" << endl;
        cin >> b;
        // +
        if (calc == "+")
        {
            c = a + b;
        }
        else
        {
            // -
            if (calc == "-")
            {
                c = a - b;
            }
            else
            {
                // *
                if (calc == "*")
                {
                    c = a * b;
                }
                else
                {
                    // /
                    if (calc == "/")
                    {
                        c = a / b;
                    }
                }
            }
        }
        // cout GL
        cout << "Hacking Pentagon computers to calculate... The answer is | " << c << " |" << endl;
        cout << endl;
    }
    return 0;
}
