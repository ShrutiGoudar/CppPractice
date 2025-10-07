# CppPractice
Practice C++ coding by building mini-projects

Week 1 — Build a “Fluency Muscle”

Goal: Get fast and confident with syntax, classes, constructors, ownership, and memory.

Day	Task	Outcome
Day 1	Write a class Car with constructor, destructor, copy constructor, and assignment operator. Print messages in each to trace lifecycle.	Understand object creation/destruction
Day 2	Convert it to use move constructor and move assignment. Show how moving avoids deep copies.	Learn move semantics by running it
Day 3	Make a Garage that holds std::vector<Car> vs. std::vector<std::unique_ptr<Car>>. Observe slicing vs. ownership.	Visualize object ownership
Day 4	Use std::unique_ptr and write a function that transfers ownership of a Car.	See RAII and ownership in practice
Day 5	Create a function returning a std::unique_ptr<Car> to see how return-value optimization works.	Practice resource return idiom
Weekend	Mini-project: Build a simple Vehicle Inventory app where you can add/remove cars from vector using smart pointers.	Small working demo you can push to GitHub
⚙️ Week 2 — Focus on STL and Problem Solving

Goal: Use standard containers, algorithms, and iterators to transform data confidently.

Day	Task	Outcome
Day 1	Write a program to remove duplicates from a vector of ints using std::sort + std::unique.	Practice STL algorithms
Day 2	Parse a CSV of integers (hardcode sample data) → compute average, max, min.	Hands-on with loops and streams
Day 3	Use std::map<std::string, int> to count word frequency from a sentence.	Map operations and iteration
Day 4	Use std::transform to convert list of strings to uppercase.	Learn functional-style STL use
Day 5	Write a small program to find missing numbers in a sequence.	Build algorithmic thinking
Weekend	Mini-project: Implement a Student Record Manager — add, delete, search students using vector + map.	End-to-end STL usage
🧩 Week 3 — Problem Solving & Debugging Practice

Goal: Get used to solving small algorithmic tasks and debugging confidently.

Day	Task	Outcome
Day 1	Write a function to reverse a linked list (manually or using vector).	Logic + pointer practice
Day 2	Implement binary search manually. Compare with std::binary_search.	Problem-solving & testing
Day 3	Implement factorial using recursion and loops.	Observe stack calls
Day 4	Simulate a simple stack using vector push/pop.	Build basic data structure
Day 5	Write a function that throws and catches exceptions — simulate divide-by-zero.	Exception handling in action
Weekend	Mini-project: Debug a small given program (I can share a buggy one).	Debugging mindset practice
🧠 Week 4 — Integration and Mini Demos

Goal: Combine multiple C++ features into short demos showing senior-level fluency.

Day	Task	Outcome
Day 1	Use std::thread to run two tasks in parallel (print even and odd numbers).	Concurrency basics
Day 2	Add std::mutex to prevent race conditions.	Thread synchronization
Day 3	Use std::future or std::async to run computation in background.	Async understanding
Day 4	Use std::variant to hold different data types and print them.	Modern C++ feature
Day 5	Serialize small data to JSON using nlohmann/json (if available).	External library + modern syntax
Weekend	Mini-project: Build a Task Scheduler demo using threads & STL queues.	Show full concept integration
💾 Progress Tracking

Make a repo: cpp-implementation-progress

Create folders like:

Week1_Basics/
Week2_STL/
Week3_Debugging/
Week4_Integration/


Push code every 2–3 days (no need daily)

Add a small README.md with what you learned in each week
