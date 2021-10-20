// Sometimes you make valid use of the comma operator, but you want to ensure that no user defined comma operator gets into the way, 
// because for instance you rely on sequence points between the left and right side or want to make sure nothing interferes with the desired action. 
// This is where void() comes into game:

for(T i, j; can_continue(i, j); ++i, void(), ++j)
  do_code(i, j);

// Ignore the place holders i put for the condition and code. 
// What's important is the void(), which makes the compiler force to use the builtin comma operator. 
// This can be useful when implementing traits classes, sometimes, too.
