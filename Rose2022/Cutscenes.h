//This file holds all the information to run the cutscenes in the game. They take from text functions to create
//a fancy way of getting information off to the user. Usually areas or rooms will pull from this file to run
//cutscenes when a user does a specific thing or goes to a specific area.

void OpeningtheGame()
{
	void scrollText();
	void Pause();
	void ClearScreen();
	void TitleScreen();

	cout << "\n\n\n\n\n\n\n\n\n\n\n" << endl;
	cout << "--------------------------------------------------------------------------------\n\n\n\n\n\n\n\n" << endl;
	animationText = "                         Working Title Games";
	scrollText();
	Pause();
	ClearScreen();
	TitleScreen();
}

void Cutscene_Prolouge()
{
	void miniScene_Tutorial();
	Cutscene = true;
	progressStatus = 1;

	Character.Name = "???";
	animationText = Player.Name + "!";
	Dialogue();
	animationText = Player.Name + " wake up! \n";
	Dialogue();
	animationText = "You must come find me, I'm trapped and I \nneed help.";
	Dialogue();
	animationText = "You must wake up, and hurry! Go to Grandma. She can help you. Wake up\nand go to her!";
	Dialogue();

	Character.Name = " ";
	animationText = "You wake up in bed with a start, the voice still echoing in your mind.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "Rose? Rose where are you?";
	Dialogue();

	Character.Name = " ";
	animationText = "You need to find your sister...";
	Dialogue();

	gPosition = 14;
	Cutscene = false;
	miniScene_Tutorial();

}

void Cutscene_OldMan1()
{
	Cutscene = true;

	Character.Name = "Old Man";
	animationText = "Well hello there young one. What is it that you need?";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "I lost my sister and I need to go looking for her, but before I go\noutside I need something to protect myself with. I was wondering if you could \nhelp me.";
	Dialogue();

	Character.Name = "Old Man";
	animationText = "Well, you see I used to be quite a swordsman in my day. I took down\nmany a beast in the forest near us with my wooden sword, though it has been a long \ntime since I've used it.\n";
	Dialogue();
	animationText = "Since I have no use for it now I do not see a problem with lending it \nto you. However, first I must ask a favor. There is a relative of mine in the city. \nI would like to send him a letter..but I don't know how to write.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "I could help you with that!";
	Dialogue();

	Character.Name = "Old Man";
	animationText = "Well, if you buy some paper from the store and write what I tell you,\nI will most definitely give you my prized sword.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "No Problem!";
	Dialogue();

	Character.Name = " ";
	animationText = "The Old Man agreed to let you have his sword! You'd better find some paper.";
	Dialogue();

	Cutscene = false;

}

void Cutscene_OldMan2()
{
	Cutscene = true;

	Character.Name = "Old Man";
	animationText = "You brought me the paper! Thank you very much. Now all\nthat's left is to begin... 'Dear Joseph, after all these years...'";
	Dialogue();
	animationText = ". . . . .";
	slowText = true;
	Dialogue();
	animationText = "And that should just about do it. Thank you again. \nYou may go upstairs and take the sword off its rack.\nDo be carfeul with it, it is quite deadly. You may also take\nfrom the chest that is upstairs as well. Inside are a few\nthings that should no doubt be of help to you on your journey.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "Thank you! I will do my best to be careful with it.";
	Dialogue();

	Character.Name = " ";
	animationText = "You helped the Old Man! Now you can claim the sword.";
	Dialogue();

	Room.SwordRoom = true;
	Cutscene = false;
}

void Cutscene_GrandmaHelps()
{
	Cutscene = true;
	progressStatus = 2;

	Character.Name = "Grandma";
	animationText = Player.Name + "! Why is it that you look so distressed?";
	Dialogue();
	Pause();	//glitch prevention, needs to be there

	Character.Name = Player.Name;
	animationText = "Grandma I'm so glad your safe! Rose has disappeared!";
	Dialogue();

	Character.Name = "Grandma";
	animationText = "Do you have any idea where she went?";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "No, but I think she tried to talk to me in a dream..";
	Dialogue();

	Character.Name = "Grandma";
	animationText = "I think I may know of a way you can find her. Talk to the elf people\nof Aiden Woods. Their elder knows a great deal about dream communication. \nBut you must be careful, the woods are dangerous!";
	Dialogue();

	Character.Name = " ";
	animationText = "Your grandmother takes a piece of paper and draws a small map.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "What should I bring with me?";
	Dialogue();

	Character.Name = "Grandma";
	animationText = "Before you head to the woods you first must get yourself a sword,\nshield, and some armor. This should protect you in the dark woods. When you \nare finished come back here and I will give you the map.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "I will do my best!";
	Dialogue();

	Character.Speaker = Character.Narrator;
	TextColor();

	Cutscene = false;

}

void Cutscene_GrandmasList()
{
	Cutscene = true;
	progressStatus = 3;

	Character.Name = "Grandma";
	animationText = "You have returned with the items I asked you for, very\ngood.Now it is time to go to the forest and find the elder. \nBe careful and good luck!";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "I will. Stay safe while I'm gone! I'll find her I promise.";
	Dialogue();

	Character.Name = " ";
	animationText = "Grandma gave you the map you needed! Now you can go to the forest!";
	Dialogue();

	Cutscene = false;

}

void Cutscene_Elder1()
{
	Cutscene = true;
	progressStatus = 5;

	Character.Name = "Elder";
	animationText = "Hello there, we haven't had a visitor from outside the village\nin a long time. What can I do for you?";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "My sister has been taken and she talked to me in a dream. \nI was wondering if you could help me communicate with her.";
	Dialogue();

	Character.Name = "Elder";
	animationText = "If she was able to contact you in a dream that means we can \ndo the same. However, dream communication requires certain items to work.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "What sort of items?";
	Dialogue();

	Character.Name = "Elder";
	animationText = "There is a glowing orb you can find in the dungeon deep in the \nwoods. It is protected by some sort of monster. \nThat orb contains the power you seek.";

	Character.Name = Player.Name;
	animationText = "Then I will go in search of this dungeon. Thank you for your help.";
	Dialogue();

	Character.Name = " ";
	animationText = "You have taken on the task of entering the dungeon that\nresides in the deep woods and defeating its master. You should probably prepare first.";
	Dialogue();

	Cutscene = false;
	cutscene.Elder = true;
	Room.Dungeon = true;

}

void Cutscene_DungeonBossApproach()
{
	Cutscene = true;

	animationText = "You place the glowing leaf object in the door, and the door\nbegins glowing to match the leaf. You take a deep breath\nand push open the massive door.";
	Dialogue();
	animationText = "Inside is complete darkness. You walk forward towards the middle\nof the room.";
	Dialogue();

	//ORB ANIMATION
	ClearScreen();
	loopNumber = 10;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "                                   ______" << endl;
	cout << "                                  /******\\ " << endl;
	cout << "                                 |********| " << endl;
	cout << "                                 |********| " << endl;
	cout << "                                  \\******/ " << endl;
	cout << "                                   ------ \n" << endl;
	cout << "\n\n\n";
	cout << "                                      @" << endl;
	cout << "\n\n\n\n\n";
	cout << "--------------------------------------------------------------------------------";
	Sleep(500);
	while (loopNumber > 0)
	{
		ClearScreen();
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		switch (loopNumber)
		{
			case 1:
				cout << "\n";
				break;
			case 2:
				cout << "\n\n";
				break;
			case 3:
				cout << "\n\n\n";
				break;
			case 4:
				cout << "\n\n\n\n";
				break;
			case 5:
				cout << "\n\n\n\n\n";
				break;
			case 6:
				cout << "\n\n\n\n\n\n";
				break;
			case 7:
				cout << "\n\n\n\n\n\n\n";
				break;
			case 8:
				cout << "\n\n\n\n\n\n\n\n";
				break;
			case 9:
				cout << "\n\n\n\n\n\n\n\n\n";
				break;
			case 10:
				cout << "\n\n\n\n\n\n\n\n\n\n";
				break;
		}

		cout << "                                   ______" << endl;
		cout << "                                  /******\\ " << endl;
		cout << "                                 |********| " << endl;
		cout << "                                 |********| " << endl;
		cout << "                                  \\******/ " << endl;
		cout << "                                   ------ \n" << endl;
		switch (loopNumber)
		{
			case 10:
				cout << "\n\n\n";
				break;
			case 9:
				cout << "\n\n\n\n";
				break;
			case 8:
				cout << "\n\n\n\n\n";
				break;
			case 7:
				cout << "\n\n\n\n\n\n";
				break;
			case 6:
				cout << "\n\n\n\n\n\n\n\n";
				break;
			case 5:
				cout << "\n\n\n\n\n\n\n\n\n";
				break;
			case 4:
				cout << "\n\n\n\n\n\n\n\n\n\n";
				break;
			case 3:
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				break;
			case 2:
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
				break;
			case 1:
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
				break;
		}

		cout << "                                      @" << endl;
		cout << "\n\n\n\n\n";
		cout << "--------------------------------------------------------------------------------";
		Sleep(140);
		loopNumber -= 1;
	}

	//END ORB ANIMATION

	animationText = "In the middle of the room you see a glowing orb. As you get closer, it bursts\ninto white smoke, that swirls around you.";
	Dialogue();
	animationText = "Its beautiful, but something feels wrong about it.";
	Dialogue();
	animationText = "The smoke gathers above you, and forms into a ghost taking the form\nof an owl. Its eyes are glassy and dark, and it charges you!\nPrepare for a fight!!";
	Dialogue();

	Cutscene = false;
	enemy = Enemy.Boss;
	BossBattle();

}

void Cutscene_DungeonBossDefeat()
{
	Cutscene = true;
	void miniScene_DemoScreen();

	animationText = "The Wyvern falls to the ground and dissolves into\ndust, which finally settles on the ground, unmoving.";
	Dialogue();
	animationText = "The room begins to glow, and in a wave the darkness leaves\nthe room, disappearing from the rest of the dungeon\nand the forest around it.";
	Dialogue();
	animationText = "The glowing orb lays in front of you, now contained in\n a gold and pearl case. Your sister awaits your call.";
	Dialogue();

	miniScene_DemoScreen();

	Cutscene = false;
}

//mini cutscenes

void miniScene_Hilda()
{
	Character.Name = "Hilda";
	animationText = "I once went to the shop and wanted to buy some paper but they didn't \n have any paper so I went back to my house to get a knife because I decided \n I'd cut tree bark and turn it into paper myself but when I grabbed my knife \n I didn't really ";
	Dialogue();
	Pause();	//glitch prevention
	animationText = "work and I was so disappointed that I decided I'd sit there \n and cry for a bit but then this random guy came up to me and was like 'do \n you need some help ma'm?' and not wanting to be rude I said that I did in\n fact need help and then he gave me some of his paper when I explained my \n story to him and then I used that paper to write a letter to my niece, you \n know how family is dear you have to write to them, and anyway";
	fastText = true;
	Dialogue();

	Character.Name = " ";
	animationText = "z z z Z Z Z";
	slowText = true;
	Dialogue();

	Character.Name = "Hilda";
	animationText = "and thats my story.";
	Dialogue();

	Character.Name = " ";
	animationText = "You must have fallen asleep, but you woke up in time.";
	Dialogue();

	Character.Name = "Hilda";
	animationText = "Thank you for listening to my story, here is some money for you dear.";
	Dialogue();

	Character.Name = " ";
	animationText = "You got 10 coins! Worth it!  *Coins + 10*";
	Dialogue();
	Item.Coins += 10;
	Town.Hilda = true;

}

void miniScene_Loni()
{
	progressStatus = 4;
	Room.Village = true;

	Character.Name = " ";
	animationText = "As you approach the gate you see an elf creature. He looks at you strangely.";
	Dialogue();

	Character.Name = "Loni";
	animationText = "Who are you? We haven't seen any humans in years.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "My name is " + Player.Name + ". I would like to speak with the Elder.";
	Dialogue();

	Character.Name = "Loni";
	animationText = "Well.....you seem harmless, but it has been dangerous around\nhere lately. I have my eye on you. Go on in.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "Thank you!";
	Dialogue();

	Character.Name = " ";
	animationText = "Loni steps away from the gate. The elf village is beautiful.\nIt consists of a path of forest with houses built into the trees. Some are in\nthe trunks, while an entire rope bride leads to the upper level of treetop\nbuildings.";
	Dialogue();

}

void miniScene_DungeonEnter()
{
	progressStatus = 6;

	Character.Name = " ";
	animationText = "You take a long flight of marble stairs down as you enter\nthe  Each minute that passes by it gets darker, until the\nonly light comes from the lit sconces on the walls beside you.";
	Dialogue();
	animationText = "You feel uneasy, but keep going until you see a room far in front of you.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "This is it, no turning back now.";
	Dialogue();

	Character.Name = " ";
	animationText = "You continue on, the darkness swallowing up the entrance now long\nbehind you.";
	Dialogue();

	miniscene.DungeonEnter = true;
}

void miniScene_NymphAppears()
{
	Character.Name = " ";
	animationText = "As you enter the maze, a wave of terror passes over you. You sense\nsome sort of monster lurking in the darkness.";
	Dialogue();
	animationText = "You turn around, and see a nymph approaching from the shadows. Her\neyes are covered by leaves, and seems to be blind. She snarls.";
	Dialogue();
	Character.Name = "Twisted Nymph";
	animationText = "*snarls*";
	Dialogue();
	Character.Name = " ";
	animationText = "It seems she can only tell your location by sound. You'd better find \na way to escape her";
	Dialogue();

	NymphAttack = true;
	miniscene.NymphAppears = true;
}

void miniScene_Dam()
{
	Character.Speaker = Character.Narrator;
	TextColor();
	animationText = "You use the crank in the machine to try to open the water way, but\nturning it makes a squeaking sound. You see the nymph approach...";
	Dialogue();
	Pause();
	animationText = "Luckily you finish opening it in time, and water bursts out of the\nopening.";
	Dialogue();
	animationText = "The sound is deafening, and you see the nymph that was close behind\nyou start screaming and holding her ears.";
	Dialogue();
	animationText = "She drops an object of some sort, and runs away, accidentally tripping\nand falling into the stream below, which carries her away.";
	Dialogue();
	animationText = "You grab the object on the ground, and hold it up. It starts glowing.\nIt is shaped like a leaf.";
	Dialogue();
	NymphAttack = false;
	miniscene.Dam = true;
	Room.boss = true;
}

void miniScene_Chasm()
{
	Character.Name = " ";
	animationText = "You strap on the wings, and they come to life. They start to flap\nas you move, and your able to lift into the air.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "Woooah!!";
	Dialogue();

	Character.Name = " ";
	animationText = "It take a few minutes of getting used to, but you figure it\nout. You fly across the chasm!";
	Dialogue();

	miniscene.Chasm = true;

}

void miniScene_Kuhar()
{
	Character.Name = " ";
	animationText = "You approach a sad looking elf in his kitchen. He looks as though he is\ntrying to cook. He turns around.";
	Dialogue();

	Character.Name = "Kuhar";
	animationText = "Hello...who are you?";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "My name's " + Player.Name + ". What are you doing?";
	Dialogue();

	Character.Name = "Kuhar";
	animationText = "I'm trying to make a recipe called 'Elf Cake'. It's an\nold recipe and I can't remember everything that goes into it.\nI know its in my cookbook, but I lost that a while ago.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "If I see a cookbook I'll bring it back to you!";
	Dialogue();

	Character.Name = "Kuhar";
	animationText = "Oh thank you! If you do that surely I'll be able to finally\nmake the cake, and even more recipes! It's my dream to become a cook.";
	Dialogue();

}

void miniScene_Kuhar02()
{
	void Dialogue();

	Character.Name = " ";
	animationText = "You approach Kuhar and hand him the cookbook. He looks\necstatic.";
	Dialogue();

	Character.Name = "Kuhar";
	animationText = "Kuhar: Thank you thank you thank you thank you\nthank you!!!! Now I can finally pursue my dream!";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "Your very welcome!";
	Dialogue();

	Character.Name = " ";
	animationText = "Kuhar starts cooking up a storm. He waves for you to sit down.\nYou sit at the table and wait for him to finish.";
	Dialogue();

	Character.Name = "Kuhar";
	animationText = "I made you a Elf Cake! The recipe came out just\nas I hoped it would!";
	Dialogue();

	Character.Name = " ";
	animationText = "Kuhar hands you the Elf Cake. You eat it, it's delicious! You feel\nkind of strange though...";
	Dialogue();

	Character.Name = "Kuhar";
	animationText = "It gives the person who eats it more Attack Power!";
	Dialogue();

	Character.Name = " ";
	animationText = "Your damage increased by 2!";
	Dialogue();

	Player.Damage += 2;
	Kuhar = true;
}

void miniScene_Aida()
{
	Character.Name = "Aida";
	animationText = "...";
	Dialogue();
	animationText = "Can I help you?";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "What's wrong?";
	Dialogue();

	Character.Name = "Aida";
	animationText = "I'm sorry, I don't mean to be rude. You see, I lost my hairpin\nin the woods and I haven't been able to find it. It wouldn't matter so much,\nbut it was my grandmothers, and I haven't been well since I lost it.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "I could look for it for you! Do you have any idea where you lost it?";
	Dialogue();

	Character.Name = "Aida";
	animationText = "Thank you! That is very sweet. I think it's somewhere in the clearing,\nI used to walk there a lot before the monsters were around here.";
	Dialogue();

	Character.Name = Player.Name;
	animationText = "I'll see if I can find it, hopefully its somewhere where you said.";
	Dialogue();

	Character.Name = "Aida";
	animationText = "Be careful of monsters! And thank you again. I hope you can find it.";
	Dialogue();

}

void miniScene_FirstEnemy()
{
	animationText = "As you walk through the forest you hear a rustling in the nearby bushes.";
	Dialogue();
	animationText = "Suddenly a giant angry flower appears from the ground! You get out your\nweapons and prepare to fight!";
	Dialogue();

	enemy = Enemy.AngryFlower;
	Battle();

	miniscene.FirstEnemy = true;

}

void miniScene_Tutorial()
{
	dirUp = "     Bed";
	dirDown = " ";
	dirLeft = "     Desk";
	dirRight = "     Hallway";
	TopScreen();

	cutscene.tutorial = true;
	Character.Name = " ";
	animationText = "Welcome to the demo! Before you start playing, here is how the game works.";
	Dialogue();

	animationText = "The Descriptions around your character are what is in front, behind, to the \nleft, and right of you. You can move to or interact with what is described there using WASD.";
	Dialogue();

	animationText = "In the top right corner, you can see the minimap. It's not very detailed,\nbut it will show you the general locations around you.";
	Dialogue();

	animationText = "This game is run through the command line, so through each step your input\nwill almost always be required to continue the game. If you are stuck, try pressing enter.\nThis will take you off of menu screens, continue dialogue, etc.";
	Dialogue();

	animationText = "You can review the rest of the controls by pressing C. There are a few menus\nand interactions you can complete using the keys on that list.";
	Dialogue();

	animationText = "And finally, the battle system relies on timing games. These games run based off the speed\nof your computer, which is ever changing, so they might randomly speed up or slow down. Sorry about\nthat... It is recommended you begin by selecting a speed corresponding in a basic way with\nhow fast your computer typically is, to hopefully account somewhat for that challenge.";
	Dialogue();

	animationText = "I hope you enjoy the demo! If you have questions there is a notepad txt file named\nREADBEFOREPLAYING in the files, or you can text me (1-815-383-6695). Enjoy the game!";
	Dialogue();

	cutscene.tutorial = false;
}

void miniScene_DemoScreen()
{
	void TitleScreen();

	ClearScreen();
	animationText = "_____----------________--------_________---------________---------_______-------";
	scrollText();
	cout << "\n\n\n\n\n\n\n                   ";
	animationText = "This is where the adventure ends for now...";
	scrollText();
	cout << "            ";
	animationText = "If you have any ideas on what would make the game better,";
	scrollText();
	cout << "            ";
	animationText = "I would love to know! Thanks so much for playing my demo!";
	scrollText();
	Pause();

	TitleScreen();

}