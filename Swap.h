#ifndef XOR_SWAP
#define XOR_SWAP
namespace MasujimaRyohei 
{
	template<typename T> void xorSwap(T& a, T& b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}
}

#endif
