#pragma once

// シーン基底クラス
class IScene
{
private:
	static int		count;
public:
	static void showCount();
public:
	IScene() { count++; }
	virtual ~IScene() { count--; }
	virtual IScene* update() = 0;
	virtual void draw() = 0;
};
