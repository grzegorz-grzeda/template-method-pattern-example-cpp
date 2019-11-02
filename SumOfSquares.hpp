#ifndef SUMOFSQUARES_HPP__
#define SUMOFSQUARES_HPP__

#include "AComputer.hpp"

struct SumOfSquares : AComputer
{
	SumOfSquares(int size) : AComputer(size) {}

private:
	void prepare()
	{
		for (int i = 0; i < cnt; i++)
			numbers[i] *= numbers[i];
	}
	void finalize()
	{
	}
};

#endif // !SUMOFSQUARES_HPP__
