#include "../lib_files/std_lib_facilities.h"

int get_integer(string num_string) {
    vector<string> numbers  = { "0", "1", "2", "3", "4", "5", "6", "7", 
        "8", "9" };
    vector<string> strings  = { "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine" };
    int result = 0;

    bool was_found = false;

    for (int i = 0; i < strings.size(); ++i) {
        if (strings[i] == num_string) {
            result = i;
            was_found = true;
        }
    }

    if (was_found == false) {
        for (int i = 0; i < strings.size(); ++i) {
            if (numbers[i] == num_string) {
                result = i;
            }
        }
    }

    return result;
}

int main()
{
    double val1 = 0;
    double val2 = 0;
    double result = 0;
    char operation;
    string dig_str1 = "";
    string dig_str2 = "";

    cout << "Enter two values and an operation ('+', '-', '*', '/')" << endl;

    while (cin >> dig_str1 >> dig_str2 >> operation) {
        val1 = get_integer(dig_str1);
        val2 = get_integer(dig_str2);

        switch (operation) {
            case '+':
                result = val1 + val2;
                cout << "The sum of " << val1 << " and " << val2 
                     << " is " << result << endl;
                break;
            case '-':
                result = val1 - val2;
                cout << "The difference of " << val1 << " and " << val2 
                     << " is " << result << endl;
                break;
            case '*':
                result = val1 * val2;
                cout << "The product of " << val1 << " and " << val2 
                     << " is " << result << endl;
                break;
            case '/':
                if (val2 == 0)
                    cout << "Error! Division by zero!" << endl;
                else {
                    result = val1 / val2;
                    cout << "The division of " << val1 << " and " << val2 
                         << " is " << result << endl;
                }
                break;
            default:
                cout << "Error! Enter an operation operation ('+', '-', '*', '/')"
                     << endl;
        }

        cout << "Enter two values and an operation ('+', '-', '*', '/')" << endl;
    }

    return 0;
}
