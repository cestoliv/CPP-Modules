#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>
#include <cstring>
#include <limits>
#include "PmergeMe.hpp"

// Test: ./PmergeMe `shuf -i 1-100000 -n 10000 | tr "\n" " "`

typedef unsigned long long timestamp_t;

static timestamp_t get_timestamp ()
{
	struct timeval now;
	gettimeofday (&now, NULL);
	return  now.tv_usec + (timestamp_t)now.tv_sec * 1000000;
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "Usage: " << argv[0] << " <values>" << std::endl;
		return (1);
	}

	// Get values from argv[1]
	std::vector<long> vector_vals;
	std::deque<long> deque_vals;
	for (int i = 1; i < argc; i++)
	{
		bool is_number = true;
		for (size_t j = 0; j < strlen(argv[i]); j++)
			if (!isdigit(argv[i][j]))
				is_number = false;
		if (!is_number)
		{
			std::cerr << "Error: " << argv[i] << " is not a number" << std::endl;
			return (1);
		}

		if (atof(argv[i]) > std::numeric_limits<long>::max())
		{
			std::cerr << "Error: " << argv[i] << " exceed numeric limit (" << std::numeric_limits<long>::max() << ")" << std::endl;
			return (1);
		}

		vector_vals.push_back(atol(argv[i]));
		deque_vals.push_back(atol(argv[i]));
	}
	// Check for duplicates
	std::vector<long> sorted;
	std::copy(vector_vals.begin(), vector_vals.end(), std::back_inserter(sorted));
	std::sort(sorted.begin(), sorted.end());
	std::vector<long>::iterator uniqit = std::unique(sorted.begin(), sorted.end());
	if (uniqit != sorted.end())
	{
		std::cerr << "Error: there is some duplicates values" << std::endl;
		return (1);
	}

	std::cout << "Before: ";
	for (size_t i = 0; i < vector_vals.size(); i++)
		std::cout << vector_vals[i] << " ";
	std::cout << std::endl;

	// std::cout << "Real:   ";
	// for (size_t i = 0; i < sorted.size(); i++)
	// 	std::cout << sorted[i] << " ";
	// std::cout << std::endl;


	/////
	// Vector
	/////

	// Start timer
	timestamp_t start = get_timestamp();

	PmergeMe<long, std::vector> vector_merge;
	std::vector<long> vector_sorted = vector_merge.sort(vector_vals);

	std::cout << "After:  ";
	for (size_t i = 0; i < vector_sorted.size(); i++)
		std::cout << vector_sorted[i] << " ";
	std::cout << std::endl;

	// Stop timer
	timestamp_t end = get_timestamp();
	std::cout << "Time to process a range of " << vector_vals.size() << " elements with std::vector : " << end - start << " us" << std::endl;


	/////
	// Deque
	/////

	// Start timer
	start = get_timestamp();

	PmergeMe<long, std::deque> deque_merge;
	std::deque<long> deque_sorted = deque_merge.sort(deque_vals);

	// std::cout << "After: ";
	// for (size_t i = 0; i < deque_sorted.size(); i++)
	// 	std::cout << deque_sorted[i] << " ";
	// std::cout << std::endl;

	// Stop timer
	end = get_timestamp();
	std::cout << "Time to process a range of " << deque_vals.size() << " elements with std::deque  : " << end - start << " us" << std::endl;
}
