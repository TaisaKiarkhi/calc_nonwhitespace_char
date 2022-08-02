#include <iostream>
#include <cctype>
#include <array>
using namespace std;

int main() {
	const size_t max_size_array{ 100 }; //amount of indexes is 100
	char charact_array[max_size_array]{};//100 indexes == 101 elements
	cout << "The program will count nonwhitespace charachter until the program finds # or when enter is pressed. ";
	cout << "Enter your characters: ";
	cin.getline(charact_array, max_size_array);

	bool end_counting{ false };
	int count_nonwhitespace_char{};

	do {
		for (size_t i{}; i < size(charact_array); ++i) {
			if (isspace(charact_array[i]))
				continue;
			//when "enter" is pressed
			if (charact_array[i] == '\0') {
				end_counting = true;
				break;
			}
			if (charact_array[i] == '#') {
				++count_nonwhitespace_char;
				end_counting = true;
				break;
			}

			++count_nonwhitespace_char;

		}

	} while (end_counting == false);

	cout << "There is " << count_nonwhitespace_char << " nonwhitespace character on the line.";

	return 0;
}