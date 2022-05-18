//This file contains the code for running the title screen, as well as creating and loading save files, and
//using the game options menu.


void TitleScreen()
{

    void TitleScreenDisplay();
    void TitleScreenDisplayBar();
    void TitleScreenMenu();
    void TitleScreenMove();
    Title_Screen = true;

    fPosition = 1;

    while(Title_Screen == true)
    {
        TitleScreenDisplay();
        TitleScreenDisplayBar();
        TitleScreenMove();
        TitleScreenMenu();

    }



}

void TitleScreenDisplayBar()
{
      if(fPosition == 1)
        {
            cout << "               ----------" << endl;

        }

        if(fPosition == 2)
        {
            cout << "                                  -----------" << endl;

        }

        if(fPosition == 3)
        {
            cout << "                                                       ---------" << endl;

        }

        cout << "\n\n" << endl;
}

void TitleScreenDisplay()
{

    void ClearScreen();

    ClearScreen();
    cout << "\n\n\n\n\n\n\n\n";


    cout << "                          Welcome to Rose, a text" << endl;
    cout << "                           based adventure game!" << endl;
    cout << endl;
    cout << " .............................................................................." << endl;
    cout << endl;
    cout << endl;
    cout << "                New Game           Load Save            Options" << endl;

}

void TitleScreenMove()
{

     switch(_getch())
    {
    case 'a':
        fMove = 1;
        break;
    case 'A':
        fMove = 1;
        break;
    case 'd':
        fMove = 2;
        break;
    case 'D':
        fMove = 2;
        break;
    case '\r':
        fMove = 3;
        break;
    }
}

void TitleScreenMenu()
{
    void TitleScreenOptions();
    void NewGame();
    void LoadSave();


    if(fPosition == 1)
        {

            switch(fMove)
            {
            case 1:
                fPosition = 3;
                break;
            case 2:
                fPosition = 2;
                break;
            case 3:
                NewGame();
                break;

            }
        }

        else if(fPosition == 2)
        {
            switch(fMove)
            {
            case 1:
                fPosition = 1;
                break;
            case 2:
                fPosition = 3;
                break;
            case 3:
                LoadSave();
                break;
            }
        }
        else if(fPosition == 3)
        {
            switch(fMove)
            {
            case 1:
                fPosition = 2;
                break;
            case 2:
                fPosition = 1;
                break;
            case 3:
                TitleScreenOptions();
                break;
            }
        }
}

void TitleScreenOptions()
{

    void FastText();
    void SlowText();


     cout << "1. Debug Mode (I run this with certain code already run for testing purposes)" << endl;
     cout << "2. Help" << endl;
     cout << "3. Exit" << endl;
     cout << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        }
     cout << endl;

     switch(decision)
     {
     case 1:
        animationText = "Entering Debug Mode";
        FastText();
        Pause();
        Title_Screen = false;
        attackbar_speed = 8;
        enemyframe_speed = 250;

        //this is where you switch around debug code
        gPosition = 38;
        Room.Boss = true;
        Player.Health = 900;
        Player.Damage = 20;
        TravelStatus = 2;
        Item.Coins = 110;
        Room.Village = true;
        Room.SwordRoom = true;
        Room.Dungeon = true;
        CrownPuzzle = true;
        Wings = true;
        NymphAttack = false;
        ControlLoop();
        break;
     case 2:
        cout << "1. Controls" << endl;
        cout << "2. It's not working" << endl;
        cout << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        }
        switch(decision)
        {
        case 1:
            cout << Text.Controls << endl; Pause();
            break;
        case 2:
            cout << "1. I have a user manual in the file this exe is in, labeled Manual.txt,\nlook there for your problem first." << endl;
            cout << "2. If your question isnt answered there, contact me :) 1-815-383-6695" << endl;
        }
        break;

     }




     Pause();

}

void LoadSave()
{

    //Calculate the area the player is in and bring them to the starting room in that area
    if(gPosition == 1 || gPosition == 11 || gPosition == 12 || gPosition == 13 || gPosition == 14 || gPosition == 15 || gPosition == 16)
    {
        areaName = "Your House";
    }

    if(gPosition == 2 || gPosition == 21 || gPosition == 22 || gPosition == 23 || gPosition == 24 || gPosition == 25 || gPosition == 26 || gPosition == 27 || gPosition == 28 || gPosition == 29)
    {
        areaName = "Town";
    }
    if(gPosition == 3 || gPosition == 31 || gPosition == 32 || gPosition == 33 || gPosition == 34 || gPosition == 35 || gPosition == 351 || gPosition == 36 || gPosition == 37 || gPosition == 38 || gPosition == 39 || gPosition == 391 || gPosition == 392 || gPosition == 393 || gPosition == 394 || gPosition == 395 || gPosition == 396 || gPosition == 397 || gPosition == 398 || gPosition == 399 || gPosition == 3910 || gPosition == 3911 || gPosition == 3912 || gPosition == 3913 || gPosition == 3914 || gPosition == 3915)
    {
        areaName = "Forest";
    }
    if(gPosition == 4 || gPosition == 41 || gPosition == 42 || gPosition == 43 || gPosition == 44 || gPosition == 45 || gPosition == 46 || gPosition == 46 || gPosition == 47 || gPosition == 48 || gPosition == 49)
    {
        areaName = "Elf Village";
    }

     if(file == false)
     {
         cout << "There is no save files loaded at this time" << endl;
         Pause();
     }
     else
     {

        if(file == true)
        {
         cout << "---------------------------------------------" << endl;
         cout << " " << Player.Name << ": " << areaName << "\n" << endl;
         HealthBar();
         cout << endl;
         cout << "---------------------------------------------" << endl;
         cout << endl;
        }

        Pause();

        cout << "Would you like to load this file?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << endl;

        switch(_getch())
        {
          case '1':
          decision = 1;
          break;
         case '2':
          decision = 2;
          break;
        }

        if(decision == 1) {
            Title_Screen = false;
            CalculateDisplay();
            ControlLoop();
        }
     }
}

void NewGame()
{

    void Cutscene_Prolouge();
    void SlowText();

    file = true;
    Title_Screen = false;
    attackbar_speed = 8;
    enemyframe_speed = 250;

    ClearScreen();

                cout << "\n\n\n\n\n\n\n                             ";
                animationText = "Name Your Character..."; FastText(); Pause();
                cout << "                                  ----------" << endl;
                cout << "                                  ";
                cin >> Player.Name;


    ClearScreen();


    cout << "\n\n\n\n\n\n\n              ";
    animationText = "Would You like to see the Controls before you begin?";
    FastText(); Pause();
    cout << endl;
    cout << "                       1. Yes                  2. No" << endl;
    cout << endl;
                        switch(_getch())
                        {
                        case '1':
                        decision = 1;
                        break;
                        case '2':
                        decision = 2;
                        break;
                        }
    cout << "\n\n" << endl;

    if(decision == 1)
    {
        cout << Text.Controls;
        cout << endl;
        Pause();
        Pause();
    }

    if(decision == 2)
    {
    cout << "\n\n" << endl;
    cout << "You can review the controls at any time by pressing 'C'" << endl;
    Pause();

    }

    ClearScreen();
    cout << "\n\n\n\n\n\n\n";
    cout << "                      ";
    animationText = "Beginning Game Now..Good Luck!";
    FastText();
    cout << "                                 ";

    animationText = ".  .  .";
    SlowText();


    Cutscene_Prolouge();


}


