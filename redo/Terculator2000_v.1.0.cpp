#include <iostream>
#include <string>
using namespace std;
int main()
{
    // enter
    double a, b, c;
    string calc = "*";
    string ex = "O";
    //if no exit, work
    
    while ((calc != "x") && (ex != "Y"))
    {
        cout << "Enter A" << endl;
        cin >> a;
        cout << "Enter action" << endl;
        cin >> calc;
        if (calc == "x")
        { //if wished to exit
            cout << "Do You wish to exit? Y/N" << endl;
            cin >> ex;
            if (ex == "Y")
            {
                return 0;
            }
            else
            {
                if (ex == "N")
                { // if changed mind
                    cout << endl;
                    cout << "Enter the task again. Reenter A." << endl;
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
    // cout
    cout << "Hacking Pentagon computers to calculate... The answer is | " << c << " |" << endl;
    cout << endl;
    }
    return 0;
}