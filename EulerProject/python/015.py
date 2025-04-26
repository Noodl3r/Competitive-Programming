# How many paths are there in a 20x20 grid?

import math

# This is just a combinatorics problem, each path has to have a n number of both down and right movements. So you just take a choose of this reordering.

print(math.comb(2 * 20, 20))
