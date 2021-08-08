//Basit bir forward implementasyonu
//fonksiyon T ve T& türleri için yazılacak

template<class T>
T&& forward(typename std::remove_reference<T>::type& t) noexcept 
{
	return static_cast<T&&>(t);
}

