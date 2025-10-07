Build a simple Vehicle Inventory app where you can add/remove cars from vector using smart pointers.


Types of Smart Pointers : 
1. unique_ptr

2. shared_ptr

3. weak_ptr



Note: 

Always create smart pointers on a separate line of code, never in a parameter list, so that a subtle resource leak won't occur due to certain parameter list allocation rules.
...............
Why  ?
...............
eg : 
void func(std::shared_ptr<Foo> a, std::shared_ptr<Bar> b);

// BAD code: Creating smart pointers in parameter list
func(std::shared_ptr<Foo>(new Foo()), std::shared_ptr<Bar>(new Bar()));

Execution order (one possible scenario):

new Foo() executes → returns raw pointer Foo* temp1
new Bar() executes → returns raw pointer Bar* temp2
shared_ptr<Bar>(temp2) constructor starts
EXCEPTION THROWN (out of memory, constructor failure, etc.)
shared_ptr<Foo>(temp1) constructor never gets called

The problem:
At this point:
temp1 (the raw Foo*) exists but is not owned by any smart pointer
temp2 gets cleaned up by the exception unwinding
temp1 is lost forever → memory leak

Foo* temp1 = new Foo();           // ✓ Raw pointer created
Bar* temp2 = new Bar();           // ✓ Raw pointer created
shared_ptr<Bar> ptr2(temp2);      // ✓ temp2 now managed
// ❌ EXCEPTION HERE
shared_ptr<Foo> ptr1(temp1);      // ❌ NEVER REACHED - temp1 orphaned

---------------------------
---------------------------
Why This Matters
Exception Safety: If an exception occurs during parameter evaluation:

Separate lines ensure each smart pointer is fully constructed before the next allocation
make_shared is inherently exception-safe (single allocation)
Debugging: Easier to step through and identify which allocation failed

Code Clarity: More readable and explicit about resource management
/**************************************************************************
* 		Modern C++ Alternative					  *
* 	Use std::make_shared or std::make_unique instead		  *
***************************************************************************

