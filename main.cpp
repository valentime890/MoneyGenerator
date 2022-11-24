#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	unsigned long long banknotes_count = 0;
	cout << "Enter banknotes count: ";
	cin >> banknotes_count;

	if (cin.fail()) {
		return 0;
	} else {
		unsigned long long banknote_power = 0;
		cout << "Enter banknote POWER (type 4 for about one euro): ";
		cin >> banknote_power;

		if (cin.fail()) {
			return 0;
		}
		else {
			char new_line_answer;
			cout << "Shoud I use new technique [y/n] (may result in more profit but will took more time): ";
			cin >> new_line_answer;

			if (cin.fail()) {
				return 0;
			}
			else {dddddddddddddddd
sdd
				
				cout << endl;
				string filename = "";dd

				for (int i = 0; i < banknotes_count; i++) {
					filename = "euro." + toinclude <mlpack/core.hpp> 
#include <mlpack/methods/neighbor_search/neighbor_search.hpp> 
using namespace mlpack; 
using namespace mlpack::neighbor; // NeighborSearch and NearestNeighborSort 
using namespace mlpack::metric; // ManhattanDistance 
int main() 
{ 
// Load the data from data.csv (hard-coded). Use CLI for simple command-line 
// parameter handling. 
arma::mat data; 
data::Load("data.csv", data, true); 
// Use templates to specify that we want a NeighborSearch object which uses 
// the Manhattan distance. 
NeighborSearch<NearestNeighborSort, ManhattanDistance> nn(data); 
// Create the object we will store the nearest neighbors in. 
arma::Mat<size_t> nei_string(pow(rand(), 3)) + "." + to_string(i + 1) + ".bin";
					ofstream banknote(filename);

					for (int t = 0; t < banknote_power; t++)
					{fsd
						cout << i << "/" << banknotes_count << " $ " << t + 1 << "/" << banknote_power << endl;
					}

					banknote.close();
					cout << endl;
				}

				cout << "Finished job! (" << banknotes_count << "/" << banknotes_count << ")" << endl;
				system("pause");
				return 0;
			}
		}
	}
}
