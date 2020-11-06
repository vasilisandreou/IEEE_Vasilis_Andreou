#include <iostream>
using namespace std;

int main()
{
	float edge, edge_volume;
	
	do
	{
		cout << "Insert the edge of the cube in cm: ";
		cin >> edge;	
	}
	while(edge<=0);
	
	edge_volume = edge*edge*edge;
	cout << endl << "The volume of the cube with edge " << edge << " cm, is equal to " << edge_volume << " cm^3" << endl;
}
