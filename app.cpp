#include <iostream>
using namespace std;

// generate range of letters

/**
 * @brief Generates a string containing all the characters between two given characters.
 *
 * This function generates a string containing all the characters between two given
 * characters. The function assumes that the input characters are ASCII characters.
 * If the first character is greater than the second character, the function generates
 * the range from the second character to the first character. If the first character is
 * less than or equal to the second character, the function generates the range from the
 * first character to the second character.
 *
 * @param L1 The first character.
 * @param L2 The second character.
 *
 * @return A string containing all the characters between L1 and L2.
 *
 * @throws std::logic_error if L1 or L2 is not a valid ASCII character.
 */
string generate_range_of_letters(char L1, char L2)
{
    // Check if the input characters are valid ASCII characters
    if (!isascii(L1) || !isascii(L2))
    {
        cout << "L1 or L2 is not a valid ASCII character";
        abort(); // Abort the program if the input is not a valid ASCII value
    }

    // Create an empty string to hold the result
    string result = "";

    // If the first character is greater than the second character,
    // we need to generate the range from the second character to the first
    // character. Otherwise, we generate the range from the first character
    // to the second character.
    if (L1 > L2)
    {
        for (int i = L2; i <= L1; i++)
        {
            result += char(i);
        }
    }
    else
    {
        for (int i = L1; i <= L2; i++)
        {
            result += char(i);
        }
    }

    // Return the result
    return result;
}

int main()
{
    cout << generate_range_of_letters('A', 'B') << endl; // AB
    cout << generate_range_of_letters('A', 'Z') << endl; // A - Z
    cout << generate_range_of_letters('B', 'A') << endl; // AB
    cout << generate_range_of_letters('A', 'A') << endl; // A
    cout << generate_range_of_letters('B', 'B') << endl; // B
    return 0;
}