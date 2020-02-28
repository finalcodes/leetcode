#include <iostream>

using namespace std;
 
class Solution {
public:
	int hammingWeight(uint32_t n) {
		int result = 0;
		for (int i = 0; i < 32; i++)
		{
			if (n & (1 << i))
				result++;
		}

		return result;
	}
};