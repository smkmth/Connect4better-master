// Butts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Game.h"


int main()
{
	Game game = Game();

	CBoard* PlayingBoard;
	PlayingBoard = game.GetCurrentBoard();


	PlayingBoard->SetActivePlayer(1);

}

