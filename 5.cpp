#include<iostream>
using namespace std;

int a;
void drawLine() {
	int star = a;
	int x, y;
	for (x=0; x<star; x++) {
		for (y=0; y<x; y++) {
			cout<<"\t";
		}cout<<"*\n";
		cout<<endl;
	}
};

int main() {
	cout<<"Banyak bintang? ";
	cin>>a;
	drawLine();
}
