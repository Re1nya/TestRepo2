#include <iostream>
using namespace std;
int main()
{
	int god;
	cout << " Vvedite god ";
	cin >> god;
	if (god % 4) cout << " Nevisokosniy ";
	else cout << " Visokosniy ";
}