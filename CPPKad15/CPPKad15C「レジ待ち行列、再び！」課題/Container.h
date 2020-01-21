#pragma once

// �R���e�i�C���^�[�t�F�C�X
template<typename T>
class IContainer
{
public:
	virtual ~IContainer() {}
	virtual void push(T& data) = 0;
	virtual T pop() = 0;
	virtual bool full() = 0;
	virtual bool empty() = 0;
	virtual int count() = 0;			// ���݂̃f�[�^����Ԃ�
	virtual T& operator[](int i) = 0;	// []���Z�q�̃I�[�o�[���[�h
};

// �X�^�b�N
template<typename T>
class Stack : public IContainer<T>
{
private:
	T*		buf;				// �X�^�b�N
	int		max;				// �ő�T�C�Y�i�v�f���j
	int		sp;					// �X�^�b�N�|�C���^
public:
	Stack(int m) : max(m), sp(0), buf(new T[m]) {}
	~Stack() { delete[] buf; }
	void push(T& data) { buf[sp++] = data; }
	T pop() { return buf[--sp]; }
	bool full() { return (sp == max); }
	bool empty() { return (sp == 0); }
	int count() { return sp; }					// ���݂̃f�[�^����Ԃ�
	T& operator[](int i) { return buf[i]; }		// []���Z�q�̃I�[�o�[���[�h
};

// �L���[�i�f�[�^�V�t�g�����j
template <typename T>
class Queue : public IContainer<T>
{
private:
	T*		buf;				// �X�^�b�N
	int		max;				// �ő�T�C�Y�i�v�f���j
	int		sp;					// �X�^�b�N�|�C���^
public:
	Queue(int m) : max(m), sp(0), buf(new T[m]) {}
	~Queue() { delete[] buf; }

	void push(T& data)
	{
		buf[sp++] = data;
	}

	T pop()
	{
		T data = buf[0];
		sp--;
		for (int i = 0; i < sp; i++) {
			buf[i] = buf[i + 1];
		}
		return data;
	}

	bool full() { return (sp == max); }
	bool empty() { return (sp == 0); }

	int count() { return sp; }					// ���݂̃f�[�^����Ԃ�
	T& operator[](int i) { return buf[i]; }		// []���Z�q�̃I�[�o�[���[�h
};
