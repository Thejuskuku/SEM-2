#include<iostream>
using namespace std;
class Matrix
{
  public:
  	int i,j,k;
	int data[3][3];
	friend istream& operator >>(istream& is, Matrix& obj)
	{
	for(obj.i=0;obj.i<3;obj.i++)
	{
	 for(obj.j=0;obj.j<3;obj.j++)
     { 
      is>>obj.data[obj.i][obj.j];
     }
    }
   return is;
  }
  friend ostream& operator <<(ostream& os,Matrix& obj)
  {
   for(obj.i=0;obj.i<3;obj.i++)
   {
    for(obj.j=0;obj.j<3;obj.j++)
    {
     os<<obj.data[obj.i][obj.j]<<" ";
    }
    os<<endl;
   }
   return os;
  }
  friend Matrix operator +(Matrix a,Matrix b)
  {
   Matrix result;
   for(result.i=0;result.i<3;result.i++)
   { 
     for(result.j=0;result.j<3;result.j++)
     {
       result.data[result.i][result.j]=a.data[result.i][result.j]+b.data[result.i][result.j];
     }
   }
   return result;
 } 
 friend Matrix operator -(Matrix a,Matrix b)
 {
  Matrix result;
  for(result.i=0;result.i<3;result.i++)
  { 
    for(result.j=0;result.j<3;result.j++)
    {
      result.data[result.i][result.j]=a.data[result.i][result.j]-b.data[result.i][result.j];
    }
  }
  return result;
 } 
 friend Matrix operator *(Matrix a,Matrix b)
 {
  Matrix result;
  for(result.i=0;result.i<3;result.i++)
  {
   for(result.j=0;result.j<3;result.j++)
   {
     result.data[result.i][result.j]=0;
     for(result.k=0;result.k<3;result.k++)
     {
       result.data[result.i][result.j]+=a.data[result.i][result.k]*b.data[result.k][result.j];   
     }
    }
  }
  return result;
}
friend Matrix operator ^(Matrix a,int cons)
{
 Matrix result;
 for(result.i=0;result.i<3;result.i++)
 {
  for(result.j=0;result.j<3;result.j++)
  {
   result.data[result.i][result.j]=cons*a.data[result.i][result.j];
  }
 }
 return result;
}  
};
