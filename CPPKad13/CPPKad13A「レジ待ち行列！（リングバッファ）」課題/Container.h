#pragma once

// コンテナインターフェイス
template<typename T>
class IContainer
{
public:
	virtual ~IContainer() {}
	virtual void push(T& data) = 0;
	virtual T pop() = 0;
	virtual bool full() = 0;
	virtual bool empty() = 0;
	virtual int count() = 0;			// 現在のデータ数を返す
	virtual T& operator[](int i) = 0;	// []演算子のオーバーロード
};

// スタック
template<typename T>
class Stack : public IContainer<T>
{
private:
	T*		buf;				// スタック
	int		max;				// 最大サイズ（要素数）
	int		sp;					// スタックポインタ
public:
	Stack(int m) : max(m), sp(0), buf(new T[m]) {}
	~Stack() { delete[] buf; }

	void push(T& data) { buf[sp++] = data; }
	T pop() { return buf[--sp]; }

	bool full() { return (sp == max); }
	bool empty() { return (sp == 0); }

	int count() { return sp; }					// 現在のデータ数を返す
	T& operator[](int i) { return buf[i]; }		// []演算子のオーバーロード
};

//	キュー（データシフト方式）






//	キュー2（リングバッファ）






