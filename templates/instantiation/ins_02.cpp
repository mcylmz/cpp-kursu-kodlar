template<typename T> T f(T p) { return 2 * p; }

decltype(f(2)) x = 2;
