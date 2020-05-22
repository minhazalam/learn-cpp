#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v; // v(some_size)

	v.push_back(12);
	v.push_back(13);
	v.push_back(67);

	// v.pop_back();

	for (int i = 1; i <= 10; ++i)
	{
		v.push_back(i);
	}

	for (int x : v)
		cout << x << " \n";

	cout << "Size of the vector: " << v.size() << endl;
	cout << "front: " << v.front() << "back: " << v.back() << endl;
}