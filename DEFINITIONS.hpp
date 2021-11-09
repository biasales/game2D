#pragma once

#define SCREEN_WIDTH 1080
#define SCREEN_HEIGHT 750

#define SPLASH_STATE_SHOW_TIME 3.0

#define SPLASH_SCENE_BACKGROUND_FILEPATH "courseSFML/37 redcar/Resources/res/splashBackground.png"
#define MAIN_MENU_BACKGROUND_FILEPATH "courseSFML/37 redcar/Resources/res/sky.png"
#define GAME_BACKGROUND_FILEPATH "courseSFML/37 redcar/Resources/res/bgcar.png"
#define GAME_PAUSE_FILEPATH "courseSFML/37 redcar/Resources/res/pause.png"

#define GAME_OVER_BACKGROUND_FILEPATH "courseSFML/37 redcar/Resources/res/gameover.png"

#define GAME_TITLE_FILEPATH "courseSFML/37 redcar/Resources/res/title.png"
#define PLAY_BUTTON_FILEPATH "courseSFML/37 redcar/Resources/res/PlayButton.png"

#define CAR_FILEPATH "courseSFML/37 redcar/Resources/res/red.png"
#define ICON_FILEPATH "courseSFML/37 redcar/Resources/res/redicon.png"

#define HORN_PATH "courseSFML/37 redcar/Resources/res/239030__poyekhali__horn-2.ogg"
#define MUSIC_PATH "courseSFML/37 redcar/Resources/res/cirque.ogg"

enum GameStates
{
	eReady,
	ePlaying,
	eGameOver
};

#define TIME_BEFORE_GAME_OVER_APPEARS 1.5f