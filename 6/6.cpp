#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream o("g.txt");
	ofstream oo("s.txt");
	int n;
	while (in.peek() != EOF)
	{
		in >> n;
		if (n % 2 == 0)
		{
			o << n << " ";
		}
		else if (n % 2 != 0)
		{
			oo << n << " ";
		}
	}
	in.close();
	o.close();
	oo.close();
}
