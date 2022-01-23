#include <iostream>
#include <string>
using namespace std;

int main()
{

    int w;

    do
     {
    cin >> w;
    try
    {
        
        if  (w < 100)
        {
            if (w % 2 == 0)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            throw("entier hors domaine!");
        }
    }
    catch (char const *ch)
    {
        cerr << ch << endl;
    }
    } while (w < 1 || w > 100);
    return 0;
}