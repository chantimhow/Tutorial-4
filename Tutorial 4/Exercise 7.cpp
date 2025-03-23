#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int base_rent = 600, total_unit = 50, units_occupied, maintenance_cost = 27, optimal_units, base_increase = 40, max_profit = 0;
	for (int total_increase = 0; total_increase < base_increase * total_unit; total_increase += base_increase) {
		int rent = base_rent + total_increase;
		int units_occupied = total_unit - total_increase / base_increase;
		int profit = units_occupied * rent - units_occupied * maintenance_cost;
		if (profit > max_profit) {
			max_profit = profit;
			optimal_units = units_occupied;
		}
		
	}
	cout << max_profit << endl;
	cout << optimal_units << endl;
	system("pause");
	return 0;
}

