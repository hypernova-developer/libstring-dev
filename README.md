# libstring-dev

A dynamic, safe, and efficient String library for C, built on top of **libvector-dev**.

## 🚀 Why libstring-dev?

C-style strings (`char*`) are dangerous and hard to manage. **libstring-dev** leverages the robust dynamic array logic of **libvector-dev** to provide a modern string experience.

## 🛡️ Features

- **Ecosystem Integration:** Uses `Vector_char` as its core engine.
- **Auto-Scaling:** No more buffer overflows. Memory grows as you append.
- **C-Compatible:** Always keeps a null-terminator, so you can use it with `printf`.
- **Liyakat-Driven:** Clean Allman style and English documentation.

## 📦 Requirements

- This library requires `Vector.h` from **libvector-dev** also developed by me, hypernova-developer to be present in the include path. 
