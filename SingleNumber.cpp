#include "SingleNumber.h"

int SingleNumber::singleNumber(std::vector<int>& nums) 
{

	/* loop through array and check every other element */
	for (int i = 0; i < nums.size(); i++)
	{
		int current = nums[i];
		bool match = false;
			
		/* loop through remaining elements and find our bachelor */
		for (int j = 0; j < nums.size(); j++)
		{
			/* don't compare to itself */
			if (i == j)
				continue;

			/* check that this element has a buddy later in the list*/
			//std::cout << "current:" << current << " compared to:" << nums[j] << std::endl;
			if (current == nums[j])
			{
				match = true;
				break;
			}
			
		}

		/* looped through, couldn't find a match*/
		if(match == false)
			return current;
	}
	/* if we made it here soemthings wrong */
	return -1;
}
