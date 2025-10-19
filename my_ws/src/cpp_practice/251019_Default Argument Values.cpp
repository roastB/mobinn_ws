#include <iostream>

using namespace std;

double calc_cost(double base_cost, double tax_rate, double shipping);

int main()
{
	double cost = 0;
	cost = calc_cost(100.0, 0.08, 4.5);
	cost = calc_cost(100.0, 0.08);
	cost = calc_cost(200.0);

	return 0;
}

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.5)
{
	double result = base_cost += (base_cost * tax_rate) + shipping;
	cout << result << endl;
	return result;
}