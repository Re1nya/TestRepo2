#include <iostream>
using namespace std;
int main()
{
	int god;
	cout << " Vvedite god ";
	cin >> god;
	if (god % 4 == 0 || god % 400 == 0 || god % 100 != 0) cout << " Visokosniy23 ";
	else cout << " Nevisokosniy ";
}