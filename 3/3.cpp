#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	ifstream in("f.txt");
	ofstream out("s.txt");
	int a = 0;
	string c;
	while (in.peek() != EOF)
	{
		getline(in, c);
		for (unsigned int i = 0; i < c.length(); i++)
		{
			if (c[i] == 'P')
			{
				a++;
			}
		}
		out << a << endl;
	}
	in.close();
	out.close();
}
