#ifndef ROOTSSUMMED_HPP__
#define ROOTSSUMMED_HPP__

#include "AComputer.hpp"
#include <cmath>

struct RootsSummed : AComputer
{
	RootsSummed(int size) : AComputer(size) {}

private:
	void prepare()
	{
		for (auto i = 0; i < cnt; i++)
			numbers[i] = static_cast<int>(std::sqrt(numbers[i]));
	}
	void finalize()
	{
		result = static_cast<int>(sqrt(result));
	}
};

#endif // !ROOTSSUMMED_HPP
