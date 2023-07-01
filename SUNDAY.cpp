#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while (t--) {
        int n;
        cin >> n;

        int h = 8; // Initial working days, excluding weekends

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a % 7 != 6 && a % 7 != 0) {
                h++; // Increment working days if not a Saturday or Sunday
            }
        }

        cout << h << endl;
    }
	return 0;
}
