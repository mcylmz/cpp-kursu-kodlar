class MBase {
public:
	void f1();
	void f2();
	void f3();
};


template <typename Base>
class SkillA : public Base{
public:
	void afunc()
	{
		Base::f1(); Base::f2();
		//...
	}
};


template <typename Base>
class SkillB : public Base {
public:
	void bfunc()
	{
		Base::f1(); Base::f2();
		//...
	}
};

using Myclass = SkillB<SkillA<MBase>>;

int main()
{
	Myclass mx;

	mx.afunc();
	mx.bfunc();
}
