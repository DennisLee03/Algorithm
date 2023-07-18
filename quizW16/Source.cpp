#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;
class cPoint {
private:
	double x, y;
public:
	cPoint() { x = y = 0; }
	cPoint(double xx, double yy) { x = xx;y = yy; }
	double X() { return x; }
	double Y() { return y; }
};
ostream& operator<<(ostream& os, cPoint &p) {
	os << "(" << p.X() << "," << p.Y() << ")";
	return os;
}
bool GreaterX(cPoint &p1, cPoint &p2) { return(p1.X() > p2.X()); }
bool SmallerX(cPoint &p1, cPoint &p2) { return(p1.X() < p2.X()); }
bool GreaterY(cPoint &p1, cPoint &p2) { return(p1.Y() > p2.Y()); }
bool SmallerY(cPoint &p1, cPoint &p2) { return(p1.Y() < p2.Y()); }
void main() {
	vector<cPoint> v;
	vector<cPoint>::iterator iter;
	cPoint ps[5] = { cPoint(3, 18), cPoint(12, 4), cPoint(7, 1), cPoint(1, 7), cPoint(5, 14) };
	for (int i = 0;i < 5;i++) v.push_back(ps[i]);
	cout << "Original: ";
	for (iter = v.begin();iter != v.end();iter++) cout << *iter << " "; cout << endl;
	sort(v.begin(), v.end(), GreaterX);
	cout << "By GreaterX sorting: ";
	for (iter = v.begin();iter != v.end();iter++) cout << *iter << " "; cout << endl;
	sort(v.begin(), v.end(), SmallerX);
	cout << "By SmallerX sorting: ";
	for (iter = v.begin();iter != v.end();iter++) cout << *iter << " "; cout << endl;
	sort(v.begin(), v.end(), GreaterY);
	cout << "By GreaterY sorting: ";
	for (iter = v.begin();iter != v.end();iter++) cout << *iter << " "; cout << endl;
	sort(v.begin(), v.end(), SmallerY);
	cout << "By SmallerY sorting: ";
	for (iter = v.begin();iter != v.end();iter++) cout << *iter << " "; cout << endl;
}
