#include <Windows.h>
#include <iostream>
#include <string>

class sudoku {
	int map[81];

public:
	void display() {
		for (int i = 0; i < 81; i++) {
			if (i % 9 == 0 && i != 0) printf("\n");
			int o = this->map[i];
			std::cout << ((o == 0) ? "?" : std::to_string(o));
		}
	}
};

int main() {
	sudoku* sud = new sudoku();

	sud->display();

	std::cin.get();
	return 1;
}