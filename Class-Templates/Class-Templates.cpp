#include <bits/stdc++.h>
using namespace std;
#define concatenate add //Hedhi faza zaboura lezmek tetdhakkarha
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();
//the static start up function speeds up the cout  #define changes endl to '\n' to prevent flushing buffer for each line.    IMPORTANT!!!!!!!
#define endl '\n';
template <class T>
class AddElements
{
    T element1;

public:
    AddElements(int x)
    {
        element1 = x;
    }
    AddElements(float x)
    {
        element1 = x;
    }
    AddElements(string x)
    {
        element1 = x;
    }
    AddElements(double x)
    {
        element1 = x;
    }
    T add(T element2)
    {
        return (element1 + element2);
    }
    ~AddElements(){}
};
/*template <>
class AddElements<char>
{
    char element1;

public:
    string concatenate (string element2)
    {
        return (element1 + element2);
    }
};*/
int main()
{
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if (type == "float")
        {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}