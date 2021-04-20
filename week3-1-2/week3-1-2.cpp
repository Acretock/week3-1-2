#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool toLow(string a, string b) {
	for (char& j : a)
		j = tolower(j);
	for (char& j : b)
		j = tolower(j);
	return (a < b);
}

int main()
{
	vector<string> arr;
	int n;
	string tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(begin(arr), end(arr), toLow);
	for (auto i : arr)
		cout << i << ' ';

}
