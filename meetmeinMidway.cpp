#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	int d;
	vector<int> distances;
	for (int i = 0; i < n+1; i++) {
		cin >> d;
		distances.push_back(d);
	}
	
	int sum1;
	int sum2;
	
	int difference;
	int midway = 0;
	for (int i = 0; i < distances.size(); i++) {
		difference += distances[i];
	}
	
	for (int i = 0; i < distances.size(); i++) {
	
		for (int j = 0; j < distances.size(); j++) {
			if (i <= j) {
				sum1 += distances[j];
			} else {
				sum2 += distances[j];
			}	
		}
		
		if ((sum2 - sum1) < difference) {
			difference = sum2 - sum1;
			midway = i;
		}
	}
	
	cout << "Meet me in " << midway << endl;
}

// Question: What is the running time (the number of comparisons) of your algorithm?
// n^2

