<div align="center">

```cpp
#include <iostream>
#include <chrono>

struct Developer {
    std::string focus = "Modern C++ & Systems Programming";
    int standard      = 20; // Upgrading to C++23
    bool leaks_memory = false;
};

int main() {
    Developer dev;
    std::cout << "🚀 Initializing C++ Practice Arena...\n"
              << "⚡ Target Standard: C++" << dev.standard << '\n'
              << "🛡️  Zero Warnings. Zero Leaks. Maximum Velocity.\n";
    return 0;
}
```

# ⚡ MODERN C++ MASTERY VAULT ⚡
### *Low-Level Mechanics • Zero-Cost Abstractions • High-Performance Systems*

[![C++20](https://img.shields.io/badge/C%2B%2B-20%2F23-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/)
[![Compiler](https://img.shields.io/badge/GCC%20%7C%20Clang%20%7C%20MSVC-Passing-34D058?style=for-the-badge&logo=gnu)](https://godbolt.org/)
[![Sanitizers](https://img.shields.io/badge/ASan%20%7C%20UBSan-Enabled-informational?style=for-the-badge&logo=google)](https://github.com/google/sanitizers)
[![Build](https://img.shields.io/badge/Build-CMake%203.25+-F05032?style=for-the-badge&logo=cmake&logoColor=white)](https://cmake.org)
[![License](https://img.shields.io/badge/License-MIT-F9A03F?style=for-the-badge)](LICENSE)

<br/>

> *"Within C++, there is a much smaller and cleaner language struggling to get out."*  
> — **Bjarne Stroustrup**

</div>

---

## 🎯 `namespace Repository::Mission`

This repository serves as a dedicated hands-on workbench to master **Modern C++ (C++17/20/23)**, computer architecture-conscious programming, memory safety discipline, and algorithm efficiency. 

Every implementation adheres to:
* **Zero-Leak Discipline:** Validated through `AddressSanitizer` and `Valgrind`.
* **High Warning Threshold:** Built under `-Wall -Wextra -Wpedantic -Wconversion -Werror`.
* **Idiomatic Patterns:** Emphasizing RAII, value semantics, and standard algorithms over raw loops.

---

## 🗺️ Interactive Curriculum & Topic Matrix

<details open>
<summary><b>🧠 01. Pointers, Memory & Low-Level Mechanics</b> <i>(Click to collapse/expand)</i></summary>
<br>

```
 Stack Frame                         Heap (Free Store)
┌─────────────────────────┐         ┌─────────────────────────┐
│ int* ptr = 0x7ffd9a...  │───────> │ Value: 42 (Heap Block)  │
│ unique_ptr<Widget> uptr │──RAII──>│ Managed dynamically     │
└─────────────────────────┘         └─────────────────────────┘
```

- [x] Pointer arithmetic, pointer decay, and double pointers (`T**`)
- [x] Memory layout: Stack, Heap, BSS, Data, and Text segments
- [x] Manual resource management: `new`, `delete`, `new[]`, and `delete[]`
- [x] Lvalues, Rvalues, xvalues, prvalues, and glvalues value categories
- [ ] Memory alignment, byte padding, and `alignas` / `alignof`
- [ ] Custom memory pool allocators and arena allocation basics

</details>

<details open>
<summary><b>🧱 02. Object-Oriented Design & Modern RAII</b> <i>(Click to collapse/expand)</i></summary>
<br>

- [x] Constructor hierarchies: default, parameterized, explicit, and delegating
- [x] Destructors & RAII wrapper pattern
- [x] **The Rule of Zero / Three / Five:**
  - [x] Copy Constructor & Copy Assignment Operator
  - [x] Move Constructor & Move Assignment Operator (`std::move`, `noexcept`)
- [x] Polymorphism: Virtual dispatch, `vptr`, and `vtable` internals
- [ ] Interface design with abstract classes & pure virtual functions
- [ ] Multiple inheritance, object layout, and the Diamond Problem (`virtual` inheritance)

</details>

<details>
<summary><b>🚀 03. Modern C++ Evolution (C++11 through C++20/23)</b> <i>(Click to collapse/expand)</i></summary>
<br>

- [x] Smart Pointers: `std::unique_ptr`, `std::shared_ptr`, and `std::weak_ptr`
- [x] Perfect forwarding via `std::forward<T>` and Universal References (`T&&`)
- [x] Lambdas: captures by copy/ref, generalized captures, and generic lambdas
- [ ] Compile-time execution: `constexpr`, `consteval`, and `if constexpr`
- [ ] Template Metaprogramming basics: type traits (`std::is_same_v`, `std::enable_if_t`)
- [ ] **C++20 Highlights:**
  - [ ] Concepts & Constraints (`requires` clause)
  - [ ] The Ranges library (`std::views`)
  - [ ] Coroutines (`co_await`, `co_yield`)
  - [ ] Three-way comparison operator (`operator<=>` spaceship)

</details>

<details>
<summary><b>📦 04. Standard Template Library (STL) Mastery</b> <i>(Click to collapse/expand)</i></summary>
<br>

- [x] **Sequential:** `std::vector` (growth factor & capacity), `std::deque`, `std::array`
- [x] **Associative:** `std::map`, `std::set` (Red-Black tree backing)
- [x] **Unordered:** `std::unordered_map` (hash tables, load factor & rehashing)
- [ ] **Adapters:** `std::stack`, `std::queue`, `std::priority_queue`
- [ ] **Algorithm Suite:** `std::ranges::sort`, `std::transform`, `std::binary_search`
- [ ] Custom functors, lambdas, and comparators in STL containers

</details>

<details>
<summary><b>⚙️ 05. Concurrency & Multithreading</b> <i>(Click to collapse/expand)</i></summary>
<br>

- [ ] `std::thread` vs. C++20 `std::jthread` (cooperative cancellation)
- [ ] Data race prevention with `std::mutex`, `std::lock_guard`, and `std::unique_lock`
- [ ] Atomic operations with `std::atomic<T>` and memory models
- [ ] Producer-consumer pattern using `std::condition_variable`
- [ ] Asynchronous task dispatch: `std::async`, `std::future`, and `std::promise`

</details>

---

## 💻 Build & Execution Playbook

### ⚡ Direct Single-Target Compilation
Compile with optimal warning flags, debugging symbols, and ASan bounds/leak monitoring:

```bash
# Debug Build with AddressSanitizer & UndefinedBehaviorSanitizer
g++ -std=c++20 -Wall -Wextra -Wpedantic -Wconversion -g \
    -fsanitize=address,undefined \
    main.cpp -o app

# Execute
./app
```

### 🏎️ Release / Optimized Compilation
```bash
# Maximum optimization for benchmarking
g++ -std=c++20 -O3 -DNDEBUG -march=native main.cpp -o app_perf
./app_perf
```

### 🛠️ Multi-File Workflow via CMake
```bash
# 1. Configure the build directory
cmake -B build -S . -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

# 2. Build the project
cmake --build build -j$(nproc)

# 3. Run target
./build/bin/main_target
```

---

## 🛡️ Sanitizer & Debugging Command Matrix

| Tool | Purpose | Command Line Trigger |
| :--- | :--- | :--- |
| **ASan** | Buffer overflows, use-after-free, double free | `-fsanitize=address` |
| **UBSan** | Integer overflow, null deref, alignment | `-fsanitize=undefined` |
| **TSan** | Multithreaded data races | `-fsanitize=thread` |
| **Valgrind** | Deep memory profiling & leak analysis | `valgrind --leak-check=full ./app` |
| **GDB / LLDB** | Interactive runtime step-debugging | `gdb ./app` |

---

## 📈 Quality Assurance Checklist

- [x] All code compiles with `-Wall -Wextra -Wpedantic` without warnings.
- [x] Zero raw owning pointers (adheres strictly to RAII).
- [x] Move semantics implemented with `noexcept` specifications.
- [x] Const-correctness rigorously maintained across member functions and parameters.
- [x] Every dynamically allocated resource checked clean under AddressSanitizer.

---

<div align="center">

```cpp
/*
 * Exit Status: 0
 * Heap Allocations: 0 unfreed blocks
 * Compilation: Clean
 */
```

**Found a pattern you like? Consider leaving a ⭐ on this repo!**

</div>
