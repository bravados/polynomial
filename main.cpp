#include "polinomiogenerico.h"
using namespace std;

int main(){

	float v[]={1,2,3};
	int v2[]={1,2,3,4,5,6};
	double v3[]={4,5,6};
	
Polinomio<float> p1(3,v);
Polinomio<int> p2(6,v2);
Polinomio<double> p3(3,v3);

cout << p1 << endl;
cout << p2 << endl;
cout << p3 << endl;
}


