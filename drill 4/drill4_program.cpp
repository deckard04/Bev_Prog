#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two number: ";
    double number;
    double number2;
    double largest=__DBL_MIN__;
    double smallest=__DBL_MAX__;
    double meter=0, cm_to_m=100, inch_to_m=0.0254, ft_to_m=0.3048;
    double sum=0;
    vector<double> values;
    string unit="";
    char terminating=' ';
    while (cin >> number >> unit)
    {
        if (unit=="cm")
        {
            meter= number/cm_to_m;
            values.push_back(meter);
        }
        else if (unit=="in")
        {
            meter=number*inch_to_m;
            values.push_back(meter);
        }
        else if (unit=="ft")
        {
            meter=number*ft_to_m;
            values.push_back(meter);
        }
        else if (unit=="m")
        {
            values.push_back(number);
            continue;
        }
        else{
            cout << "Rejected unit!";
        }
    }
    for (int i = 0; i < values.size(); i++)
    {
        sum+=values[i];

        if (smallest>values[i])
        {
            smallest=values[i];
        }
        else if (largest<values[i])
        {
            largest=values[i];
        }
        
        
    }
    
    cout << "The smallest is: " << smallest << endl;
    cout << "The largest is: " << largest << endl;
    cout << "The number of values: " << values.size() << endl;
    cout << "The sum of the values: " << sum << endl;
    sort(values);
    
    for (int i = 0; i < values.size(); i++)
    {
        cout << setprecision(2) << values[i] << endl;
    }
    

    keep_window_open();
    return 0;
}