import math
from collections import Counter


class Solution:
	def numTilePossibilities(self, tiles: str) -> int:
		"""
		Calculates the total number of unique non-empty sequences possible using
		any number of tiles from the input string.

		WHY THIS WORKS (Exponential Generating Functions):
		--------------------------------------------------
		In combinatorics, the number of ways to arrange a 'multiset' (items with duplicates)
		of length 'k' is:  k! / (n1! * n2! * ...)
		where n1, n2 are the counts of each repeating item.

		This code solves the problem by multiplying 'polynomials' for each letter:
		1. For a letter appearing 'n' times, we create a term: (1/0! + x/1! + x^2/2! ... x^n/n!).
		2. When we multiply these terms (polynomial convolution), the algebra naturally
		   combines every possible subset of letters.
		3. The division by factorials (1/i!) is handled during multiplication, which
		   automatically satisfies the "division by duplicates" rule for permutations.
		4. Finally, the coefficient at index 'k' represents (Total Permutations / k!).
		   Multiplying by k! at the end reveals the final count.
		"""

		# Count letter frequencies (e.g., "AAB" -> {'A': 2, 'B': 1})
		counts = Counter(tiles)

		# 'poly' represents the current combined polynomial.
		# Index 'i' corresponds to the power of x^i.
		# Initial [1.0] represents the empty sequence (x^0).
		poly = [1.0]

		for char, count in counts.items():
			# Create a new bracket for the current character.
			# Example for 'A' appearing twice: [1/0!, 1/1!, 1/2!]
			term = [1.0 / math.factorial(i) for i in range(count + 1)]

			# Perform Polynomial Multiplication (Convolution):
			# We multiply the existing polynomial by the current letter's bracket.
			new_poly = [0.0] * (len(poly) + len(term) - 1)
			for i, coeff_a in enumerate(poly):
				for j, coeff_b in enumerate(term):
					# Multiplication of x^i and x^j results in x^(i+j).
					# We add the product of their coefficients to the new index.
					new_poly[i + j] += coeff_a * coeff_b
			poly = new_poly

		# The result 'poly' now contains coefficients for all possible sequence lengths.
		total_permutations = 0

		# Iterate from index 1 (length 1) to the end (all tiles used).
		for k in range(1, len(poly)):
			# Conversion: The coefficient at x^k is (Permutations / k!).
			# We multiply by k! to 'extract' the actual number of unique sequences.
			total_permutations += round(poly[k] * math.factorial(k))

		return total_permutations
