using System;
namespace stdDotnetBot;

double calculation (double a, string calc, double b, double &c)          // calculation function
{
    switch (calc)
    {
/// +
        case "+":
            c = a + b;
            break;
/// -
        case "-":
            c = a - b;
            break;
 /// *
        case "*":
            c = a * b;
            break;
/// /
        case "/":
            c = a / b;
            break;
    }
    return c;
}


void output (double a, string calc, double b, double c)  // output function 
{
    cout << "Hacking Pentagon computers to calculate... " << a << " " << calc << " " << b << " = | " << c << " |" << endl;
    cout << endl;
}


int main()
{
    // variables declaration

    double a, b, c;
    string calc = "*";
    string ex = "O";
    
    //if no exit, work
    
    while (ex != "Y")
    {
        cout << "Enter A" << endl;
        cin >> a;
        cout << "Enter action" << endl;
        cin >> calc;
        while (calc == "x")                             //if wished to exit
        {                                   
            cout << "Do You wish to exit? Y/N" << endl;
            cin >> ex;
            if ((ex == "Y") || (ex == "y"))
            {
                return 0;
            }
            else
            {
                if ((ex == "N") || (ex == "n"))         // if changed mind
                {                        
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

// call for calculation func

        calculation(a, calc, b, c);

/// cout
        output (a, calc, b, c);
    }
    return 0;
}
