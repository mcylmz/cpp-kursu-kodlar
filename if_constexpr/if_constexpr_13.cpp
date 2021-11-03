auto foo()
{
	if constexpr (sizeof(int) > 4) {
		return 42;
	}
	return 42u;
}
