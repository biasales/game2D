
#include <map>

class Player
{
public:
	enum Action
	{
		MoveLeft,
		MoveRight,
		MoveUp,
		MoveDown,
		Fire,
		SuperFire,
		Pause,
		ActionCount
	};

	enum Gamestates{
		runing,
		nextLvl,
		gameOver,
		win
	};
