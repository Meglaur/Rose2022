//This file includes functions that are called upon when the player does a specific
//re-occuring action within the world, such as sleeping or traveling, that isn't 
//linked specifically to a certain area.

void PlayerSleep()
{
	//Clear the display to a blank screen
	ClearScreen();

	//add space for centered text
	cout << "\n\n\n\n\n\n\n\n" << endl;
	cout << "                                    ";

	//run animated text, Pause for the user to continue
	animationText = "z z Z Z";
	slowText = true;
	scrollText();
	Pause();

	//Reset display to normal
	TopScreen();
	cout << "\n\n" << endl;
	cout << "You woke back up! You feel well rested." << endl;
	cout << "Your health reached full!" << endl;

	//Restore player health to full
	Player.Health = Player.MaxHealth;

	//When located in an inn, give the player added luck
	if (Inn == true)
	{
		cout << "The soft inn bed made you happy!" << endl;
		cout << "*Luck + 1*" << endl;
		Player.Luck += 1;
		RandomLuckValue += 1;
	}

	Pause();
}

void TravelZone()
{
	//This function brings up a menu when the player chooses to travel. The player
	//can see a small map of the world and choose the location they want to go
	//to. It also resets certain variables upon leaving areas, including Inn
	//Statuses

	void Debug();
	void DoublePause();
	void Pause();
	void GetInput();

	//Ask the player if they are sure they want to leave the area they are in.
	cout << "Leave the Area?";

	//If the player purchased a room in the inn and never used it, warn the player
	//that they will lose their purchase upon leaving.
	if (Inn == true)
	{
		cout << " Warning: Leaving the area will make you unable\nto use the inn.";
	}

	cout << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << endl;

	GetInput();

	//if the player chooses not to leave, display this message and do nothing
	if (decision == 2)
	{
		cout << "You decided not to leave the area." << endl;
		DoublePause();
	}
	else if (decision == 1)
	{
		animationText = "\nGo Where? :\n";
		scrollText();

		//Only display the parts on the map currently accessible to the player
		switch (TravelStatus)
		{
			case 1:
				cout << "           _______________ " << endl;
				cout << "           |             | " << endl;
				cout << "           |    2.Town   | " << endl;
				cout << "            -----   -----	" << endl;
				cout << " 		 | |        " << endl;
				cout << " __" << endl;
				cout << "|  | 1.House - - - - - - - - - " << endl;
				cout << " -- " << endl;

				GetInput();

				switch (decision)
				{
					case 1:
						gPosition = 1;
						//reset certain things upon leaving an area
						House.Desk = false;
						if (Inn == true)
						{
							Inn = false;
						}

						break;
					case 2:
						gPosition = 2;
						Debug();
						Move();
						//reset certain things upon leaving an area
						Town.Bushes = false;
						if (Inn == true)
						{
							Inn = false;
						}

						break;
				}

				break;
			case 2:
				cout << "                                        _______" << endl;
				cout << "                                        |     |" << endl;
				cout << "               _______________         |      |" << endl;
				cout << "               |             |      __-       |" << endl;
				cout << "               |    2.Town   |    _|	      |" << endl;
				cout << "               -----   -----	  |	      |" << endl;
				cout << "        __           | |          |	      |" << endl;
				cout << "       |  | 1.House - - - - - - -   3. Forest |" << endl;
				cout << "        --                        -|          |" << endl;
				cout << "                                   |	      |" << endl;
				cout << "                                   |      ----|" << endl;
				cout << "                                   |_____|    |" << endl;
				cout << "                                   |	      |" << endl;
				cout << "                                   |    |     |" << endl;
				cout << "                                   -----|-------" << endl;
				if (Room.Village == true)
					cout << "                                        Elf Village" << endl;

				GetInput();

				switch (decision)
				{
					case 1:
						gPosition = 1;
						House.Desk = false;
						if (Inn == true)
						{
							Inn = false;
						}

						break;
					case 2:
						gPosition = 2;
						Debug();
						Move();
						Town.Bushes = false;
						if (Inn == true)
						{
							Inn = false;
						}

						break;

					case 3:
						gPosition = 3;
						Debug();
						Move();
						//RA
						if (Inn == true)
						{
							Inn = false;
						}

						break;
				}

				break;
		}
	}
}

void GameOver()
{
	void TitleScreen();
	void Cutscene_Prolouge();
	void ClearScreen();
	void GetInput();

	Gameover = true;
	Player.Health = Player.MaxHealth;

	//Calculate the area the player is in and bring them to the starting room in that area
	if (gPosition == 1 || gPosition == 11 || gPosition == 12 || gPosition == 13 || gPosition == 14 || gPosition == 15 || gPosition == 16)
	{
		gPosition = 1;
		CalculateDisplay();
	}

	if (gPosition == 2 || gPosition == 21 || gPosition == 22 || gPosition == 23 || gPosition == 24 || gPosition == 25 || gPosition == 26 || gPosition == 27 || gPosition == 28 || gPosition == 29)
	{
		gPosition = 2;
		CalculateDisplay();
	}

	if (gPosition == 3 || gPosition == 31 || gPosition == 32 || gPosition == 33 || gPosition == 34 || gPosition == 35 || gPosition == 351 || gPosition == 36 || gPosition == 37 || gPosition == 38 || gPosition == 39 || gPosition == 391 || gPosition == 392 || gPosition == 393 || gPosition == 394 || gPosition == 395 || gPosition == 396 || gPosition == 397 || gPosition == 398 || gPosition == 399 || gPosition == 3910 || gPosition == 3911 || gPosition == 3912 || gPosition == 3913 || gPosition == 3914 || gPosition == 3915)
	{
		gPosition = 3;
		CalculateDisplay();
	}

	if (gPosition == 4 || gPosition == 41 || gPosition == 42 || gPosition == 43 || gPosition == 44 || gPosition == 45 || gPosition == 46 || gPosition == 46 || gPosition == 47 || gPosition == 48 || gPosition == 49)
	{
		gPosition = 4;
		CalculateDisplay();
	}

	CalculateDisplay();
	ClearScreen();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	cout << "                                GAME OVER" << endl;
	animationText = "--------------------------------------------------------------------------------";
	scrollText();
	Pause();
	cout << "\n\n\n" << endl;
	cout << "                          Would you like to continue?..." << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << endl;

	GetInput();

	if (decision == 1)
	{
		cout << "\n\n\n" << endl;
		cout << "                        Returning to last save point" << endl;
		cout << "                                  ";
		animationText = ". . .";
		slowText = true;
		scrollText();
		cout << endl;
		cout << endl;
		Gameover = false;
		CalculateDisplay();
		ControlLoop();
	}
	else
	{
		Title_Screen = true;
		TitleScreen();
	}
}

void GetInput()
{
	switch (_getch())
	{
		case '1':
			decision = 1;
			break;
		case '2':
			decision = 2;
			break;
		case '3':
			decision = 3;
			break;
		case '4':
			decision = 4;
			break;
		case '5':
			decision = 5;
			break;
		case '6':
			decision = 6;
			break;
		case '7':
			decision = 7;
			break;
		case '8':
			decision = 8;
			break;
		case '9':
			decision = 9;
			break;
	}

	cout << endl;
}