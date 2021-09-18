class Myclass {

public:
	//...
	friend bool operator<(const Myclass& r1, const Myclass& r2)
	{
		return std::tuple{ r1.mx, r1.mname, r1.mdate } < std::tuple{ r2.mx, r2.mname, r2.mdate };
	}
private:
	int mx{};
	std::string mname{};
	Date mdate{};
};
