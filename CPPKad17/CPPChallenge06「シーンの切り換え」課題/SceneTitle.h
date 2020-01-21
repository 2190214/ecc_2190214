#pragma once

#include "Scene.h"

class SceneTitle : public IScene
{
private:
	int		count;
public:
	SceneTitle();
	~SceneTitle();
	IScene* update();
	void draw();
};
