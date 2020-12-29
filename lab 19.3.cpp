#include <iostream>

using namespace std;

int main() {
	int i, j, n, xmax, xmin;
	bool z,min,max;
	z = 0;	min = 0; max = 0;
	cout << "Vvedite razmer massiva\n";
	cin >> n;
	int* a = new int[n];
	int* r = new int[n + 2];
	cout << "Vvedite massiv\n";
	xmax = 0;
	xmin = 0;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (a[xmax] < a[i])
			xmax = i;
		if (a[xmin] > a[i])
			xmin = i;
	}
	j = 0;
	i = 0;
	while (j < n+2)
	{
		if (i == xmin && min == 0)
		{
			r[j] = 0;
			j++;
			min = 1;
		}
		else if (min == 1)
		{
			min = 0;
			r[j] = a[i];
			i++;
			j++;
		}
		else if (i == xmax)
		{
			z = 1;
			r[j] = a[i];
			i++;
			j++;
		}
		else if (z==1)
		{
			r[j] = 0;
			j++;
			z = 0;
		}
		else
		{
			r[j] = a[i];
			i++;
			j++;
		}
	}
	
	for (i = 0; i < n+2; i++)
	{
		cout << r[i] << " ";
	}
}