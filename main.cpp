#include <iostream>
#include <cstdlib>
#include "SumOfSquares.hpp"
#include "RootsSummed.hpp"

int main(int argc, char *argv[])
{
	if (argc < 2)
		return -1;

	auto size = argc - 1;
	auto nums = new int[size];

	for (auto i = 0; i < size; i++)
		nums[i] = std::atoi(argv[i + 1]);

	AComputer *sosq = new SumOfSquares(size);
	AComputer *rtsm = new RootsSummed(size);

	for (auto i = 0; i < size; i++)
	{
		sosq->put(nums[i]);
		rtsm->put(nums[i]);
	}

	sosq->compute();
	rtsm->compute();

	std::cout << "SumOfSquares: " << sosq->getResult() << std::endl;
	std::cout << " RootsSummed: " << rtsm->getResult() << std::endl;

	return 0;
}