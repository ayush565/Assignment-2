#include<iostream>
using namespace std;
class rectangle
{

private:
    float l,w;
public:
    float area();
    float per();
    void show();
    rectangle()
    {

        l=1;
        w=1;
    }
    void setdata(float x,float y)
    {
        if(x>0.0 && x<=20.0 && y>0.0 && y<=20.0)
        {

            l=x;
            w=y;
        }
    }
    void showdata()
    {

        cout<<"\nlength and breath of the rectangle is :"<<l<<" "<<w<<endl;
        show();
    }
};
float rectangle::per()
{
    return(2*(l+w));
}
float rectangle::area()
{

    return(l*w);
}
void rectangle::show()
{

    float x=per();
    float y=area();
    cout<<"\nArea of the rectangle is :"<<x<<endl;
    cout<<"\nPerimeter of the rectangle is :"<<y<<endl;
}
int main()
{
   rectangle r;
  float a,b;
  cout<<"\nEnter length and width:";
  cin>>a>>b;
  r.setdata(a,b);
  r.showdata();

}
