#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.length() != 16)
    {
        cout << "The text should be 16 chars!" << endl;
    }
    else
    {
        int i = 0;
        for (int row = 0; row < 4; row++)
        {
            for (int col = 0; col < 4; col++)// each time row loop starts again col is set to zero again
            { //This loop iterates over the columns of each row
                cout << s[i++] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
