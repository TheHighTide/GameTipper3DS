#include <3ds.h>
#include <stdio.h>

#include "tips.h"

int main(int argc, char **argv)
{
	gfxInitDefault();
	PrintConsole topScreen, bottomScreen;

	char* games[6] = {
		"Terraria",
		"Minecraft 3DS Edition",
		"Super Mario 3D Land",
		"Super Mario Maker 3DS",
		"Animal Crossing New Leaf",
		"Animal Crossing HHD"
	};

	int numberOfGames = sizeof(games) / sizeof(games[0]);
	int currentlySelectedGame = 0;
	bool hasSelectionChanged = false; // Tells the program if the user changed their game selection or not

	consoleInit(GFX_TOP, &topScreen);
	consoleInit(GFX_BOTTOM, &bottomScreen);

	consoleSelect(&topScreen);
	printf("\x1b[36;1m                  Game Tipper\x1b[0m\n");
	printf("\x1b[34;1m==================================================\x1b[0m\n\nPlease use the bottom screen to select the game\nyou want a hint for!\n");

	consoleSelect(&bottomScreen);
	printf("\x1b[1;1HGame: %s", games[currentlySelectedGame]);
	printf("\x1b[3;1HControls:\nUP/DOWN  = Switch Game\nA        = Select Game\nX        = View Changelog\nSTART    = Exit Application\n");

	while (aptMainLoop())
	{
		hidScanInput();
		u32 kDown = hidKeysDown();

		if (kDown & KEY_START) break;
		else if (kDown & KEY_DDOWN) {
    		currentlySelectedGame++;
    		hasSelectionChanged = true;

    		// Adjust the index to wrap around correctly
    		if (currentlySelectedGame >= numberOfGames) {
    		    currentlySelectedGame = 0; // Wrap around to the first game
    		}
		}
		else if (kDown & KEY_DUP) {
		    currentlySelectedGame--;
		    hasSelectionChanged = true;

		    // Adjust the index to wrap around correctly
		    if (currentlySelectedGame < 0) {
		        currentlySelectedGame = numberOfGames - 1; // Wrap around to the last game
		    }
		}
		else if (kDown & KEY_A) {
			consoleSelect(&topScreen);
			consoleClear();
			printf("\x1b[36;1m                  Game Tipper\x1b[0m\n");
			printf("\x1b[34;1m==================================================\x1b[0m\n\n");
			printf(GetRandomTip(games[currentlySelectedGame]));
			printf("\n");
		}
		else if (kDown & KEY_X) {
			consoleSelect(&topScreen);
			consoleClear();
			printf("\x1b[36;1m                  Game Tipper\x1b[0m\n");
			printf("\x1b[34;1m==================================================\x1b[0m\n\n");
			printf("\x1b[4;1HVersion 0.2.0");
			printf("\x1b[5;1HAdded:");
			printf("\x1b[6;2H- Animal Crossing NL support");
			printf("\x1b[7;2H- Animal Crossing HHD support");
			printf("\x1b[8;2H- 10 new Terraria tips");
			printf("\x1b[9;2H- 2 new Minecraft tips");
			printf("\x1b[10;2H- 1 new Super Mario 3D Land tips");
			printf("\x1b[11;2H- 2 new Super Mario Maker 3DS tips");
		}

		if (hasSelectionChanged) {
			consoleSelect(&bottomScreen);
			printf("\x1b[1;1HGame:                                   ");
			printf("\x1b[1;1HGame: %s", games[currentlySelectedGame]);
			hasSelectionChanged = false;
		}

		gfxFlushBuffers();
		gfxSwapBuffers();

		gspWaitForVBlank();
	}

	gfxExit();
	return 0;
}
