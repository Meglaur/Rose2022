
void Area_Town() {

    void Debug();
    void Move();
    void Pause();
    void TravelZone();
    void SlowText();
    void PlayerSleep();
    void GetInput();
    void handleFountain();
    void handleTownShop();
    void handleTownShopDialogue();
    void handleTownInnDialogue();
    void handleOldMan();
    void handleFire();
    void handleGrandma();
    void handleHilda();
    void handleTownChest();
    void handleTownInn();
    void handleTownInnBed();
    void handleSword();
    void handleTownBookshelf();

    //Travel Zone - Town Gate
    if(gPosition == 2) {
        switch(gMove) {
            case 1:
                gPosition = 21; Debug(); Move();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                TravelZone();
                break;
        }
    }

    //Main Square
    if(gPosition == 21) {
        switch(gMove) {
            case 1:
                gPosition = 24; Debug(); Move();
                break;
            case 2:
                gPosition = 22; Debug(); Move();
                break;
            case 3:
                gPosition = 23; Debug(); Move();
                break;
            case 4:
                gPosition = 2;
                break;
            case 5:
                handleFountain();
                break;
        }
    }

    //Edwins Shop
    if(gPosition == 22) {
        switch(gMove) {
            case 1:
                handleTownShop();
                break;
            case 2:
                break;
            case 3:
                gPosition = 21;
                break;
            case 4:
                break;
            case 5:
                handleTownShopDialogue();
        }
    }

    //House Path
    if(gPosition == 23) {
        switch(gMove) {
            case 1:
                gPosition = 28; Debug(); Move();
                break;
            case 2:
                gPosition = 21;
                break;
            case 3:
                gPosition = 26; Debug(); Move();
                break;
            case 4:
                gPosition = 29; Debug(); Move();
                break;
            case 5:
                cout << "You look through the bushes." << endl;
                if(Town.Bushes == false) {
                    cout << "For some reason, you find coins in them." << endl;
                    cout << "*Coins + 5*" << endl;
                    Item.Coins += 5;
                    Town.Bushes = true; Pause();
                } else {
                    cout << "You don't find anything of interest there." << endl;
                }
                Pause();
        }
    }

    //Prancing Pony Inn
    if(gPosition == 24) {
        switch(gMove) {
            case 1:
                handleTownInn();
                break;
            case 2:
                if(Inn == true) {
                    gPosition = 25; Debug(); Move();
                } else {
                    cout << "You don't have access to that room!" << endl; Pause();
                }
                break;
            case 3:
                break;
            case 4:
                gPosition = 21;
                break;
            case 5:
                handleTownInnDialogue();
        }
    }

    //InnRoom
    if(gPosition == 25) {
        switch(gMove) {
            case 1:
                handleTownInnBed();
                break;
            case 2:
                if(Town.InnTable == false) {
                    cout << "You go up to the table in the room. The Innkeeper left a meal on it for you." << endl;
                    cout << "*Food + 2*" << endl;
                    Item.Food += 2;
                    Town.InnTable = true;
                } else {
                    cout << "You go up to the table in the room. It has nothing on it." << endl;
                }
                Pause();
                break;
            case 3:
                if(Inn == false) {
                    Character.Name = "Innkeeper";
                    animationText = "Innkeeper: Thank you for staying the night. Come again!";
                    Dialogue();
                }
                gPosition = 24;
                break;
            case 4:
                handleTownBookshelf();
                break;
            case 5:
                cout << "You look around the room, it's warm and cozy. It seems like a nice place to \nspend the night." << endl;
                Pause();
        }
    }

    //Old Mans House
    if(gPosition == 26) {
        switch(gMove) {
            case 1:
                handleOldMan();
                break;
            case 2:
                gPosition = 23;
                break;
            case 3:
                if(Room.SwordRoom == true) {
                    gPosition = 27; Debug(); Move();
                } else {
                    cout << "You don't have access to that room!" << endl; Pause();
                }
                break;
            case 4:
                cout << "You go up to the Old Mans picture wall. It's filled with drawings of his family." << endl;
                cout << "There are a few photos of him when he was younger, on adventures with a wooden \nsword." << endl;
                Pause();
                break;
            case 5:
                cout << "You look around the room, the Old Man sits in a chair near the fireplace, and" << endl;
                cout << "pictures and weapons hang decoratively around the room. You see antlers and" << endl;
                cout << "monster horns displayed on one wall." << endl;
                cout << endl;
                Pause();
                Character.Name = Player.Name;
                animationText = "He must have been quite a fighter.";
                Dialogue();
                break;
        }
    }

    //Old Mans Sword Room
    if(gPosition == 27) {
        switch(gMove) {
            case 1:
                handleSword();
                break;
            case 2:
                gPosition = 26;
                break;
            case 3:
                handleTownChest();
                break;
            case 4:
                break;
            case 5:
                cout << "You look around the room. A decorative rack and old wooden chest sit in the room." << endl;
                cout << "It feels a little musty, as though its contents haven't been needed in some time." << endl;
                Pause();
                break;
            }
        }

    //Grandma's House
    if(gPosition == 28) {
        switch(gMove) {
            case 1:
                handleGrandma();
                break;
            case 2:
                cout << "You go up to the pictures on Grandmas wall. You see her in her youth, as well asdrawings of you and Rose." << endl;
                Pause();
                Character.Name = Player.Name;
                animationText = "These drawings bring me back. I hope we can all be happy and together \nagain.";
                Dialogue();
                break;
            case 3:
                handleFire();
                break;
            case 4:
                gPosition = 23;
                break;
            case 5:
                cout << "You look around the house. Its cozy and clean. You remember times you used" << endl;
                cout << "to play here with your sister.";
                Pause();
                break;
        }
    }

    //Hilda's House
    if(gPosition == 29) {
        switch(gMove) {
            case 1:
                gPosition = 23;
                break;
            case 2:
                handleHilda();
                break;
            case 3:
                cout << "Hilda's Bed looks unused. She probably sleeps more in her rocking chair\nthen here." << endl;
                Pause();
                break;
            case 4:
                cout << "Maybe you shouldnt go looking in other peoples dressers." << endl;
                Pause();
                break;
            case 5:
                cout << "The room is cozy and warm. You see Hilda in her rocking chair by the fire.";
                Pause();
                break;
        }
    }
}

void handleFountain() {

    void GetInput();

    cout << "You go up to the fountain in the middle of the square." << endl;
    cout << "You feel cool standing next to the water.\n" << endl;
    if(Town.Fountain == true) {
        cout << "The coin you threw in glistens in the sunlight.";
        Pause();
    } else {
        cout << "Throw a coin into the fountain?" << endl;
        cout << endl;
        cout << "1: Yes" << endl;
        cout << "2: No" << endl;
        cout << endl;
        
        GetInput();

        switch(decision) {
        case 1:
            cout << "You threw a coin into the fountain. It falls to the bottom." << endl;
            cout << "*Luck + 1*";
            Player.Luck += 1;
            RandomLuckValue += 1;
            Item.Coins -= 1;
            Town.Fountain = true;
            Pause();
            break;
        case 2:
            cout << "You decided not to throw a coin into the fountain." << endl; Pause();
            break;
        }
        Pause();
    }
}

void handleTownShop() {

    void ClearScreen();
    void FastText();
    void GetInput();
    void Pause();
    void DoublePause();

    ClearScreen(); 
    cout << "\n\n                       ";
    animationText = "Would you like to buy something?";
    FastText();
    cout << "\n\n\n\n\n\n\n\n";
    cout << "                            1. Elixers - 5 coins" << endl;
    cout << "                            2. Pumpkin Pie - 2 coins" << endl;
    cout << "                            3. Paper - 5 coins" << endl;
    if(Item.Shield == false) {
        cout << "                            4. Shield - 20 coins" << endl;
    }
    cout << "                            5. Nothing" << endl;

    GetInput();

    switch(decision) {
        case 1:
            if(Item.Coins >= 5) {
                cout << "                         You bought some elixers!" << endl;
                cout << "                              *Elixers + 3*" << endl;
                DoublePause();

                Character.Name = "Shopkeeper";
                animationText = "Thank you for your buisness.";
                Dialogue();
                Item.Elixers += 3;
                Item.Coins -= 5;
            } else {
                cout << "                    You don't have enough coins for that!" << endl;
            }
            Pause();
            break;
        case 2:
            if(Item.Coins >= 2) {
                cout << "                          You bought a pumpkin pie!" << endl;
                cout << "                                 *Food + 3*" << endl;
                DoublePause();

                Character.Name = "Shopkeeper";
                animationText = "Thank you for your buisness.";
                Dialogue();

                Item.Food += 3;
                Item.Coins -= 2;
            } else {
                cout << "                    You don't have enough coins for that!" << endl;
            }
            Pause();
            break;
        case 3:
            if(Item.Coins >= 5 && Item.Paper == false) {
                cout << "                           You bought some paper!" << endl;
                DoublePause();

                Character.Name = "Shopkeeper";
                animationText = "Thank you for your buisness.\n";
                Dialogue();
                Item.Paper = true;
                Item.Coins -= 5;
            } else if(Item.Coins >= 5 && Item.Paper == true) {
                Character.Name = Player.Name;
                animationText = "Didn't i already buy that?";
                Dialogue();
            } else if(Item.Coins <= 5) {
                cout << "                    You don't have enough coins for that!" << endl;
            }
            Pause();
            break;
        case 4:
            if(Item.Coins >= 20 && Item.Shield == false) {
                Character.Name = " ";
                cout << "                          You bought the Shield!" << endl;
                DoublePause();

                Character.Name = "Shopkeeper";
                animationText = "Thank you so much for your buisness!";
                Dialogue();

                Item.Shield = true;
                Item.Coins -= 20;
                if(Item.Shield == true && Item.Armor == true && Item.WoodenSword == true) {
                    Grandmas_Items = true;
                    Character.Name = Player.Name;
                    animationText = "I got all of the things Grandma wanted me to collect! I'd better go back \nto her.";
                    Dialogue();
                }
            } else if(Item.Shield == false && Item.Coins <= 20) {
                cout << "                    You don't have enough coins for that!" << endl;
            }
            Pause();
            break;
        case 5:
            break;
    }
    Pause();
}

void handleTownInn() {

    void Debug();
    void GetInput();
    void Pause();

    Character.Name = "Innkeeper";
    animationText = "Innkeeper: Would you like to stay the night? - 5 coins";
    Dialogue();
    cout << endl;
    cout << "               1. Yes                       2.No" << endl;

    GetInput();

    switch(decision) {
        case 1:
            if(Item.Coins >= 5 && Inn == false) {
            Inn = true;
            Town.InnTable = false;
            animationText = "Innkeeper: Heres the key to your room, you'll find it upstairs.";
            Dialogue();
            Item.Coins -= 5;
            } else if(Inn == true) {
                cout << "You already have a room!" << endl;
                Pause();
            } else if(Item.Coins < 5) {
                cout << "You don't have enough coins for that!" << endl;
                Pause();
            }
            Pause();
            break;
        case 2:
            animationText = "Innkeeper: If you change you mind come on back.\n";
            Dialogue();
            break;
    }
}

void handleTownShopDialogue () {

    void Dialogue();
    void GetInput();

    Character.Name = "Shopkeeper";
    animationText = "Welcome to the shop, how can I help you?";
    Dialogue();
    cout << "1. What do you sell?" << endl;
    cout << "2. Can you tell me how to get coins?" << endl;
    cout << "3. Nothing" << endl;

    GetInput();

    switch(decision) {
        case 1:
            Character.Name = "Shopkeeper";
            animationText = "If you would like to see what I sell, come up to the counter.";
            Dialogue();
            break;
        case 2:
            Character.Name = "Shopkeeper";
            animationText = "I heard that searching through each area you come upon can bring one coins.";
            Dialogue();
            break;
    }

    Pause();
}

void handleTownInnDialogue() {

    void Dialogue();
    void GetInput();
    void Dialogue();

    Character.Name = "Innkeeper";
    animationText = "Innkeeper: How can I help you?";
    Dialogue();
    cout << "1. Can I buy a room?" << endl;
    cout << "2. Got any Rumors?" << endl;
    cout << "3. Nothing" << endl;
    cout << endl;

    GetInput();

    switch(decision) {
        case 1:
            animationText = "Innkeeper: I can rent you the room for the night if you come up to the counter.";
            Dialogue();
            cout << endl;
            break;
        case 2:
            animationText = "Innkeeper: I heard that the old man used to be a great swordsman. And Hilda is\nknown for rewarding those who will listen to her stories.";
            Dialogue();
            cout << endl;
            break;
    }

    Pause();
}

void handleOldMan() {

    void Dialogue();
    void Cutscene_OldMan1();
    void Cutscene_OldMan2();

    if(cutscene.OldMan1 == false && cutscene.GrandmaHelps == false) {
        Character.Name = "Old Man";
        animationText = "Good Evening to you.";
        Dialogue();
    } else if(cutscene.OldMan1 == false && cutscene.GrandmaHelps == true) {
        Cutscene_OldMan1();
        cutscene.OldMan1 = true;
    } else if(cutscene.OldMan1 == true && cutscene.OldMan2 == false && Item.Paper == true) {
        Cutscene_OldMan2();
        cutscene.OldMan2 = true;
    } else if(cutscene.OldMan1 == true && Item.Paper == false) {
        Character.Name = "Old Man";
        animationText = "If you would like me to give you my sword, please bring me some paper \nto write a letter with.";
        Dialogue();
    } else if(cutscene.OldMan1 == true && cutscene.OldMan2 == true) {
        Character.Name = "Old Man";
        animationText = "Thank you for doing me this favor. Be careful on your journey.";
        Dialogue();
    }
    Pause();
}

void handleFire() {

    void Pause();
    void GetInput();

    cout << "You go up to the wood stove." << endl;
    cout << endl;
    if(Town.Stove == true) {
        cout << "The fire is roaring." << endl;
    } else {
        cout << "The fire is dying down." << endl;
        cout << endl;
        cout << "Stoke the fire?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << endl;

        GetInput();

        if(decision == 1) {
            cout << "You stoked the fire. It fills you with warmth." << endl;
            cout << "-Luck + 1-" << endl;
            Player.Luck += 1;
            RandomLuckValue += 1;
            Town.Stove = true;
            Pause();
        } else {
            cout << "You decided not to stoke the fire." << endl;
            Pause();
        }
    }
    Pause();
}

void handleGrandma() {

    void Dialogue();
    void Cutscene_GrandmasList();
    void Cutscene_GrandmaHelps();

    if(cutscene.GrandmaHelps == false) {
        Cutscene_GrandmaHelps();
        cutscene.GrandmaHelps = true;
    } else if(cutscene.GrandmasList == false && Grandmas_Items == false) {
        Character.Name = "Grandma";
        animationText = "Before you go to the forest you must first collect the items I \nhave told you about. The Sword, The Shield, and The Armor.";
        Dialogue();
    } else if(cutscene.GrandmasList == false && Grandmas_Items == true) {
        Cutscene_GrandmasList();
        cutscene.GrandmasList = true;
    } else if(cutscene.GrandmaHelps == true && cutscene.GrandmasList == true) {
        Character.Name = "Grandma";
        animationText = "Be careful on your adventure dear, and find Rose as quickly as you can!";
        Dialogue();
    }
}

void handleHilda() {

    void miniScene_Hilda();
    void Dialogue();
    void GetInput();
    void Pause();

    if(Town.Hilda == false) {
        Character.Name = "Hilda";
        animationText = "Would you like to listen to my story?";
        Dialogue();
        cout << "               1. Yes                       2.No" << endl;

        GetInput();

        switch(decision) {
        case 1:
            miniScene_Hilda();
            break;
        case 2:
            cout << "You politely decline. She looks sad, and sends you on your way." << endl; Pause();
            break;
        }
    } else {
        Character.Name = "Hilda";
        animationText = "*snore*";
        Dialogue();
    }
    Pause();
}

void handleTownChest() {

    void GetInput();
    void DoublePause();

    cout << "You go up to the chest." << endl;
    if(Town.Chest == false) {
        cout << "Open the chest?\n" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No\n" << endl;

        GetInput();

        switch(decision) {
        case 1:
            cout << "Inside the Chest are 3 elixers and 10 coins!" << endl;
            cout << "*Elixers + 3*" << endl;
            cout << "*Coins + 10*" << endl;
            Item.Coins += 15;
            Item.Elixers += 3;
            Town.Chest = true;
            break;
        case 2:
            cout << "You decide not to open the chest." << endl;
            break;
        }
    }
    DoublePause();
}

void handleTownInnBed() {

    void GetInput();
    void Pause();
    void PlayerSleep();

    if(Inn == true) {
        cout << "You go up to the bed, it looks comfortable." << endl;
        cout << "Go to sleep?" << endl;
        cout << "(You will not be able to re-enter the room after leaving once you do)" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;

        GetInput();

        switch(decision) {
            case 1:
                PlayerSleep();
                Inn = false; Town.InnTable = false;
                break;
            case 2:
                cout << "You decide not to sleep." << endl; Pause();
                break;
        }
    } else {
        cout << "You already stayed the night." << endl;
    }
    Pause();
}

void handleSword() {

    void Dialogue();
    void Pause();

    if(Item.WoodenSword == false) {
        Character.Name = " ";
        animationText = "You take the Wooden Sword off its decorative rack and strap it to your back.\nYou got a major item!";
        Dialogue();

        Character.Name = Player.Name;
        animationText = "Grandma said I'd need this, I just hope I'll be able to use it well.";
        Dialogue();
        Item.WoodenSword = true;

        if(Item.Shield == true && Item.Armor == true && Item.WoodenSword == true) {
            Character.Name = Player.Name;
            animationText = "I got all of the things Grandma wanted me to collect! I'd better go back \nto her.";
            Dialogue();
            Grandmas_Items = true;
        }
        Pause();
    } else {
        cout << "You look at an empty decorative rack. A Wooden Sword used to sit there." << endl;
    }
    Pause();
}

void handleTownBookshelf() {

    if(Item.Cookbook == false) {
        cout << "You look at the bookshelf. A sign hangs next to it." << endl;
        animationText = "Sign: Take any book you like, and feel free to add your own!";
        FastText();
        cout << "Most of the books are boring, but you see an interesting cookbook.\nTake it?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;

        GetInput();

        switch(decision) {
            case 1:
                cout << "You take the cookbook with you." << endl; Pause(); Item.Cookbook = true;
                break;
            case 2:
                cout << "You decide to leave the book." << endl; Pause();
                break;
        }
    } else {
        cout << "You see a bookshelf filled with boring books." << endl; Pause();
    }
    Pause();
}

