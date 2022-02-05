#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    protected:
    int height;
    int width;
    public:
    Rectangle(){}
    ~Rectangle(){}
    virtual void display() 
    {
        cout<<width<<" "<<height<<endl;
    }
    void setHeight(int x)
    {
        height=x;
    }
    void setWidth(int y)
    {
        width=y;
    }
};
class RectangleArea : public Rectangle
{
    public:
    RectangleArea(){}
   
    void read_input()
    {
        int w,h;
        cin>>w>>h;
        /*setHeight(h);
        setWidth(w);*/
        height=h;
        width=w;
    }
    void display()
    {
        cout<<height*width<<endl;
    }
    ~RectangleArea(){}
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}