#include<iostream>
using namespace std;
class Scale{
    public:
        int m,cm,f,in;
        friend istream& operator>>(istream& is, Scale &obj){
            cout << "Enter the value in meters : ";
            is >> obj.m;
            cout << "Enter the value in Centi meters :";
            is  >> obj.cm; 
            return is;
        }
        friend ostream&  operator<<(ostream& os, const Scale &obj) {
            os << "The Value in Feet,inches = " << obj.f<<"'"<<obj.in<<endl;
            return os;
        }
        void operator=(const Scale& obj){
            cm = obj.cm +(obj.m * 100);
            f = cm / 30;
            in = ((cm % 30) / 2.54);
        }

};
