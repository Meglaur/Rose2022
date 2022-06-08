//These are the functions that make cutscenes and interactions in the game fun and fancy, they do things like
//animate text so it scrolls across the screen or pauses the text or clears the screen, etc.

void Dialogue()
{
	void TextColor();
	void scrollText();
	void Pause();
	void ClearScreen();
	void TopScreen();

	//check to see if its a cutscene or in world dialogue, set up screen accordingly
	if (Cutscene == true)
	{
		ClearScreen();
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	}
	else
	{
		ClearScreen();
		TopScreen();
	}

	//check who is speaking and make sure the color matches
	if (Character.Name == Player.Name)
	{
		Character.Speaker = Player.Name;
	}

	if (Character.Name == " " || Character.Name == "Old Man" || Character.Name == "Grandma" || Character.Name == "Hilda" || Character.Name == "Elder" || Character.Name == "Loni" || Character.Name == "Shopkeeper" || Character.Name == "roomPurchasekeeper" || Character.Name == "Kuhar" || Character.Name == "Aida" || Character.Name == "Tiki")
	{
		Character.Speaker = Character.Narrator;
	}

	if (Character.Name == "???")
	{
		Character.Speaker = Character.Unknown;
	}

	TextColor();

	//draw dialogue box
	cout << "_______________________________________________________________________________\n" << endl;
	cout << Character.Name << endl;
	cout << "_______________________________________________________________________________" << endl;
	cout << "\n\n" << endl;

	//adjust text scrolling speed
	if (slowText == true)
	{
		scrollText();
		slowText = false;
	}
	else if (fastText == true)
	{
		scrollText();
		fastText = false;
	}
	else
	{
		scrollText();
	}

	Pause();

	//return text color to normal
	Character.Speaker = Character.Narrator;
	TextColor();
}

void Pause()
{
	//This Function Pauses the game until the user presses a key, useful in most cutscenes
	cin.ignore(10, '\n');
}

void DoublePause()
{
	void Pause();
	Pause();
	Pause();
}

void TextColor()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	if (Character.Speaker == Player.Name)
	{
		SetConsoleTextAttribute(color, 3);	//aqua
	}

	if (Character.Speaker == Character.Battle)
	{
		SetConsoleTextAttribute(color, 12);	//red
	}

	if (Character.Speaker == Character.Unknown)
	{
		SetConsoleTextAttribute(color, 8);	//grey
	}

	if (Character.Speaker == Character.Narrator)
	{
		SetConsoleTextAttribute(color, 7);	//white
	}

	if (Character.Speaker == Text.TopScreen)
	{
		SetConsoleTextAttribute(color, 7);	//white
	}
}

void scrollText()
{
	bool textpause = false;
	int sleeptime = 60;

	if (slowText == true)
	{
		sleeptime = 500;
	}

	if (fastText == true)
	{
		sleeptime = 20;
	}

	int i = 0;
	string text = animationText;

	while (text[i] != '\0')
	{
		cout << text[i];
		Sleep(sleeptime);
		i++;
		if (kbhit())
		{
			sleeptime = 0;
			textpause = true;
		}
	};

	if (textpause = true)
	{
		Pause();
	}

	slowText = false;
	fastText = false;
}

void ClearScreen()
{
	system("cls");
}