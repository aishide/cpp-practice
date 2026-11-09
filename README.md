<div align="center">

```cpp
#include <concepts>
#include <iostream>
#include <string_view>

template <typename T>
concept HighPerformer = requires(T dev) {
    { dev.optimize() } noexcept;
    { dev.eliminate_leaks() } -> std::same_as<bool>;
};

struct ModernCppDeveloper {
    std::string_view goal = "Zero-Cost Abstractions & Systems Mastery";
    constexpr bool eliminate_leaks() noexcept { return true; }
    constexpr void optimize() noexcept {}
};

static_assert(HighPerformer<ModernCppDeveloper>);
```

# ⚡ MODERN C++ MASTERY VAULT ⚡
### *Low-Level Mechanics • Zero-Cost Abstractions • High-Performance Systems*

[![C++20](https://img.shields.io/badge/Standard-C%2B%2B20%20%2F%20C%2B%2B23-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/)
[![Compiler](https://img.shields.io/badge/Compiler-GCC%2013%20%7C%20Clang%2017-blueviolet?style=for-the-badge&logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Sanitizers](https://img.shields.io/badge/Sanitizers-ASan%20%7C%20UBSan%20%7C%20TSan-success?style=for-the-badge&logo=shield)](https://github.com/google/sanitizers)
[![Build](https://img.shields.io/badge/Build-CMake%203.25+-informational?style=for-the-badge&logo=cmake&logoColor=white)](https://cmake.org/)
[![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)

<p align="center">
  <b>A production-grade laboratory for systems programming, memory safety discipline, concurrency, and modern zero-cost patterns.</b>
</p>

[📌 Overview](#-namespace-repositoryoverview) •
[🗺️ Curriculum Matrix](#️-interactive-curriculum--topic-matrix) •
[📊 STL Cheat-Sheet](#-stl-container-complexity--characteristics) •
[💡 Idiomatic Cookbooks](#-idiomatic-code-cookbooks) •
[🛠️ Build & Tooling](#-build--execution-playbook) •
[🛡️ Memory Diagnostics](#-sanitizer--debugging-command-matrix)

---

</div>

## 📌 `namespace Repository::Overview`

> *"C makes it easy to shoot yourself in the foot; C++ makes it harder, but when you do, it blows your whole leg off."*  
> — **Bjarne Stroustrup**

This repository is an engineered roadmap designed to transition from surface-level syntax to deep, architecture-aware C++ mastery. Every module explores both **high-level expressive interfaces** and the **underlying assembly/memory mechanics**.

### 💎 Core Architecture Pillars
- **Zero-Overhead Principle:** Don't pay for what you don't use; what you do use cannot be hand-written any better.
- **Strict Lifetime & RAII Discipline:** Destructors own resources; raw pointers never own memory.
- **Hardware & Cache Consciousness:** Designing data structures for contiguous layouts, minimal cache misses, and pipeline efficiency.
- **Zero-Tolerance Quality Gates:** Strict compilation under `-Wall -Wextra -Wpedantic -Wshadow -Wconversion -Werror`.

---

## 🗺️ Interactive Curriculum & Topic Matrix

<div align="center">

```
========================= MEMORY HIERARCHY ARCHITECTURE =========================
  [ Registers ]        L1 / L2 / L3 Cache          RAM (Virtual Address Space)
  [ Fast / Small ] <=========================> [ Contiguous Pages / Heap / Stack ]
  
        STACK FRAME (Fast, Deterministic)            HEAP / FREE STORE (Dynamic)
  ┌─────────────────────────────────────────┐       ┌────────────────────────────┐
  │ 0x7fff...  [ Stack Frame: main() ]     │       │ 0x55aa... [ Heap Chunk ]   │
  │   ├── int x = 42;                       │       │   ├── Widget Payload Block │
  │   └── std::unique_ptr<Widget> ptr ──────┼──────>│   └── Dynamic Vector Buff  │
  └─────────────────────────────────────────┘       └────────────────────────────┘
=================================================================================
```

</div>

<details open>
<summary><b>🔥 Phase 01: Low-Level Mechanics & Memory Layout</b></summary>
<br>

- [x] Memory segments: `.text`, `.data`, `.bss`, Stack, and Free Store (Heap)
- [x] Pointer arithmetic, stride calculations, and array decay
- [x] Raw pointer lifetimes, double pointers (`T**`), and function pointers
- [x] Detailed Value Categories: **lvalues**, **rvalues**, **prvalues**, and **xvalues**
- [ ] Memory alignment, packing, struct padding, and `alignas` / `alignof`
- [ ] Cache lines, false sharing, and contiguous memory traversal
- [ ] Custom memory arenas and stack-based monotonic allocators

</details>

<details open>
<summary><b>⚡ Phase 02: Object Semantics & Resource Management (RAII)</b></summary>
<br>

- [x] RAII wrapper fundamentals & exception-safe resource cleanups
- [x] **The Definitive Rule of Zero / Three / Five:**
  - [x] Explicit Copy Constructor & Copy Assignment
  - [x] Move Constructor & Move Assignment (`noexcept` specifications)
  - [x] Destructor mechanics
- [x] Dynamic dispatch: `vptr`, `vtable` layouts, and virtual destructor necessity
- [ ] Curiously Recurring Template Pattern (**CRTP**) for static polymorphism
- [ ] Multiple inheritance, object memory slicing, and virtual base classes (Diamond Problem)
- [ ] Copy-and-Swap idiom for strong exception safety guarantees

</details>

<details open>
<summary><b>🚀 Phase 03: Modern Idiomatic C++ (C++11 through C++23)</b></summary>
<br>

- [x] Smart Pointer Trinity: `std::unique_ptr`, `std::shared_ptr`, and `std::weak_ptr`
- [x] Rvalue references (`T&&`), Universal/Forwarding references, and `std::forward<T>`
- [x] Lambda closures: Capture groups, stateless decay to function pointers, mutable lambdas
- [ ] Compile-time computation: `constexpr`, `consteval`, and `if constexpr`
- [ ] C++20 **Concepts & Constraints** (`template <typename T> requires ...`)
- [ ] C++20 **Ranges & Views** pipeline operator (`vec | std::views::filter(...)`)
- [ ] C++20 **Three-way Comparison** (`<=>` Spaceship operator)
- [ ] C++23 Monadic operations for `std::optional` and `std::expected`

</details>

<details>
<summary><b>📦 Phase 04: Standard Template Library (STL) Mastery</b></summary>
<br>

- [x] Sequence Containers: `std::vector`, `std::deque`, `std::array`, `std::list`
- [x] Associative Trees: `std::map`, `std::set` (Red-Black tree properties)
- [x] Hash Tables: `std::unordered_map` (bucket distribution, load factors, rehashing)
- [ ] Container Adapters: `std::priority_queue`, `std::stack`, `std::queue`
- [ ] Modern algorithms suite: `std::ranges::sort`, `std::ranges::transform`, `std::all_of`
- [ ] String ergonomics: `std::string_view` zero-allocation slicing
- [ ] Custom polymorphic memory resources (`std::pmr`)

</details>

<details>
<summary><b>🧵 Phase 05: Concurrency, Multithreading & Atomics</b></summary>
<br>

- [ ] Modern thread lifecycle with C++20 `std::jthread` (cooperative cancellation tokens)
- [ ] Mutex synchronization: `std::mutex`, `std::scoped_lock`, and `std::shared_mutex`
- [ ] Condition variables: avoiding spurious wakeups with predicates
- [ ] Lock-free primitives: `std::atomic<T>`, memory orderings (`acquire`, `release`, `relaxed`)
- [ ] Asynchronous task graphs: `std::async`, `std::packaged_task`, `std::future`, `std::promise`
- [ ] Thread-safe bounded Lock-Free Queue implementation

</details>

---

## 📊 STL Container Complexity & Characteristics

| Container | Underlying Model | Random Access | Insertion / Deletion | Cache Locality | Overhead |
| :--- | :--- | :---: | :---: | :---: | :---: |
| `std::vector<T>` | Contiguous Dynamic Array | $\mathcal{O}(1)$ | Back: $\mathcal{O}(1)$ amortized<br>Middle: $\mathcal{O}(n)$ | ⭐⭐⭐⭐⭐ Highest | Low (3 pointers) |
| `std::array<T, N>` | Contiguous Static Stack Array | $\mathcal{O}(1)$ | N/A (Fixed Capacity) | ⭐⭐⭐⭐⭐ Highest | Zero Overhead |
| `std::deque<T>` | Chunked Block Map | $\mathcal{O}(1)$ | Front/Back: $\mathcal{O}(1)$ | ⭐⭐⭐ Good | Medium |
| `std::list<T>` | Doubly-Linked Node List | $\mathcal{O}(n)$ | Any known pos: $\mathcal{O}(1)$ | ⭐ Poor (Node chasing) | High (2 ptrs / node) |
| `std::map<K, V>` | Self-Balancing Red-Black Tree | $\mathcal{O}(\log n)$ | $\mathcal{O}(\log n)$ | ⭐ Poor (Tree pointers) | High (3 ptrs + color) |
| `std::unordered_map<K, V>` | Chained Hash Table Buckets | N/A | Average: $\mathcal{O}(1)$<br>Worst: $\mathcal{O}(n)$ | ⭐⭐ Sub-optimal | High (Buckets + nodes) |

---

## 💡 Idiomatic Code Cookbooks

<details>
<summary><b>🔍 1. Concept-Constrained Template vs SFINAE (Click to expand)</b></summary>

```cpp
#include <concepts>
#include <numeric>
#include <vector>

// Modern C++20: Expressive, short, and produces clean compiler errors
template <typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

template <Numeric T>
[[nodiscard]] auto sum(const std::vector<T>& values) noexcept -> T {
    return std::accumulate(values.begin(), values.end(), T{0});
}
```
</details>

<details>
<summary><b>📦 2. Safe RAII Resource Encapsulation (Click to expand)</b></summary>

```cpp
#include <iostream>
#include <utility>

class FileDescriptor {
    int m_fd = -1;

public:
    explicit FileDescriptor(int fd) noexcept : m_fd(fd) {}
    ~FileDescriptor() noexcept {
        if (m_fd != -1) { /* ::close(m_fd); */ }
    }

    // Disable copy semantics
    FileDescriptor(const FileDescriptor&) = delete;
    FileDescriptor& operator=(const FileDescriptor&) = delete;

    // Enable move semantics (noexcept)
    FileDescriptor(FileDescriptor&& other) noexcept 
        : m_fd(std::exchange(other.m_fd, -1)) {}

    FileDescriptor& operator=(FileDescriptor&& other) noexcept {
        if (this != &other) {
            if (m_fd != -1) { /* ::close(m_fd); */ }
            m_fd = std::exchange(other.m_fd, -1);
        }
        return *this;
    }
};
```
</details>

---

## 💻 Build & Execution Playbook

### 1. Developer Diagnostic Build (Sanitizers Enabled)
Recommended for development. Catches heap corruption, out-of-bounds access, and undefined behavior at runtime:

```bash
g++ -std=c++20 -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Werror \
    -fsanitize=address,undefined -fno-omit-frame-pointer -g \
    main.cpp -o app_debug

./app_debug
```

### 2. High-Performance Benchmark Build
Strips debugging overhead, enables hardware SIMD vectorization, and activates link-time optimizations:

```bash
g++ -std=c++20 -O3 -DNDEBUG -march=native -flto main.cpp -o app_release

./app_release
```

### 3. CMake Out-Of-Source Build Architecture

```bash
# Configure with compile commands for Clangd/Language Server
cmake -B build -S . -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

# Parallel build using all available CPU cores
cmake --build build -j$(nproc 2>/dev/null || sysctl -n hw.ncpu)

# Execute target
./build/bin/practice_runner
```

---

## 🛡️ Sanitizer & Debugging Command Matrix

| Tool | Focus Area | Command / Flags | Actionable Catch |
| :--- | :--- | :--- | :--- |
| **AddressSanitizer (ASan)** | Heap, Stack, Global Bounds | `-fsanitize=address` | Buffer overflows, Use-After-Free, Double-Free |
| **UndefinedBehavior (UBSan)** | Spec Violations | `-fsanitize=undefined` | Integer overflow, null pointer dereference, misaligned memory |
| **ThreadSanitizer (TSan)** | Multithreaded Concurrency | `-fsanitize=thread` | Unsynchronized reads/writes, race hazards |
| **Valgrind Memcheck** | Memory Profiling | `valgrind --leak-check=full --track-origins=yes ./app` | Uninitialized variables, exact memory leak origins |
| **GDB Debugger** | Runtime State Inspection | `gdb -tui ./app` | Core dumps, backtraces, watchpoints, frame inspect |

---

## 📈 Quality & Verification Contract

- [x] Zero compilation warnings under `-Wall -Wextra -Wpedantic -Wconversion`.
- [x] Zero memory leaks verified with AddressSanitizer and Valgrind.
- [x] Move constructors and assignments decorated with `noexcept` to ensure `std::vector` reallocation safety.
- [x] No naked dynamic resource allocation (`new`/`delete` replaced with `std::make_unique` / RAII).
- [x] Const-correct interfaces across all classes and utility functions.

---

<div align="center">

```cpp
/*
 * ============================================
 * [STATUS]: ALL TESTS PASSED
 * [MEMORY]: 0 unfreed bytes (0 allocations active)
 * [SAFETY]: ASan Clean | UBSan Clean | Wall Clean
 * ============================================
 */
```

⭐ **Found this helpful? Star this repository to support the journey!**

</div>
