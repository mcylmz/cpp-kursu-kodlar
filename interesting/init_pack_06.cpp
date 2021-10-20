/*
The dominance rule is useful, but little known. It says that even if in a non-unique path through a base-class lattice, name-lookup for a partially hidden member is unique if the member belongs to a virtual base-class:

struct A { void f() { } };

struct B : virtual A { void f() { cout << "B!"; } };
struct C : virtual A { };

// name-lookup sees B::f and A::f, but B::f dominates over A::f !
struct D : B, C { void g() { f(); } };
I've used this to implement alignment-support that automatically figures out the strictest alignment by means of the dominance rule.

This does not only apply to virtual functions, but also to typedef names, static/non-virtual members and anything else. 
I've seen it used to implement overwritable traits in meta-programs.

*/
