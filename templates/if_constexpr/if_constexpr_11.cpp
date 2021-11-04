
//function return type may be int or void

auto func()
{
	if constexpr (sizeof(int) > 4) {
		return 1;
	}
}
