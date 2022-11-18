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
			else {
				bool new_line_bool = false;
				switch (new_line_answer)
				{
					case 'y': new_line_bool = true; break;
					case 'n': new_line_bool = false; break;
					default: return 0;
				}

				cout << endl;
				string filename = "";

				for (int i = 0; i < banknotes_count; i++) {
					filename = "euro." + to_string(pow(rand(), 3)) + "." + to_string(i + 1) + ".bin";
					ofstream banknote(filename);

					for (int t = 0; t < banknote_power; t++)
					{
						for (int g = 0; g < USHRT_MAX; g++)
						{
							if (new_line_bool)
							{
								banknote << to_string(rand()) << endl;
							}
							else {
								banknote << to_string(rand());//111111111111111111
							}
						}
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
