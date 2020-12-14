#include <iostream>

int main()
{
	char player1Name[20];
	char player1Token = 'X';
	bool player1Win = false;

	char player2Name[20];
	char player2Token = 'O';
	bool player2Win = false;

	std::cout << "Player 1, what is your name?" << std::endl;
	std::cin >> player1Name;
	system("CLS");

	std::cout << "Player 2, what is your name?" << std::endl;
	std::cin >> player2Name;
	system("CLS");

	std::cout << player1Name << std::endl;
	std::cout << player2Name << std::endl;

	system("pause");
	system("CLS");

	system("pause");
	return 1;
}