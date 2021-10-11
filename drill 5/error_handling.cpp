#include "std_lib_facilities.h"

int main()
{
    try
    {
        cout << "1. Success!\n";
        cout << "2. Success!\n";
        cout << "3. Success"
             << "!\n";
        cout << "4. Success"
             << "!\n";

        int res = 7;

        vector<int> v(10);
        v[5] = res;
        cout << "5. Success!\n";
        v[5] = 7;

        if (v[5] == 7)
            cout << "6. Success!\n";
        if (true)
            cout << "7. Success!\n";
        else
            cout << "Fail!\n";

        bool c = false;
        if (!c)
            cout << "8. Success!\n";
        else
            cout << "Fail!\n";

        string s = "ape";
        c = "fool" < s;
        if (!c)
            cout << "9. Success!\n";

        s = "ape";
        if (s != "fool")
            cout << "10. Success!\n";

        s = "ape";
        if (s != "fool")
            cout << "11. Success!\n";

        s = "ape";
        if ("fool")
            cout << "12. Success!\n";

        vector<char> v1(5);
        cout << "13. ";
        for (int i = 0; i < v1.size(); ++i)
        {
            cout << " Success!\n";
        }

        vector<char> v2(5);
        cout << "14. ";
        for (int i = 0; i <= v2.size(); ++i)
        {
            cout << "Success!\n";
        }

        s = "Success!\n";
        cout << "15. ";
        for (int i = 0; i < s.size(); ++i)
            cout << s[i] << " ";

        if (true)
        {
            cout << "16. Success!\n";
        }
        else
        {
            cout << "Fail!\n";
        }

        int x = 2000;
        int xc = x;
        if (xc == 2000)
        {
            cout << "17. Success!\n";
        }

        string s1 = "Success!\n";
        cout << "18. ";
        for (int i = 0; i < s1.size(); ++i)
        {
            cout << s1[i] << " ";
        }

        vector<int> v4(5);
        cout << "19. ";
        for (int i = 0; i <= v4.size(); ++i)
        {
            cout << "Success!\n";
        }

        int i = 0;
        int j = 9;
        while (i < 10)
        {
            ++i;
            if (j < i)
            {
                cout << "20. Success!\n";
            }
        }

        int x2 = 2;
        double d = 5 / (x2 / 2);

        if (d == 2 * (x2 + 0.5))
        {
            cout << "21. Success!\n";
        }

        string s4 = "Success!\n";
        cout << "22. ";
        for (int i = 0; i <= s4.size(); ++i)
        {
            cout << s[i] << " ";
        }

        int i2 = 0;
        cout << "23. ";
        while (i2 < 10)
        {
            ++i2;
            if (i2)
            {
                cout << "Success!\n";
            }
        }

        int x3 = 4;
        double d2 = 5.0 / (x3-2);
        cout << "24. " ;
        if (d2 == x3-2 + 0.5)
        {
            cout << "Success!\n" << endl;
        }

        cout << "25. Success!\n";

        keep_window_open();
        return 0;
    }
    catch (exception &e)
    {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...)
    {
        cerr << "Oops: Unknown exception!\n";
        keep_window_open();
        return 2;
    }
}