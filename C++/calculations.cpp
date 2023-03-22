Question two 
a)     Create a class called triangle that stores the length of the base and height of a right angled triangle in two public instance variables. Write a driver (main program) that uses the class created to compute the hypotenuse and area of the triangle.  Hint: Hypotenuse= √ (base2 +height2)   Area= 1/2 *base *height                [6 marks]


#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
public:
    float height,base;
};
main()
{
    Triangle T;
    float hyp,area;
    T.height=4.0;
    T.base=2.0;
    hyp=sqrt((T.height*T.height)+(T.base+T.base));
    //hyp=sqrt(pow(T.height,2)+pow(T.base,2));
    area=1.0/2.0*T.height*T.base;
    cout<<"The hypotenuse of the triangle is: "<<hyp<<endl;
    cout<<"The area of the triangle is: "<<area<<endl;
}


#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
private:
    float height,base,hyp,ar;
public:
    void enter_triangle_details();
    float compute_tri_hyp();
    float compute_tri_area();
    void display_triangle_details();
};

void Triangle::enter_triangle_details()
{
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter base: ";
    cin>>base;
}
float Triangle::compute_tri_hyp()
{
    return sqrt((height*height)+(base+base));
}
float Triangle::compute_tri_area()
{
   return 1.0/2.0*height*base;
}
void Triangle::display_triangle_details()
{
    cout<<"The base is: "<<base<<endl;
    cout<<"The height is: "<<height<<endl;
}
main()
{
    Triangle T;
    float hyp,area;
    T.enter_triangle_details();
    T.display_triangle_details();
    hyp=T.compute_tri_hyp();
    area=T.compute_tri_area();
    cout<<"The hypotenuse of the triangle is: "<<hyp<<endl;
    cout<<"The area of the triangle is: "<<area<<endl;
}