//This file holds all the information to run the cutscenes in the game. They take from text functions to create
//a fancy way of getting information off to the user. Usually areas or rooms will pull from this file to run
//cutscenes when a user does a specific thing or goes to a specific area.

void OpeningtheGame()
{
    void FastText();
    void Pause();
    void ClearScreen();
    void TitleScreen();

    cout << "\n\n\n\n\n\n\n\n\n\n\n" << endl;
    cout << "--------------------------------------------------------------------------------\n\n\n\n\n\n\n\n" << endl;
    animationText = "                         Working Title Games";
    FastText(); Pause();
    ClearScreen();
    TitleScreen();
}
void Cutscene_Prolouge()
{
    void miniScene_Tutorial();
    Cutscene = true;
    sStatus = 1;

    Character.Name = "???";
    animationText = Player.Name + "!";
    Dialogue();
    animationText = Player.Name + " wake up! \n";
    Dialogue();
    animationText ="You must come find me, I'm trapped in some sort of dark castle and I \nneed help.";
    Dialogue();
    animationText =" You must wake up, and hurry! Go to Grandma. She can help you. Wake up\nand go to her!";
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




/*

    Character.Name = " ";
    animationText = "You sit in the garden outside your house, gazing at the stars.\nBeside you your sister Rose makes a crown out of lilies.";
    Dialogue();

    Character.Name = "Rose";
    animationText = Player.Name + "?"; Dialogue();

    Character.Name = Player.Name;
    animationText = "Yes Rose?"; Dialogue();

    Character.Name = "Rose";
    animationText = "Do you think we can go on an adventure?"; Dialogue();

    Character.Name = Player.Name;
    animationText = "How do you mean?"; Dialogue();

    Character.Name = "Rose";
    animationText = "I've never seen anything outside of the town we live in, I've\nonly heard of the world outside of it from travelers. I want to\nsee whats out there.";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "It's dangerous out there, but we could--"; Dialogue();

    Character.Name = " ";
    animationText = "You hear a booming sound, and both of you look ahead, startled.\nOutside the gate , seemingly out of thin air, appears a dark cloaked warrior\ncarrying a spear. You jump up and stand in front of Rose.";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "Who are you?!"; Dialogue();

    Character.Name = " ";
    animationText = "The hooded figure chuckles, but doesn't answer the question."; Dialogue();

    Character.Name = "???";
    animationText = "It doesn't matter who I am, only who you are. I'm looking for\nsomeone who holds a necklace very much like your own.";
    Dialogue();

    Character.Name = " ";
    animationText = "He points his spear at Rose, specifically at the golden necklace\nthat hangs around her neck. She steps back.";
    Dialogue();

    Character.Name = "???";
    animationText = "You must come with me."; Dialogue();

    Character.Name = Player.Name;
    animationText = "Rose Run!"; Dialogue();

    Character.Name = " ";
    animationText = "You push her away from you and charge towards the warrior, who knocks\nyou aside easily. You fall to ground, your vision turning dark around the edges.";
    Dialogue();
    animationText = "The warrior runs after Rose, and you hear her screaming as everything fades\nto black...";
    Dialogue();
    ClearScreen();
    cout << "\n\n\n\n\n\n\n\n                                   "; animationText = "z z Z Z"; SlowText();

    Character.Name = "???";
    animationText = Player.Name + "?!"; Dialogue();
    animationText = Player.Name + " wake up!"; Dialogue();
    animationText = "You must tell me what happened!"; Dialogue();

    Character.Name = " ";
    animationText = "You open your eyes to find yourself in bed. For a second you think that\neverything was a dream, but a pounding headache tells you otherwise.";
    Dialogue();
    animationText = "Your grandmother stands above you, a concerned look on her face."; Dialogue();

    Character.Name = "Grandma";
    animationText = "I came over to say hello to you and your sister, only to find you on the\nground and her nowhere to be seen. What ever happened?!";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "We were sitting outside when a dark cloaked warrior appeared. He took Rose with him! I need to find her.";

    Character.Name = " ";
    animationText = "Grandma looks shocked, but then a serious look crosses her face."; Dialogue();

    Character.Name = "Grandma";
    animationText = "I should have known this would happen sooner or later."; Dialogue();

    Character.Name = Player.Name;
    animationText = "What?!"; Dialogue();

    Character.Name = "Grandma";
    animationText = "We must talk about it, but not yet. You are fine, but once you've\nrested you must come to me in the town, and I will tell you\neverything. For now, I am going to prepare.";
    Dialogue();

    Character.Name = " ";
    animationText = "Grandma leaves, and while you try to get up, your head becomes foggy\nagain, and you fall back asleep.";
    Dialogue();
    animationText = "When you wake up again, it is morning. You need to talk to your\nGrandmother.";
    Dialogue();


*/
    dirUp = "Bed";
    dirDown = " ";
    dirLeft = "Desk";
    dirRight = "Hallway";
    TopScreen();
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
    animationText = "Well, you see I used to be quite a swordsman in my day. I took down\nmany a beast in the forest near us with my wooden sword. It has been a long \ntime since I used that sword, however.\n";
    Dialogue();
    animationText = "Since I have no use for it now I do not see a problem with lending it \nto you. However, first I must ask a favor from you. There is a relative of mine \nin the City of Jewels. I would very much like to send him a letter. I've never \nreally been able to write myself but..";
    Dialogue();


    Character.Name = Player.Name;
    animationText = "I could help you with that certainly!";
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
    animationText = "You brought me the paper! Thank you very much. Now all\nI ask is that you write what I ask you to. 'Dear Joseph, after\nall these years I...'";
    Dialogue();
    animationText = ". . . . .";
    Slowtext = true;
    Dialogue();
    animationText = "And that should just about do it. Thank you again my\ndear. You may go upstairs and take the sword off its rack.\nDo be carfeul with it, it is quite deadly. You may also take\nfrom the chest that is upstairs as well. Inside are a few\nthings that should no doubt be of help to you on your journey.";
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
    sStatus = 2;


    Character.Name = "Grandma";
    animationText = Player.Name + "! Why is it that you look so distressed?";
    Dialogue();                     Pause();//glitch prevention, needs to be there


    Character.Name = Player.Name;
    animationText = "Grandma I'm so glad your safe! Rose has disappeared!";
    Dialogue();


    Character.Name = " ";
    animationText = "Grandma looks shocked, and suddenly gives you a serious look.";
    Dialogue();


    Character.Name = "Grandma";
    animationText = "Do you have any idea where she went?";
    Dialogue();


    Character.Name = Player.Name;
    animationText = "No, but in a dream I heard her tell me she was trapped\nin some sort of dark castle.";
    Dialogue();


    Character.Name = "Grandma";
    animationText = "This is very serious. You must go looking for her!";
    Dialogue();


    Character.Name = Player.Name;
    animationText = "I know, and I was hoping you could help.";
    Dialogue();


    Character.Name = "Grandma";
    animationText = "I think I may know of a way you can find her. Talk to the elf people\nof Aiden Woods. They know a great deal about the land and might know of a \ndark castle. But you must be careful, the woods are dangerous!";
    Dialogue();


    Character.Name = " ";
    animationText = "Your grandmother takes a piece of paper and draws a small map.";
    Dialogue();


    Character.Name = Player.Name;
    animationText = "Is that where the elf people live?";
    Dialogue();


    Character.Name = "Grandma";
    animationText = "Yes. The call themselves the Fira. They will most likely give you the\ninformation you seek. I used to visit them as a girl but as the woods \nbecame more dangerous I stopped going there.";
    Dialogue();


    Character.Name = Player.Name;
    animationText = "What should I bring with me?";
    Dialogue();


    Character.Name = "Grandma";
    animationText = "Before you head to the woods you first must get yourself a sword,\nshield, and armor. I'm sure you will be able to find those things within the\ntown and your house. When you are finished come back here and I will give\nyou the map.";
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
    sStatus = 3;


    Character.Name = "Grandma";
    animationText = "You have returned with the items I asked you for, very\ngood.Now it is time to go to the forest and meet the Fira. Be careful\nand good luck!";
    Dialogue();


    Character.Name = Player.Name;
    animationText = "I will. Stay safe while I'm gone! I'll find her I promise.";
    Dialogue();


    Character.Name = " ";
    animationText = "Grandma gave you the map you needed! Now you can go to the forest!";
    Dialogue();


    TravelStatus = 2;
    Cutscene = false;

}

void Cutscene_Elder1()
{

    Cutscene = true;
    sStatus = 5;


    Character.Name = "Elder";
    animationText = "Hello there, we haven't had a visitor from outside the village\nin a long time. What can I do for you?";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "Hello. I lost my sister, and I think she is being held\nsomewhere. I was wondering if you'd ever heard of a dark castle near here.";
    Dialogue();

    Character.Name = "Elder";
    animationText = "I have heard of what you speak, there are tales of a wicked\npeople called the Hiin, but I don't know the location of their land,\njust that it is far away. I know their king lives in a dark castle.";
    Dialogue();
    animationText = "I believe that the land is north of here, as the people we\nheard of the Hiin from were all from the north. I suggest you take the\npath to the mountains and speak to the people who live there.\nThey might know.\n";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "Those people sound scary, I hope she is alright. How do I take\nthe path?";
    Dialogue();

    Character.Name = "Elder";
    animationText = "There is a gate that leads to the path deep into the woods,\nhowever, unfortunately those woods have become dark and filled with monsters.\nI believe they took the key to the gate a while ago, and no one has been\naround there since.";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "I see, I heard about the monsters that took over the Item.\nMaybe I could help you get rid of them?";
    Dialogue();

    Character.Name = "Elder";
    animationText = "That is very brave of you. If you do wish to rid this forest\nof the monsters that plague us, you would have to defeat their leader.\nI heard a great beast lies in the old dungeon in those woods, who controls\nall the monsters.";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "I'll go there and defeat him for you. Then you can live in peace\nagain and I can continue looking for my sister.";
    Dialogue();

    Character.Name = "Elder";
    animationText = "I cannot thank you enough, but please be careful. There have been\nadventurers from our midst that have tried and failed to take\non this task. I wish you good luck.";
    Dialogue();

    Character.Name = Player.Name;
    animationText = "I will, and thank you for all your help!";
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
    ClearScreen(); LoopNumber = 10;
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
    while(LoopNumber > 0)
    {
        ClearScreen();
        cout << "\n\n\n\n\n\n\n\n\n\n\n";
        switch(LoopNumber)
        {
            case 1: cout << "\n"; break; case 2: cout << "\n\n"; break; case 3: cout << "\n\n\n"; break;
            case 4: cout << "\n\n\n\n"; break; case 5: cout << "\n\n\n\n\n"; break; case 6: cout << "\n\n\n\n\n\n"; break;
            case 7: cout << "\n\n\n\n\n\n\n"; break; case 8: cout << "\n\n\n\n\n\n\n\n"; break;
            case 9: cout << "\n\n\n\n\n\n\n\n\n"; break; case 10: cout << "\n\n\n\n\n\n\n\n\n\n"; break;
        }
        cout << "                                   ______" << endl;
        cout << "                                  /******\\ " << endl;
        cout << "                                 |********| " << endl;
        cout << "                                 |********| " << endl;
        cout << "                                  \\******/ " << endl;
        cout << "                                   ------ \n" << endl;
        switch(LoopNumber)
        {
            case 10: cout << "\n\n\n"; break; case 9: cout << "\n\n\n\n"; break; case 8: cout << "\n\n\n\n\n"; break;
            case 7: cout << "\n\n\n\n\n\n"; break; case 6: cout << "\n\n\n\n\n\n\n\n"; break; case 5: cout << "\n\n\n\n\n\n\n\n\n"; break;
            case 4: cout << "\n\n\n\n\n\n\n\n\n\n"; break; case 3: cout << "\n\n\n\n\n\n\n\n\n\n\n"; break;
            case 2: cout << "\n\n\n\n\n\n\n\n\n\n\n\n"; break; case 1: cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n"; break;
        }
        cout << "                                      @" << endl;
        cout << "\n\n\n\n\n";
        cout << "--------------------------------------------------------------------------------";
        Sleep(140);
        LoopNumber -= 1;
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
    animationText = "You feel a sense of peace, knowing that now the people of the\nforest are safe. It is time to continue the adventure,\nand find out what happened to your sister.";
    Dialogue();

    miniScene_DemoScreen();

    Cutscene = false;
}


//mini cutscenes

void miniScene_Hilda()
{


    Character.Name = "Hilda";
    animationText = "I once went to the shop and wanted to buy some paper but they didn't \n have any paper so I went back to my house to get a knife because I decided \n I'd cut tree bark and turn it into paper myself but when I grabbed my knife \n I didn't really ";
    Dialogue();         Pause();//glitch prevention
    animationText = "work and I was so disappointed that I decided I'd sit there \n and cry for a bit but then this random guy came up to me and was like 'do \n you need some help ma'm?' and not wanting to be rude I said that I did in\n fact need help and then he gave me some of his paper when I explained my \n story to him and then I used that paper to write a letter to my niece, you \n know how family is dear you have to write to them, and anyway";
    Superfasttext = true;
    Dialogue();

    Character.Name = " ";
    animationText = "z z z Z Z Z";
    Slowtext = true;
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
    sStatus = 4;
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




    //add in a transition (black screen) with a gate sound effect.
}

void miniScene_DungeonEnter()
{
    sStatus = 6;

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
    animationText = "You turn around, and see a nymph behind you! She has leaves over her\neyes, and seems to be blind. She snarls. You'd better run!";
    Dialogue();


    NymphAttack = true;
    miniscene.NymphAppears = true;
}

void miniScene_Dam()
{
    Character.Speaker = Character.Narrator;
    TextColor();
    animationText = "You use the crank in the machine to try to open the water way, but\nturning it makes a squeaking sound. You see the nymph approach...";
    Dialogue(); Pause();
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
    Room.Boss = true;
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
    animationText =  "My name's " + Player.Name + ". What are you doing?";
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
    FastText();
    cout << "\n\n\n\n\n\n\n                   ";
    animationText = "This is where the adventure ends for now...";
    FastText();
    cout << "            ";
    animationText = "If you have any ideas on what would make the game better,";
    FastText();
    cout << "            ";
    animationText = "I would love to know! Thanks so much for playing my demo!";
    FastText();
    Pause();

    TitleScreen();


}
