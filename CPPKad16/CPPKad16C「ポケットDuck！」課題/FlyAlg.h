#pragma once

#include <iostream>
using namespace std;

// 基底クラス
class FlyAlg
{
private:
	char*	name;
public:
	FlyAlg(char* n) : name(n) { cout << "「" << name << "」を装備しました！" << endl; }
	~FlyAlg() { cout << "「" << name << "」を解除しました！" << endl; }
	virtual void fly() = 0;
};

// 飛べない
class FlyAlg_NG : public FlyAlg
{
public:
	FlyAlg_NG() : FlyAlg("飛べない") {}
	void fly() { cout << "う～ん、あまり飛べない！！" << endl; }
};

// 翼で飛ぶ
class FlyAlg_Wing : public FlyAlg
{
public:
	FlyAlg_Wing() : FlyAlg("翼で飛ぶ") {}
	void fly() { cout << "バタバタ！翼で飛んでいます！！" << endl; }
};

// ジェット噴射で飛ぶ
class FlyAlg_Jet : public FlyAlg
{
public:
	FlyAlg_Jet() : FlyAlg("ジェット噴射で飛ぶ") {}
	void fly() { cout << "ビューン！ジェット噴射で飛んでいきました！！" << endl; }
};

// ワープする
class FlyAlg_Warp : public FlyAlg
{
public:
	FlyAlg_Warp() : FlyAlg("ワープする") {}
	void fly() { cout << "時空が歪んだ！どこかへワープしました！！" << endl; }
};
