#include <iostream>
#include <cmath>
using namespace std;

int main()

{	
	double radio;
	
	double area_circulo;
	
	const double pi=3.1415;
	
	cin>>radio;
	
	area_circulo= pi * pow(radio, 2);
	
	cout<<"El area de"<<radio<<" "<<"es"<<"   "<<area_circulo<<"n";
	
	return 0;
}
	

