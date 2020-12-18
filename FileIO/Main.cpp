#include <iostream>
#include <fstream>
#include "Character.h"

int main()
{
	Character player = Character();
	player.health = 100;
	player.damage = 5;

	//Example of saving to a text file

	//Create an instance of a file stream
	std::fstream file;

	//Search for the file with the name given in the first
	//argument. If no file with this name exists, one with
	//the name is created. THen "std::ios::out" is used to
	//say that we want to output data to the text file.
	file.open("save.txt", std::ios::out);

	//Check if the file isn't opened. If so return from main.cpp
	if (!file.is_open())
	{
		return 1;
	}

	//Write player stats to the text file
	file << player.health << std::endl;
	file << player.damage;

	//Close the file once we're done
	file.close();


	//Example of loading from a text file.
	Character player2 = Character();

	//Search for a file that has the name given in the first
	//argument. The "std::ios::in" argument is used to say
	//that we want to get input from the file.
	file.open("save.txt", std::ios::in);
	
	//Check if the file isn't opened. If so return from main.cpp
	if (!file.is_open())
	{
		return 1;
	}

	//Reads the player stats from the text file.
	file >> player2.health;
	file >> player2.damage;

	//Closes the file once we're done
	file.close();

	std::cout << player2.health << std::endl;
	std::cout << player2.damage << std::endl;

	return 0;
}