/* 1537 - Bank Line */
#include <stdio.h>

#define SC1(a) scanf("%d", &a)

typedef long long int LLI;

const LLI MOD = 1000000009, INV = 833333341;

LLI fat[100001];

int main()
{
	int p;

	fat[1] = 1;
	for(LLI i = 2; i < 100001; i++)
		fat[i] = (i * fat[i-1]) % MOD;

	while(SC1(p) && p)
		printf("%lld\n", (fat[p] * INV) % MOD);

	return 0;
}
