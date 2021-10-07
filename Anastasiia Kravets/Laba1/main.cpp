#include <iostream>
#include <cmath>
using namespace std;
class Point { // ������� ����

protected:
double r,p;
int x,y,n,m,j,l;


public:
Point();//���������
Point(int x ,int y);//���������
Point(int x ,int y,int p);
Point (const Point &src);//�����������
~Point();//����������
void setX(int x);
int getX();
void setY(int y);
int getY();
void setL(int l);
int getL();
void setJ(int j);
int getJ();
float Polar();
float Newx();
float Newy();
float Distan();

};
Point::Point():x(0),y(5){
    cout<<"��������� ����� �������� ��������� �� ��������\n";
};


Point::Point(int x ,int y)
 {
x=20;
y=15;

 cout<<"��������� ����� �������� ��������� �� �����������\n";

 };


 Point::Point(int x ,int y, int p):x(15),y(11)
 {


 cout<<"��������� ����� �������� ��������� � i�i�\n";

 };


 Point::Point (const Point &src)//����������� ���������
 {
 x=src.x;
 y=src.y;

 }
 Point::~Point()// ����������
 {
 cout<<"������ ����������\n";
 }


void Point::setX(int X)
 {
 x=X;
 }
 int Point::getX()
 {
 return x;
 }
 void Point::setY(int Y)
 {
 y=Y;
 }
 int Point::getY()
 {
 return y;
 }
 void Point::setL(int L)
 {
 l=L;
 }
 int Point::getL()
 {
 return l;
 }
  void Point::setJ(int J)
 {
 j=J;
 }
 int Point::getJ()
 {
 return j;
 }

 float Point::Polar()
 {
     p =(sqrt(pow(x,2)+pow(y,2)));
     return p;
 }

  float Point::Newx()
 {
    n=l+x;

     return n;
 }

  float Point::Newy()
 {

    m=j+y;
     return m;
 }
 float Point::Distan()
 {

    r = (sqrt(pow(x,2)+pow(y,2)));
     return r;
 }


int main()
{setlocale(LC_ALL,"Russian");
int X,Y,x,y,p,L,J;
cout<<"������� � � �:";
cin>>X;
cin>>Y;
cout<<"������� �� ������� �� ������ �������� ����������:";
cin>>L;
cin>>J;
Point p1;
Point p2( x, y);
Point p3( x, y, p);
Point p4(const Point &src);
p1.setX(X);
p1.setY(Y);
cout<<p1.getX()<<endl;
cout<<p1.getY()<<endl;
p1.setL(L);
p1.setJ(J);
cout<<p1.getX()<<endl;
cout<<p1.getY()<<endl;
cout<<"�������� ����������:"<<p1.Polar()<<endl;
cout<<"����� ����������:"<<p1.Newx()<<","<<p1.Newy()<<endl;
cout<<"���������� ����� �������:"<<p1.Distan()<<endl;
if(p1.getX()==p3.getX())
{
    cout<<"���������� �� � �����"<<endl;
}
else {
        cout<<"X �� �����:"<<endl;
    }
    if(p1.getY()==p3.getY())
{
    cout<<"���������� �� Y �����"<<endl;
}
else {
        cout<<"Y �� �����"<<endl;
    }

return 0;
}
