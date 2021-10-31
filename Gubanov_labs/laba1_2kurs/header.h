#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <cmath>
#include <math.h>

using namespace std;

class Triangle
{
private:
    int a,b, c,hc,hb,ha;


public:

        Triangle(int _a,int _b,int _c): a(_a),b(_b),c(_c) // íàïðÿìóþ èíèöèàëèçèðóåì ïåðåìåííûå-÷ëåíû êëàññ
        {
        }
        Triangle()
            :a(0),b(0),c(0){}
~Triangle(){}
            void Read(){

            cout << "Ââåäèòå  A: ";
            cin >> a;
            cout << "ÂÂåäèòå B: ";
            cin >> b;
            cout << "Ââåäèòå C: ";
            cin >> c;

            }
            void Display(){

            cout<<"Âû ââåëè A="<<a<<endl<<"Âû ââåëè B="<<b<<endl<<"Âû ââåëè C="<<c<<endl;
            }

            double Perimeter()
    {
        return (a+b+c);
    }
    double Square(){
    return sqrt(Perimeter()/2*(Perimeter()/2-a)*(Perimeter()/2-b)*(Perimeter()/2-c));;
    }

         double Hight(){
double ha,hb,hc;


ha=2*Square()/a;
hb=2*Square()/b;
hc=2*Square()/c;

return ha,hb,hc;

         }
         int Type(){
         if (a==b && b==c && c==a) {
                cout<<"ðàâíîñòîðîííèé"<<endl;
return 0;
}
else{
    cout<<"Ïðÿìîóãîëüíûé"<<endl;
}
if (a==b || b==c ||c==a) {
         cout<<"ðàâíîáåäðåííûé"<<endl;
return 0;
}


}

};
      


#endif // HEADER_H_INCLUDED
