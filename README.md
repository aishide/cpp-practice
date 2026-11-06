# Modern C++ Practice & Problem Solving

A personal repository dedicated to learning, practicing, and mastering modern C++ (C++17 / C++20). This collection includes fundamental language concepts, Object-Oriented Programming, Standard Template Library (STL) usage, and algorithm implementations.

---

## 🛠️ Prerequisites & Setup

Make sure you have an up-to-date C++ compiler and build tools installed:

- **Compiler:** GCC (`g++` 11+), Clang (`clang++` 13+), or MSVC (VS 2019+)
- **Build System:** CMake 3.20+ (optional, for multi-file projects)
- **Standard:** C++17 or C++20

### Clone the Repository

```bash
git clone https://github.com/<your-username>/<repo-name>.git
cd <repo-name>
```

---

## 🚀 How to Compile & Run

### Quick Compile (Single File)

Compile any file directly from the terminal with recommended warning flags:

```bash
# Compile with C++20 standard
g++ -std=c++20 -Wall -Wextra -Wpedantic main.cpp -o app

# Run
./app
```

### Debug & Memory Checking

To catch memory leaks, out-of-bounds errors, and undefined behavior, compile with AddressSanitizer:

```bash
g++ -std=c++20 -O1 -g -fsanitize=address,undefined main.cpp -o app
./app
```

### Build with CMake

If you prefer building targets via CMake:

```bash
cmake -B build -S .
cmake --build build
./build/bin/<executable_name>
```

---

## 📚 Practice Checklist & Topics

### 1. Language Fundamentals
- [ ] Variables, primitive data types, and type casting
- [ ] Pointers, dereferencing, and pointer arithmetic
- [ ] References vs. pointers
- [ ] Memory model: Stack vs. Heap (`new` / `delete`)
- [ ] Function overloading and default arguments

### 2. Object-Oriented Programming (OOP)
- [ ] Encapsulation, constructors, and destructors
- [ ] Copy constructors and copy assignment operators
- [ ] Move constructors and move assignment operators (Rule of 5 / Rule of 0)
- [ ] Inheritance and access modifiers (`public`, `protected`, `private`)
- [ ] Virtual functions, pure virtual functions, and abstract classes
- [ ] Operator overloading

### 3. Modern C++ Features (C++11 to C++20)
- [ ] Smart pointers: `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`
- [ ] Move semantics, rvalue references (`&&`), and `std::move`
- [ ] Lambdas and `std::function`
- [ ] `auto`, `decltype`, and type deduction
- [ ] Function and class templates
- [ ] Concepts and constraints (C++20)
- [ ] Concurrency: `std::thread`, `std::mutex`, `std::lock_guard`

### 4. Standard Template Library (STL)
- [ ] Sequence containers: `std::vector`, `std::deque`, `std::list`, `std::array`
- [ ] Associative containers: `std::set`, `std::map`, `std::unordered_map`
- [ ] Container adapters: `std::stack`, `std::queue`, `std::priority_queue`
- [ ] Algorithms: `std::sort`, `std::find`, `std::transform`, `std::accumulate`
- [ ] Iterators and iterator ranges

---

## 📖 Useful References

- [cppreference.com](https://en.cppreference.com/) — Complete C++ standard library documentation
- [LearnCpp.com](https://www.learncpp.com/) — Comprehensive, step-by-step C++ tutorials
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines) — High-quality guidelines by Bjarne Stroustrup and Herb Sutter

---

## 📄 License

This repository is distributed under the [MIT License](LICENSE).
