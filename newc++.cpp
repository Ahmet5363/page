#include<iostream>
using namespace std;
int sum2(int a, int b, int c);
int dif(int a, int b, int c);
int mul(int a, int b, int c);
void main() {
	cout << "thli is dev";
	cout << "gues why";
	cout << "dear student";
	cout << "lets try";
	cout << "learning git is fun";
	sum(2, 3, 5);
	dif(2, 3, 5);
	mul(2, 3, 5);
}
int sum2(int a, int b, int c) {
	return a + b + c;

}
int dif(int a, int b, int c) {
	return a - b - c;
}
int mul(int a, int b, int c) {
	return a * b*c;
}