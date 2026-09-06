# Assignment 2: Syntax, Semantics, and Memory Management

Source code for analyzing syntax, semantics, and memory management across
Python, JavaScript, C++, Rust, and Java.

## Structure

### part1_section1 — Syntax errors
- `sum.{py,js,cpp}` — corrected array-sum programs (all output 15)
- `sum_with_error.{py,js,cpp}` — versions with the letter "o" used in place of zero
- `sum_syntax_error.py` — Python version with a missing colon (true SyntaxError)

Run:
- `python3 sum.py`
- `node sum.js`
- `g++ sum.cpp -o sum && ./sum`

### part1_section2 — Type systems
- `types_demo.{py,js,cpp}` — demonstrate dynamic/static and strong/weak typing

### part2_section3 — Memory management
- `memory.rs` — Rust ownership and borrowing
- `ownership_fail.rs` — demonstrates the borrow checker (does not compile, by design)
- `MemoryDemo.java` — Java garbage collection
- `memory.cpp` — C++ manual memory management (no leaks)
- `memory_leak.cpp` — C++ version with a deliberate leak (for Valgrind)

Run:
- `rustc -O memory.rs -o memory_rust && ./memory_rust`
- `javac MemoryDemo.java && java MemoryDemo`
- `g++ -O2 memory.cpp -o memory_cpp && ./memory_cpp`
- `valgrind --leak-check=full ./memory_cpp`
