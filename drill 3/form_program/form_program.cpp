#include "std_lib_facilities.h"

int main()
{
    cout << "Enter your fist name: " << endl;
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << endl;

    cout << "Enter the name of the person you want to write to " << endl;
    string my_own_name = first_name;
    cin >> first_name;
    cout << "Dear " << first_name << "," << endl;
    string firend_name;
    string introductory = "How are you?\nI'm fine.\nI miss you\nI hope we will be able to meet in the near future.\nMy life is going well right now, I have a new girlfriend who is awesome. I'm totally sure you gonna love her.\nWhat about you? Did you get the promotion at your workplace?\n";
    cout << "Please write another friend of yours who you want to mention\n";
    string friend_name;
    cin >> friend_name;
    introductory += "Have you seen " + friend_name + " lately?\n";
    char friend_sex = 0;
    cout << "Please enter an m is for friend is male, otherwise, if she is female, enter an f: ";
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        introductory += "If you see " + friend_name + " please ask him to call me.\n";
    }
    else if (friend_sex == 'f')
    {
        introductory += "If you see " + friend_name + " please ask her to call me.\n";
    }
    cout << "Please enter the age of the recipient: ";
    int age;
    cin >> age;
    introductory += "I hear you just had a birthday and you are " + to_string(age) + " years old\n";
    if (age < 12)
    {
        introductory += "Next year you will be " + to_string(age + 1) + "\n";
    }
    else if (age == 17)
    {
        introductory += "Next year you will be able to vote!\n";
    }
    else if (age > 70 && age < 110)
    {
        introductory += "I hope you are enjoying retirement!\n";
    }
    else if (age <= 0 || age >= 110)
    {
        simple_error("You're kidding!");
    }

    introductory += "\n";
    introductory += "\n";
    introductory += "Yours sincerely, \n" + my_own_name + "\n";
    cout << introductory;

    return 0;
}