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

