// Write a C++ program that receives two words from the user and checks if they are anagrams of each other.
// Anagrams are words or phrases formed by rearranging the letters of another. For example race and care are anagrams.
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter String 1: ";
    string s1;
    cin >> s1;

    cout << "Enter String 2: ";
    string s2;
    cin >> s2;

    // Sort characters in String 1
    for (int i = 0; i < s1.length() - 1; i++)
    {
        for (int j = i + 1; j < s1.length(); j++)
        {
            if (s1[i] > s1[j]) // if the asci char for i is greater than j we assign the value of s1 at position i to variable temp
            {
                char temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }

    // Sort characters in String 2
    for (int i = 0; i < s2.length() - 1; i++)
    {
        for (int j = i + 1; j < s2.length(); j++)
        {
            if (s2[i] > s2[j])
            {
                char temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }
    }

    // Check if the sorted strings are equal
    if (s1 == s2)
    {
        cout << "Positive Anagram" << endl;
    }
    else
    {
        cout << "Not Anagram" << endl;
    }

    return 0;
}
