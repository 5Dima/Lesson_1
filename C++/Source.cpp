#include<iostream>
#include<string>
#include<vector>


using namespace std;
class point {
	int x, y;
public:
	point(int x, int y) { this->x = x; this->y = y;}
	void print() {
		cout << "X: " << x << "| Y: " << y << "\n";
	}
};

class figure {
	vector<point> v;
public:
	figure(vector<point> v) {
		this->v = v;
	}
	void set_figure(point p) {
		v.push_back(p);
	}



};


int main() {





	return 0;
}