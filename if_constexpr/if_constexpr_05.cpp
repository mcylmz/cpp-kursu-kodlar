#include <iterator>

template <typename Iter, typename Dist>
void advance(Iter& pos, Dist n)
{
	using Cat = typename std::iterator_traits<Iter>::iterator_category;
	advance_impl(pos, n, Cat{});
}

//implementation for random access iterators
template <typename Iter, typename Dist>
void advance_impl(Iter& pos, Dist n, std::random_access_iterator_tag)
{
	pos += n;
}

//implementation for random bidirectional iterators
template <typename Iter, typename Dist>
void advance_impl(Iter& pos, Dist n, std::bidirectional_iterator_tag)
{
	if (n >= 0) {
		while (n--)
			++pos;
	}
	else {
		--pos;
	}
}

//implementation for input iterators
template <typename Iter, typename Dist>
void advance_impl(Iter& pos, Dist n, std::input_iterator_tag)
{
	while (n--) {
		++pos;
	}
}
