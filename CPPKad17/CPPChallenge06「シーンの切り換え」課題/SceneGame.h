#pragma once

#include "Scene.h"

class SceneGame : public IScene
{
private:
	int		count;
public:
	SceneGame();
	~SceneGame();
	IScene* update();
	void draw();
};
