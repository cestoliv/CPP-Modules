#include "PmergeMe.hpp"

template<typename T, template <typename, typename> class Container>
PmergeMe<T, Container>::PmergeMe(void)
{

}

template<typename T, template <typename, typename> class Container>
PmergeMe<T, Container>::PmergeMe(const PmergeMe<T, Container> &src)
{
	*this = src;
}

template<typename T, template <typename, typename> class Container>
PmergeMe<T, Container>::~PmergeMe(void)
{

}

template<typename T, template <typename, typename> class Container>
PmergeMe<T, Container>	&PmergeMe<T, Container>::operator =(const PmergeMe<T, Container> &src)
{
	if (this != &src)
		*this = src;
	return *this;
}

template <typename T>
bool reserve(T &container, typename T::size_type size)
{
	(void) container;
	(void) size;
	return false;
}

template <typename T, typename U>
bool reserve(std::vector<T, U> &container, typename std::vector<T, U>::size_type size)
{
	container.reserve(size);
	return true;
}

template<typename T, template <typename, typename> class Container>
Container<T, std::allocator<T> > PmergeMe<T, Container>::sort(const Container<T, std::allocator<T> > &array) const
{
	// Make array of pairs of values (and directly sort them)
	// Use container_type
	Container<std::pair<T, T>, std::allocator<T> > pairs;
	// Allocate memory for pairs
	reserve(pairs, array.size() / 2 + 1);
	for (typename Container<T, std::allocator<T> >::size_type i = 0; i < array.size(); i+=2)
	{
		if (i + 1 >= array.size())
			pairs.push_back(std::make_pair(array[i], -1));
		else if (array[i] > array[i + 1])
			pairs.push_back(std::make_pair(array[i], array[i + 1]));
		else
			pairs.push_back(std::make_pair(array[i + 1], array[i]));
	}

	// Array of first values
	Container<T, std::allocator<T> > first_values;
	// Allocate memory for first_values
	reserve(first_values, array.size());
	for (typename Container<T, std::allocator<T> >::size_type i = 0; i < pairs.size(); i++)
		first_values.push_back(pairs[i].first);

	// Array of second values
	Container<T, std::allocator<T> > second_values;
	// Allocate memory for second_values
	reserve(second_values, pairs.size());
	for (typename Container<T, std::allocator<T> >::size_type i = 0; i < pairs.size(); i++)
		second_values.push_back(pairs[i].second);

	// Insert second value in first_values
	for (typename Container<T, std::allocator<T> >::size_type i = 0; i < second_values.size(); i++) {
		if (second_values[i] == -1)
			continue;
		typename Container<T, std::allocator<T> >::iterator it = std::lower_bound(first_values.begin(), first_values.end(), second_values[i]);
		first_values.insert(it, second_values[i]);
	}

	return first_values;
}
