#include <iostream>
#include <cmath>
using namespace std;

class Vector3D {
public:
    int x;
    int y;
    int z;

    Vector3D(int x = 0, int y = 0, int z = 0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Vector3D operator +(Vector3D v1) 
    {
        Vector3D sum;
        sum.x=this->x+v1.x;
        sum.y=this->y+v1.y;
        sum.z=this->z+v1.z;
        return sum;
    }

    Vector3D operator -(Vector3D v2) 
    {
        Vector3D subtract;
        subtract.x=this->x-v2.x;
        subtract.y=this->y-v2.y;
        subtract.z=this->z-v2.z;
        return subtract;
    }

    int operator *(Vector3D v3) 
    {
        Vector3D dot;
        dot.x=this->x*v3.x;
        dot.y=this->y*v3.y;
        dot.z=this->z*v3.z;
        return dot.x+dot.y+dot.z;
    }

    Vector3D operator ^(Vector3D v4) 
    {
        Vector3D cross;
        cross.x=(this->y*v4.z)-(this->z*v4.y);
        cross.y=(this->z*v4.x)-(this->x*v4.z);
        cross.z=(this->x*v4.y)-(this->y*v4.x);
        return cross;
    }

    friend ostream& operator <<(ostream &os,Vector3D vec)
    {
        os<<vec.x<<","<<vec.y<<","<<vec.z<<endl;
        return os;
    }

};
