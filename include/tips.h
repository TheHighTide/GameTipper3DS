#include <stdlib.h>
#include <string.h>

#include "char_mgr.h"

char* terrariaTips[15] = { // Tips for Terraria 3DS
    "Build a sky bridge high above the ground to make\ntraveling across your world much faster. This is\nespecially useful for quick traversal during\nevents or when exploring new areas.",
    "Place Campfires strategically throughout your baseand key exploration points. The health\nregeneration buffs they provide can make a big\ndifference in tough battles.",
    "Utilize Teleporters to create fast travel networksbetween different parts of your base or important\nlocations. This can save a lot of time when you\nneed to move around quickly.",
    "\x1b[1mDon't overlook fishing!\x1b[0m Many powerful weapons,\naccessories, and potions can be obtained through\nfishing quests and by catching rare fish in\ndifferent biomes.",
    "To save space and create a compact base, consider\nbuilding NPC houses underground. You can create a\ncentralized hub with easy access to all NPCs\nwithout taking up valuable surface area.",
    "Set up Dart Traps combined with pressure plates ortimers as a defensive mechanism around your base.\nThey can help fend off enemies during events or\ngoblin/pirate invasions.",
    "Avoid the Jungle early game as it can prove to be quite the challenge for early game players. Try exploring it when you obtain a set of \x1b[1mcactus armor and tools\x1b[0m.",
    "When ready, start construction on a Hellevator (a\nhole that reaches from the surface down to the\npits of hell). It can make traveling to hell much\neasier and quicker.",
    "Make sure you remember to build houses in your\ntown or NPC's won't want to move in!",
    "When building homes for NPC's, remember to includewalls, at least one door to the outside, a light\nsource, a table, and a chair. Without all those\nfeatures, NPC's won't be able to move in.",
    "It is a good practice to create separate bossfightarenas for fighting the 3 different hardmode\nmechanical bosses as each have different movement\npatterns.",
    "Creating appartments in your town will help have  space by allowing all your townfolk to live in thesame building.",
    "\x1b[1mEvery\x1b[0m boss can be summoned with an item...",
    "Be careful when killing a \x1b[1mGoblin Scout\x1b[0m because it raises the chance of a Goblin Raid attack on your village!",
    "Don't take the anglers bad attitude and           personality personally, he's just rude..."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* minecraftTips[6] = { // Tips for Minecraft 3DS Edition
    "During the first night, you should consider\ndigging a hole and camping out in it for the nightfor the best chances of survival.",
    "If you find the enemies in Minecraft to be\ntoo challenging, consider turning your world to\nthe \x1b[1mPeaceful difficulty\x1b[0m to disable hunger and\nthose annoying monsters.",
    "Are you a big builder but not into the grind of\nsurvival mode? Try creating a world in \x1b[1mcreative\x1b[0m\n\x1b[1mmode\x1b[0m to grant yourself access to any block in\nMinecraft.",
    "When going to the Nether for the first time it is\nrecommended you have full \x1b[1miron armor\x1b[0m or full\n\x1b[1mdiamond armor\x1b[0m (if you're feeling spicy).",
    "It is a good idea to create a \x1b[1mmob grinder\x1b[0m ASAP in your world as it can help you get villagers later on.",
    "Making a villager breeder is a requirement in the older versions of Minecraft like the 3DS edition  as there is no other way to get rare              enchantments."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* superMario3dLandTips[2] = { // Tips for Super Mario 3D Land
    "If any level gets too difficult, all you have to\ndo is die a couple times intentionally and you\nwill be given the \x1b[1mwhite tanooki tale\x1b[0m. This will\nallow you to plow through everything. Make sure\nyou have enough lives though...",
    "If there's a large gap that you neet to get\nacross, try holding down R and pressing B while\nrunning in any direction to perform a \x1b[1mlong jump\x1b[0m!"
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* marioMakerTips[6] = { // Tips for Super Mario Maker 3DS
    "Using Pretendo, you can go to the course world to play community made courses!",
    "When block combos are used correctly, you can makesome pretty advanced contraptions.",
    "Give your levels some spice by adding \x1b[1mSFX\x1b[0m (\x1b[1mSound\nEffects\x1b[0m). Not to much though or your level could\nbecome \x1b[33mannoying\x1b[0m.",
    "Making a troll level takes time but if you decide to make one, watching YouTube videos of other     troll levels is a great way to get some           inspiration.",
    "Playing online user levels is a great way to      learn more about building. Who knows, you might   even find something you like...",
    "Creating custom block design is a great way to addextra decoration to your levels."
   //-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
};

char* GetRandomTip(char* game) {
    int numTerrariaTips = sizeof(terrariaTips) / sizeof(terrariaTips[0]);
    int numMinecraftTips = sizeof(minecraftTips) / sizeof(minecraftTips[0]);
    int numM3DLTips = sizeof(superMario3dLandTips) / sizeof(superMario3dLandTips[0]);
    int numMarioMakerTips = sizeof(marioMakerTips) / sizeof(marioMakerTips[0]);

    if (strcmp(game, "Terraria") == 0) {
        return terrariaTips[rand() % numTerrariaTips];
    }
    else if (strcmp(game, "Minecraft 3DS Edition") == 0) {
        return minecraftTips[rand() % numMinecraftTips];
    }
    else if (strcmp(game, "Super Mario 3D Land") == 0) {
        return superMario3dLandTips[rand() % numM3DLTips];
    }
    else if (strcmp(game, "Super Mario Maker 3DS") == 0) {
        marioMakerTips[0] = "2";
        return marioMakerTips[rand() % numMarioMakerTips];
    }
    else {
        return "\x1b[31mInvalid game! Cannot load a tip...\x1b[0m";
    }
}