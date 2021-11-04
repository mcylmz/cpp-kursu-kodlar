auto func() 
{
	if constexpr (sizeof(int) > 4) {
		return 1;
	}
}
