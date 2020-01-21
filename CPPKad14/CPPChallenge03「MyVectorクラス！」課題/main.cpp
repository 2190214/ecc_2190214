//******************************************************************************
//
//
//		CPPChallenge03「MyVectorクラス！」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

// ヘッダファイルのインクルード
#include <iostream>
#include <string>
using namespace std;

#include "MyVector.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	while (1) {
		MyVector	v1(5, 6);
		MyVector	v2(10, 3);
		MyVector	ans;

		char* str_calc[] = {
			"5.0f*v1",
			"v1*5.0f",
			"v1+v2",
			"v1+=v2",
			"++v1",
			"v1++" ,
			"(v1+=v2)++",
			"(++v1)+=v2",
			"(v1++)+=v2",
		};

		cout << "ベクトル演算します！" << endl;
		for (int i = 0; i < sizeof(str_calc) / sizeof(char*); i++) {
			cout << i << "：" << str_calc[i] << "、";
		}
		cout << "-1：終了＞";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;
		cout << endl;

		cout << "ans = " << str_calc[cmd] << " をします！" << endl;

		switch (cmd) {
		//case 0:	ans = 5.0f * v1;		break;
		//case 1:	ans = v1 * 5.0f;		break;
		//case 2:	ans = v1 + v2;			break;
		//case 3:	ans = (v1 += v2);		break;
		//case 4:	ans = ++v1;				break;
		//case 5:	ans = v1++;				break;
		//case 6:	ans = (v1 += v2)++;		break;
		//case 7:	ans = (++v1) += v2;		break;
		//case 8:	ans = (v1++) += v2;		break;
		}

		showVector("v1 ", v1);
		showVector("v2 ", v2);
		showVector("ans", ans);
		cout << endl;
	}

	return 0;
}

//******************************************************************************
