#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

string solve(int x, int y, int z) {
		int distanceA = abs(x - z);
		int distanceB = abs(y - z);

		if (distanceA < distanceB) {
			return "Cat A";
		} else if (distanceA > distanceB) {
			return "Cat B";
		} else {
			return "Mouse C";
		}
}

int main(){
    int q;
    cin >> q;
    int x,y,z;
	
    for (int tc = 0; tc < q; tc++) {
        cin >> x >> y >> z;
		cout << solve(x, y, z) << endl;
	}
}