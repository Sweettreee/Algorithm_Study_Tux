#include <iostream>
#include <vector>
using namespace std;

class Container {
private:
	int max = 0;
	int length = 0;
	int area = 0;
public:
	int MostWater(vector<int>& heights);
	void showHeight(vector<int>& heights);
};

int Container::MostWater(vector<int>& heights) {
	for (int i = 0; i < heights.size(); i++) {
		for (int t = 1; t < heights.size(); t++) {
			if (heights[i] < heights[t]) length = heights[i];
			else length =heights[t];
			area = (t - i) * length;
			if (max < area) max = area;
		}
	}
	return max;
}

void Container::showHeight(vector<int>& heights) {
	cout << "heigth = {";
	for (int i = 0; i < heights.size(); i++) {
		cout << heights[i] << ", ";
	}
	cout << "}" << endl;
}

int main() {
	Container MostArea;
    vector<int> height = { 1,7,2,5,4,7,3,6 };
	MostArea.showHeight(height);
	cout << MostArea.MostWater(height) << endl;

}