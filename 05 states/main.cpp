#include <iostream>
#include <string.h>

using namespace std;

bool is_letter(char c) {
    return (
        (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z')
    );
}

bool is_natural_digit(char c) {
    return (c >= '1' && c <= '9');
}

bool is_digit(char c) {
    return is_natural_digit(c) || c == '0';
}

bool is_letter_or_underscore(char c) {
    return is_letter(c) || c == '_';
}

bool is_letter_or_digit_or_underscore(char c) {
    return is_letter_or_underscore(c) || is_digit(c);
}

int main()
{
    const int N = 20;
    char input[N];
    cin >> input;

    int state = 0;

    int i = 0;

    while (i < strlen(input) && state != -1) {
        cout << input[i] << endl;
        cout << state << endl;
        switch(state) {
        case 0:

            if (is_letter_or_underscore(input[i]))
                state = 1;
            else
                state = -1;

            break;

        case 1:
            if (is_letter_or_digit_or_underscore(input[i]))
                state = 2;
            else
                state = -1;
            break;
        case 2:

            if (input[i] == '=')
                state = 3;
            else
                state = -1;
            break;

        case 3:

            if (is_natural_digit(input[i]))
                state = 4;
            else
                state = -1;
            break;

        case 4:

            if (is_digit(input[i]))
                state = 4;
            else if (input[i] == ';')
                state = 5;
            else
                state = -1;
            break;

        case 5:
            state = -1;
        }
        i++;

    }
    if (state == 5) {
        cout << "Correct";
    }
    else {
        cout << "Incorrect";
    }

}
