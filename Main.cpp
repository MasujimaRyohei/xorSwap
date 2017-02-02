#include <iostream>

#include "Swap.h"

namespace MasujimaRyohei {
	using namespace std;

	void testSwap()
	{
		// Define variables
		int a = 10;
		int b = 20;

		// Show variables
		printf("a = %d\nb = %d\n", a, b);

		// Swap each variables
		xorSwap(a, b);

		// Shor variables after swapping
		printf("a = %d\nb = %d\n", a, b);
	}
	void main()
	{
		testSwap();

		getchar();

		return;
	}
}