#include <iostream>

using namespace std;

#define ll long long int

int isTriangle(int x, int y, int z){
	if(x + y < z || y + z < x || z + x < y) return 0;
	return 1;
}

int isEquilateral(int x, int y, int z){
	if(x == y && x == z && z == y) return 1;
	return 0;
}

int isIsosceles(int x, int y, int z){
	if(x != y && x == z || y != z && y == x) return 1;
	return 0;
}

int isScalene(int x, int y, int z){
	if(x != y && x != z && y != z) return 1;
	return 0;
}

int main(){
	int x, y, z;
	cout << "Enter the lengths of sides of triangle\n"; 
	cin >> x >> y >> z;
	
	if(isTriangle(x,y,z) == 0){
		cout << "Not a triangle";
	}
	else if(isEquilateral(x,y,z)){
		cout << "Equilateral triangle";
	}

	else if(isIsosceles(x,y,z)){
		cout << "Isosceles triangle";
	}

	else if(isScalene(x,y,z)){
		cout << "Scalene triangle";
	}
	
	return 0;
}
