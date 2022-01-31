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
	figure() {
	}
	figure(vector<point> v) {
		this->v = v;
	}
	void set_figure(point p) {
		v.push_back(p);
	}
	void print_figure() {
		cout << string(40, '-')<<"\n";
		for (auto it : v) { it.print(); }
		cout << string(40, '-')<<"\n";
	}
};


int main() {
	vector<figure> vf;
	figure f;
	f.set_figure(point(4, 2));
	f.set_figure(point(1, 8));
	f.set_figure(point(5, -2));
	f.set_figure(point(6, -12));
	vf.push_back(f);
	for (auto it : vf)it.print_figure();

	return 0;
}