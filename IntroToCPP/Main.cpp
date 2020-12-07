#include <iostream>

int main()
{
	char answer;
	int num;
	int min;
	int max;

	std::cout << "Pick a number between one and one hundred" << std::endl;

	system("pause");

	std::cout << "Rules: Answer all questions with either Y for yes or N for no!" << std::endl;

	std::cout << " You must also answer G for greater than or L for less than!" << std::endl;

	std::cout << "Remeber that number and DO NOT CHANGE IT!" << std::endl;

	system("pause");
	system("cls");

	std::cout << "Now let's get started! Is your number 50?" << std::endl;

	int num = 50;
	int min = 0;
	int max = 100;

	void mid(int min, int max);
	{
		(min + max) / 2;
	}

	std::cin >> answer;

	if (answer != 'Y' && answer != 'N' && answer != 'G' && answer != 'L')
	{
		if (answer == 'Y')
		{
			std::cout << "Your number is " << num << "!" << std::endl;

			system("pause");

			return 1;
		}
		else if (answer == 'N')
		{
			std::cout << "Is the number greater or less than 50?" << std::endl;

			system("pause");

			if (answer == 'G')
			{
				mid(51, 100);
			}
		}
	}

	system("pause");
	return 1;
}