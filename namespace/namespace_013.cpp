namespace Nec {
	class C {
		friend void f1();
		friend void f2(const C&);
		//...
	};
}

int main()
{
	Nec::C cx;

	f1();
	f2(cx);
}
