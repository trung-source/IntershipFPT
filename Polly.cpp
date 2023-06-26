#include <iostream>
using namespace std;
class base {
public:
	void a(void) { cout << "base::a called\n"; }
	virtual void b(void) { cout << "base::b called\n"; }
	virtual void c(void) { cout << "base::c called\n"; }
};
class derived : public base {
public:
	void a(void) { cout << "derived::a called\n"; }
	void b(void) { cout << "derived::b called\n"; }
};
void do_base(base& a_base)
{
	cout << "Call functions in the base class\n";
	a_base.a();
	a_base.b();
	a_base.c();
}
main()
{
	derived a_derived;
	cout << "Calling functions in the derived class\n";
	a_derived.a();
	a_derived.b();
	a_derived.c();
	do_base(a_derived);
}
