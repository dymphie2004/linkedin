#include<iostream>
using namespace std;
class Energy
  {
  	public:
  		float initialTemperature, mass, finalTemperature;
  		
  	public:
  		float computeEnergy(float m,float i, float f);
  };
	int main()
	{
		Energy myEnergy;
		cout<<" Enter values for mass in kg, initial temperature and final temperature in celsius :"<<endl;
		cin>>myEnergy.mass>>myEnergy.initialTemperature>>myEnergy.finalTemperature;
		cout<<" Energy to heat water in joules="<<myEnergy.computeEnergy(myEnergy.mass,myEnergy.initialTemperature,myEnergy.finalTemperature)<<endl;
		return(0);
		
	}
		float Energy::computeEnergy(float m,float i,float f)
		{
			float Q = m*(f-i)* 4184;
			return(Q);
		}
