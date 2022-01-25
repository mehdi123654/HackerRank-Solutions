#include <bits/stdc++.h>

using namespace std;
class Box
{
private:
	int l;
	int b;
	int h;

public:
	Box();
	Box(Box &B);
	Box(int, int, int);
	int getLength() { return l; }
	int getBreadth() { return b; }
	int getHeight() { return h; }
	bool operator<(Box &B);
	friend ostream &operator<<(ostream &out, Box &B)
	{
		return(out<<B.getLength() << " "<< B.getBreadth() << " "<< B.getHeight() << " ")<<endl;
	}
	long long CalculateVolume();
};
Box::Box()
{
	l = b = h = 0;
}
Box::Box(int b, int l, int h)
{
	this->b = b;
	this->l = l;
	this->h = h;
}
Box::Box(Box &B)
{
	B.b = this->b;
	B.h = this->h;
	B.l = this->l;
}
/*bool Box::operator<(Box &B)
{
	if(this->l<B.l)
	return true;
	if ((this->b<B.b)&&(this->l==B.l))
	return true;
	if ((this->h<B.h)&&(this->b==B.b)&&(this->l==B.l))
	return true;
}*/
bool Box::operator<(Box &B)
{
	return ((this->l < B.l) || ((this->b < B.b) && (this->l == B.l)) || ((this->h < B.h) && (this->b == B.b) && (this->l == B.l)));
}
long long Box::CalculateVolume()
{
	return (l*b*h);
}
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

void check2()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}
	}
}

int main()
{
	check2();
}