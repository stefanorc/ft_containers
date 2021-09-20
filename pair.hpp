#ifndef PAIR_HPP
#define PAIR_HPP

namespace ft {

template <class T, class U>
struct pair
{
	T first;
	U second;

	pair() : first(), second() {};
	pair (T& a, U& b) : first(a), second(b) {};
	pair (const T& a, const U& b) : first(a), second(b) {};

	template<class V, class Z>
	pair (const pair<V,Z>& pr): first(pr.first), second(pr.second) {}

	pair& operator=(const pair& pr) {
		first = pr.first;
		second = pr.second;
		return *this;
	}
}; // pair

template <class T1,class T2>
	pair<T1,T2> make_pair (T1 x, T2 y) {
		return ( pair<T1,T2>(x,y) );
}

template <class T, class U>
bool operator== (const pair<T,U>& lhs, const pair<T,U>& rhs)
{ return lhs.first==rhs.first; }

template <class T, class U>
bool operator!= (const pair<T,U>& lhs, const pair<T,U>& rhs)
{ return !(lhs==rhs); }

template <class T, class U>
bool operator<  (const pair<T,U>& lhs, const pair<T,U>& rhs)
{ return lhs.first<rhs.first; }

template <class T, class U>
bool operator<= (const pair<T,U>& lhs, const pair<T,U>& rhs)
{ return !(rhs<lhs); }

template <class T, class U>
bool operator>  (const pair<T,U>& lhs, const pair<T,U>& rhs)
{ return rhs<lhs; }

template <class T, class U>
bool operator>= (const pair<T,U>& lhs, const pair<T,U>& rhs)
{ return !(lhs<rhs); }

} //namespace ft

#endif /* PAIR_HPP */
