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
					case 'e': new_line_bool = true; break;
					case 's': new_line_bool = false; break;
					default: return 0;
				}

				cout << endl;
				string filename = "";

#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
					for (int t = 0; t < banknote_power; t++)
					{
						for (int g = 0; g < USHRT_MAX; g++)
						{
							if (new_line_bool)
							{
								banknote << to_string(rand()) << endl;
							}
							else {
								banknote << to_string(rand());
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
