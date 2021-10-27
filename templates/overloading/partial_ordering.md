In our last example, it may seem very intuitive that the second template is more special than the first because the first can accommodate just about any argument
type, whereas the second allows only pointer types. However, other examples are not necessarily as intuitive. In what follows, we describe the exact procedure to determine whether one function template participating in an overload set is more specialized than the other. 

Note that these are partial ordering rules: 
It is possible that given two templates, neither can be considered more specialized than the other. If overload resolution must select between two such templates, no decision can be made, and the program contains an ambiguity error.

Let’s assume we are comparing two identically named function templates that seem viable for a given function call. 
Overload resolution is decided as follows:

+ Function call parameters that are covered by a default argument and ellipsis parameters that are not used are ignored in what follows.
+ We then synthesize two artificial lists of argument types (or for conversion function templates, a return type) by substituting every template parameter as follows:
    + Replace each template type parameter with a unique invented type
    + Replace each template template parameter with a unique invented class template.
    + Replace each nontype template parameter with a unique invented value of the appropriate type.
    
(Types, templates, and values that are invented in this context are distinct from any other types, templates, or values that either the programmer used or the compiler synthesized in other contexts.)

If template argument deduction of the second template against the first synthesized list of argument types succeeds with an exact match, but not vice versa, then the
first template is more specialized than the second. Conversely, if template argument deduction of the first template against the second synthesized list of argument types succeeds with an exact match, but not vice versa, then the second template is more specialized than the first. Otherwise (either no deduction succeeds or both succeed), there is no ordering between the two templates. 
Let’s make this concrete by applying it to the two templates in our last example. 
From these two templates, we synthesize two lists of argument types by replacing the template parameters as described earlier: (A1) and (A2*) (where A1 and A2 are unique made up types). Clearly, deduction of the first template against the second list of argument types succeeds by substituting A2* for T. However, there is no way to make T* of the second template match the nonpointer type A1 in the first list. Hence, we formally conclude that the second template is more specialized than the first.
Consider a more intricate example involving multiple function parameters:

```
template<typename T>
void t(T*, T const* = nullptr, ...);
template<typename T>
void t(T const*, T*, T* = nullptr);
void example(int* p)
{
    t(p, p);
}
```
First, because the actual call does not use the ellipsis parameter for the first template
and the last parameter of the second template is covered by its default argument,
these parameters are ignored in the partial ordering. Note that the default argument
of the first template is not used; hence the corresponding parameter participates in
the ordering.
The synthesized lists of argument types are (A1*, A1 const*) and (A2
const*, A2*). Template argument deduction of (A1*, A1 const*) versus
the second template actually succeeds with the substitution of T with A1 const,
but the resulting match is not exact because a qualification adjustment is needed to
call t<A1 const>(A1 const*, A1 const*, A1 const* = 0) with
arguments of types (A1*, A1 const*). Similarly, no exact match can be found
by deducing template arguments for the first template from the argument type list
(A2 const*, A2*). Therefore, there is no ordering relationship between the two
templates, and the call is ambiguous.
The formal ordering rules generally result in the intuitive selection of function
templates. Once in a while, however, an example comes up for which the rules do
not select the intuitive choice. It is therefore possible that the rules will be revised to
accommodate those examples in the future.

