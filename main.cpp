#include <iostream>
using namespace std;
class a {
public:
	a() { x = 10; n++;    cout << n << " 1\n"; }
	float x;
	static int n;
	~a() { cout << n << " 0\n";  n--; }
};
int a::n = 0;
int main() {
	a* aa;
	a* cc;
	int y = 100;
	aa = new a[123];
	cc = new a[12];

	//for (int i = 0; i < 5; i++) aa[i].~a();
	delete[] aa;

	cout << aa[2].x << endl;

	return 123;
}
