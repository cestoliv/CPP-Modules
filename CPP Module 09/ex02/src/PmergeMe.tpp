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

	// Insert first values
	Container<T, std::allocator<T> > sorted;
	// Allocate memory
	reserve(sorted, array.size());
	for (typename Container<T, std::allocator<T> >::size_type i = 0; i < pairs.size(); i++)
	{
		typename Container<T, std::allocator<T> >::iterator it = std::lower_bound(sorted.begin(), sorted.end(), pairs[i].first);
		sorted.insert(it, pairs[i].first);
	}

	// Insert second values
	for (typename Container<T, std::allocator<T> >::size_type i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].second == -1)
			continue;
		typename Container<T, std::allocator<T> >::iterator it = std::lower_bound(sorted.begin(), sorted.end(), pairs[i].second);
		sorted.insert(it, pairs[i].second);
	}

	return sorted;
}
