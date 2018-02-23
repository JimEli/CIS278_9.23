// Templatized custom enumerator iterator.
#include <type_traits>

template <typename T, T beginVal, T endVal>
class Iterator {
	typedef typename std::underlying_type<T>::type t;
	int val;

public:
	Iterator(const T& f) : val(static_cast<t>(f)) { }
	Iterator() : val(static_cast<t>(beginVal)) { }
	
	Iterator operator++ () 
	{
		++val;
		return *this;
	}
	
	T operator* () 
	{ 
		return static_cast<T>(val); 
	}
	
	bool operator!= (const Iterator& i) 
	{ 
		return val != i.val; 
	}

	Iterator begin() 
	{ 
		return *this; 
	} 
	
	Iterator end() {
		static const Iterator endIter = ++Iterator(endVal);
		return endIter;
	}
};
