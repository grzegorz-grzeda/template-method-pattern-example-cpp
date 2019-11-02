#ifndef ACOMPUTER_HPP__
#define ACOMPUTER_HPP__

struct AComputer
{
	AComputer(int siz) : size(siz), cnt(0), result(0)
	{
		numbers = new int[siz];
	}
	virtual ~AComputer()
	{
		delete[] numbers;
	}
	void put(int number)
	{
		if (cnt < size)
			numbers[cnt++] = number;
	}
	void compute()
	{
		prepare();
		calculate();
		finalize();
	}
	int getResult()
	{
		return result;
	}

protected:
	int *numbers;
	int size;
	int cnt;
	int result;

	virtual void prepare() = 0;
	virtual void finalize() = 0;

private:
	void calculate()
	{
		result = 0;

		for (int i = 0; i < cnt; i++)
			result += numbers[i];
	}
};

#endif