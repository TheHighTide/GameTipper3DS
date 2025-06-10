#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "char_mgr.h"

char* terrariaTips[31] = { // Tips for Terraria 3DS
    "Build a sky bridge high above the ground to make\ntraveling across your world much faster. This is\nespecially useful for quick traversal during\nevents or when exploring new areas.",
    "Place Campfires strategically throughout your baseand key exploration points. The health\nregeneration buffs they provide can make a big\ndifference in tough battles.",
    "Utilize Teleporters to create fast travel networksbetween different parts of your base or important\nlocations. This can save a lot of time when you\nneed to move around quickly.",
    "\x1b[1mDon't overlook fishing!\x1b[0m Many powerful weapons,\naccessories, and potions can be obtained through\nfishing quests and by catching rare fish in\ndifferent biomes.",
    "To save space and create a compact base, consider\nbuilding NPC houses underground. You can create a\ncentralized hub with easy access to all NPCs\nwithout taking up valuable surface area.",
    "Set up Dart Traps combined with pressure plates ortimers as a defensive mechanism around your base.\nThey can help fend off enemies during events or\ngoblin/pirate invasions.",
    "Avoid the Jungle early game as it can prove to be quite the challenge for early game players. Try exploring it when you obtain a set of \x1b[1mcactus armour and tools\x1b[0m.",
    "When ready, start construction on a Hellevator (a\nhole that reaches from the surface down to the\npits of hell). It can make traveling to hell much\neasier and quicker.",
    "Make sure you remember to build houses in your\ntown or NPC's won't want to move in!",
    "When building homes for NPC's, remember to includewalls, at least one door to the outside, a light\nsource, a table, and a chair. Without all those\nfeatures, NPC's won't be able to move in.",
    "It is a good practice to create separate bossfightarenas for fighting the 3 different hardmode\nmechanical bosses as each have different movement\npatterns.",
    "Creating appartments in your town will help have  space by allowing all your townfolk to live in thesame building.",
    "\x1b[1mEvery\x1b[0m boss can be summoned with an item...",
    "Be careful when killing a \x1b[1mGoblin Scout\x1b[0m because it raises the chance of a Goblin Raid attack on your village!",
    "Don't take the anglers bad attitude and           personality personally, he's just rude...",
    "Digging a 3 wide trench around your town is       recommended to prevent your crimson or corruption from spreading to your town.",
    "Explore the Underground Desert early on to gather sturdy fossils which can be used to craft some decent early-game weapons and armour.",
    "Keep an eye out for Life Crystals underground to  boost your maximum health, smashing them with a   hammer or pickaxe will permanently increase your  HP.",
    "Use rope coils to quickly descend caves or climb  back up without needing to build stairs or platforms everywhere.",
    "Carry a stack of glowsticks or flares when        exploring dark areas, they're cheap to craft and  help you spot enemies and treasures in low-light  conditions.",
    "Save your money early on and invest in a Money    Trough from the Merchant, it acts like a portable piggy bank for storing coins safely.",
    "Try combining accessories at the Tinkerer's       Workshop once you unlock it, some combos like the Cloud in a Bottle and Shiny Red Balloon can       really boost your mobility.",
    "Harvest fallen stars at night to craft Mana       Crystals, they'll increase your maximum mana so   you can cast more spells.",
    "Set up a small mushroom biome by planting         mushroom grass seeds underground; it's a good way to farm truffle worms for late-game fishing.",
    "Don't sleep on the Extractinator, feed it silt or slush to get ores, gems, and coins you might not  find otherwise.",
    "Use the Smart Cursor feature on the 3DS to speed  up building and mining; it automatically targets  nearby blocks for faster work.",
    "If you're struggling with a boss, try kiting them across a long flat area with platforms, it gives  you room to dodge and attack safely.",
    "Keep a spare set of basic tools and weapons in a  chest at your base in case you die far away and   need to gear up quick.",
    "Plant herb farms with clay pots near your base,   harvesting them at the right time can keep you    stocked with potion ingredients.",
    "Watch out for trapped chests in dungeons or       temples, use a wire cutter or just break them froma distance to avoid nasty surprises.",
    "Smash Demon Altars with the Pwnhammer after       beating the Wall of Flesh, it spawns new ores in  your world but also increases enemy spawns."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* minecraftTips[21] = { // Tips for Minecraft 3DS Edition
    "During the first night, you should consider\ndigging a hole and camping out in it for the nightfor the best chances of survival.",
    "If you find the enemies in Minecraft to be\ntoo challenging, consider turning your world to\nthe \x1b[1mPeaceful difficulty\x1b[0m to disable hunger and\nthose annoying monsters.",
    "Are you a big builder but not into the grind of\nsurvival mode? Try creating a world in \x1b[1mcreative\x1b[0m\n\x1b[1mmode\x1b[0m to grant yourself access to any block in\nMinecraft.",
    "When going to the Nether for the first time it is\nrecommended you have full \x1b[1miron armour\x1b[0m or full\n\x1b[1mdiamond armour\x1b[0m (if you're feeling spicy).",
    "It is a good idea to create a \x1b[1mmob grinder\x1b[0m ASAP in your world as it can help you get villagers later on.",
    "Making a villager breeder is a requirement in the older versions of Minecraft like the 3DS edition  as there is no other way to get rare enchantments.",
    "Is is recommended that you setup a \"Villager     Hotel\" to allow villager breeding and trading.",
    "Starting a mine that spans in all directions is a great way to get \x1b[1mIron\x1b[0m, \x1b[33;1mGold\x1b[0m, and \x1b[36;1mDiamonds\x1b[0m quickly.",
    "\x1b[31;1;4mDON'T\x1b[0m hit an Iron Golem as its a \x1b[31ms\x1b[33mu\x1b[31mr\x1b[33me\x1b[31m-\x1b[33mf\x1b[31mi\x1b[33mr\x1b[31me\x1b[39m way to get killed in 2 seconds...",
    "You can create a Crafting Table with 4 planks of  any type!",
    "Tired of fighting enderman for enderpearls? Try tofind a \x1b[1mcleric Villager\x1b[0m as they could trade them.",
    "You can customize your look by dying leather      armour to your prefered colour.",
    "Find unique structures around your world that     could contain decent loot like \x1b[36mDiamonds\x1b[0m.",
    "Be careful while exploring \x1b[32mJungle Temples\x1b[0m, they'refilled to the brim with \x1b[31mtraps\x1b[0m.",
    "Always carry a \x1b[34mwater bucket\x1b[0m when exploring caves  as it could save you from a scary \x1b[31mlava\x1b[0m encounter.",
    "Use 3 pieces of wool and 3 wooden planks to craft a cozy bed.",
    "Sleep in any bed to skip through the night and    avoid hostile mobs.",
    "While caving, place \x1b[33mtorches\x1b[0m on the right wall so  you can find your way back to the surface at the  end of your mining trip.",
    "Smelt ores in a furnace using coal or wood to     create ingots.",
    "You can tame wild wolves with some bones to       befriend them and have them fight for you.",
    "You can dye a wolf's collar by pressing \x1b[1mL\x1b[0m while   holding any colour dye."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* superMario3dLandTips[4] = { // Tips for Super Mario 3D Land
    "If any level gets too difficult, all you have to\ndo is die a couple times intentionally and you\nwill be given the \x1b[1mwhite tanooki tale\x1b[0m. This will\nallow you to plow through everything. Make sure\nyou have enough lives though...",
    "If there's a large gap that you neet to get\nacross, try holding down \x1b[1mR\x1b[0m and pressing \x1b[1mB\x1b[0m while\nrunning in any direction to perform a \x1b[1mlong jump\x1b[0m!",
    "Use Marios shadow to predict where he will land\nso you can get those score streaks easier.",
    "Holding down R and pressing \x1b[1mY\x1b[0m or \x1b[1mX\x1b[0m will cause     Mario to start rolling through brick and crates."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* marioMakerTips[8] = { // Tips for Super Mario Maker 3DS
    "Using Pretendo, you can go to the course world to play community made courses!",
    "When block combos are used correctly, you can makesome pretty advanced contraptions.",
    "Give your levels some spice by adding \x1b[1mSFX\x1b[0m (\x1b[1mSound\nEffects\x1b[0m). Not to much though or your level could\nbecome \x1b[33mannoying\x1b[39m.",
    "Making a troll level takes time but if you decideto make one, watching YouTube videos of other      troll levels is a great way to get some           inspiration.",
    "Playing online user levels is a great way to      learn more about building. Who knows, you might   even find something you like...",
    "Creating custom block design is a great way to    add extra decoration to your levels.",
    "Troll levels are a great way to get attention     from the community but comes with the difficulty  of making a \x1b[35mgood\x1b[39m one.",
    "Make sure to check out the Pretendo Network if youwant to play \x1b[1mNEW\x1b[0m user-created levels."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* animalCrossingNewLeafTips[8] = { // Tips for Animal Crossing New Leaf
    "Talking with villagers in your town is a great wayto \x1b[1mincrease friendship\x1b[0m, \x1b[1munlock gifts\x1b[0m, and \x1b[1mspecial dialog\x1b[0m!",
    "Visit your village's beach regularly to pick up   seashells or rare items like bottles with         messages.",
    "Maintaining flowers can give your town its own    charm as well as open possibilities for new plantsVIA plant breeding.",
    "Focus your early game on paying off your home     loan.",
    "Selling plants and seashells can be a great way toearn early game bells.",
    "Once unlocked, visit the island to catch rare bugsand fish for a lot of bells.",
    "Shake trees for loot that could be hiding in them.\x1b[31mJust don't anger the bees...\x1b[39m",
    "Make sure you save the game before you stop       playing or \x1b[3msomeone\x1b[0m will be mad at you..."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* animalCrossingHappyHomeDesignerTips[8] = { // Tips for Animal Crossing Happy Home Designer
    "When decorating a home, its easy to go overboard  with decorations, to make it too cluttered.",
    "For a better looking product, place furniture withthe same style as the starting furniture.",
    "Save after every job incase your 3DS randomly     turns off.",
    "Talk to everyone every once in a while to see if  they have any new jobs or requests for you.",
    "Don't forget to rotate your camera with the bottomscreen when designing, its pretty helpful.",
    "Make sure to pay attention to the reaction the    customer gives you when you place down furniture  as it determines how much they like said item.",
    "If you own both Animal Crossing New Leaf and      Animal Crossing Happy Home Designer, you can      import your homes from Happy Home Designer to     Animal Crossing New Leaf.",
    "Make sure you take some breaks during your gaming session. Its very easy to lose track of time whileplaying Happy Home Designer."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* GetRandomTip(char* game) {
    static int seeded = 0;
    if (!seeded) {
        srand(time(NULL));
        seeded = 1;
    }
    
    int numTerrariaTips = sizeof(terrariaTips) / sizeof(terrariaTips[0]);
    int numMinecraftTips = sizeof(minecraftTips) / sizeof(minecraftTips[0]);
    int numM3DLTips = sizeof(superMario3dLandTips) / sizeof(superMario3dLandTips[0]);
    int numMarioMakerTips = sizeof(marioMakerTips) / sizeof(marioMakerTips[0]);
    int numAnimalCrossingNewLeafTips = sizeof(animalCrossingNewLeafTips) / sizeof(animalCrossingNewLeafTips[0]);
    int numAnimalCrossingHappyHomeDesignerTips = sizeof(animalCrossingHappyHomeDesignerTips) / sizeof(animalCrossingHappyHomeDesignerTips[0]);

    char* selectedTip = NULL;

    if (strcmp(game, "Terraria") == 0) {
        selectedTip = terrariaTips[rand() % numTerrariaTips];
    }
    else if (strcmp(game, "Minecraft 3DS Edition") == 0) {
        selectedTip = minecraftTips[rand() % numMinecraftTips];
    }
    else if (strcmp(game, "Super Mario 3D Land") == 0) {
        selectedTip = superMario3dLandTips[rand() % numM3DLTips];
    }
    else if (strcmp(game, "Super Mario Maker 3DS") == 0) {
        selectedTip = marioMakerTips[rand() % numMarioMakerTips];
    }
    else if (strcmp(game, "Animal Crossing New Leaf") == 0) {
        selectedTip = animalCrossingNewLeafTips[rand() % numAnimalCrossingNewLeafTips];
    }
    else if (strcmp(game, "Animal Crossing HHD") == 0) {
        selectedTip = animalCrossingHappyHomeDesignerTips[rand() % numAnimalCrossingHappyHomeDesignerTips];
    }
    else {
        selectedTip = "\x1b[31mInvalid game! Cannot load a tip...\x1b[39m";
    }

    if (strcmp(game, "Minecraft 3DS Edition") == 0 && (rand() % 20 == 0)) {
        size_t tipLength = strlen(selectedTip) + 1;
        char* modifiedTip = (char*)malloc(tipLength * 2);
        if (!modifiedTip) {
            return selectedTip;
        }
        strcpy(modifiedTip, selectedTip);

        char* result = (char*)malloc(tipLength * 2);
        if (!result) {
            free(modifiedTip);
            return selectedTip;
        }
        result[0] = '\0';

        char* word = strtok(modifiedTip, " \n\t");
        while (word != NULL) {
            if (strcmp(word, "monster") == 0) {
                strcat(result, "moonter");
            } else {
                strcat(result, word);
            }
            word = strtok(NULL, " \n\t");
            if (word != NULL) {
                strcat(result, " ");
            }
        }

        free(modifiedTip);
        return result;
    }

    return selectedTip;
}
