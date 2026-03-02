# 📘 Doxygen GH Pages Generator

![License](https://img.shields.io/badge/license-MIT-green)
![Language](https://img.shields.io/badge/language-C-blue)
![Docs](https://img.shields.io/badge/docs-Doxygen-orange)
![Build](https://img.shields.io/badge/build-Makefile-yellow)
![Build Status](https://github.com/viralpatel9/doxygen-git-generator/actions/workflows/doxygen.yml/badge.svg)

---

## 📖 Overview
This project demonstrates a simple **C program documented with Doxygen**, designed to show how source code documentation can be automatically generated and published.

It is intended as a minimal, beginner-friendly example for:

- Learning Doxygen syntax
- Generating HTML documentation
- Structuring documented C projects
- Publishing docs via GitHub Pages

---

## ✨ Features
- Example arithmetic functions:
  - `sum`
  - `subtract`
  - `multiply`
  - `divide`
- Fully documented using **Doxygen comments**
- Simple build system using **Makefile**
- Easy documentation generation workflow

---

## 🚀 Getting Started

### 🔧 Build
Compile the program:

```sh
make
```

### ▶️ Run
Execute the compiled binary:
```sh
make run
```

### 🧹 Clean
Remove compiled files:
```sh
make clean
```
### 📚 Generate Documentation
Make sure **Doxygen** is installed and your `Doxyfile` is configured, then run:
```sh
doxygen Doxyfile
```
Generated documentation will be available as HTML pages.

## 📁 Project Structure
```tree
.
├── src/
│   └── main.c
├── Makefile
├── Doxyfile
└── README.md
```
| File                  |           Description                      |
| --------------------- | ------------------------------------------ |
| `src/main.c`          | Example C source with documented functions |
| `Makefile`            | Build automation commands                  |
| `Doxyfile`            | Doxygen configuration                      |
| `README.md`           | Project documentation                      |

## ⚠️ Note
Documentation deployment via Pages works only if the repository is:
- Public **OR**
- Private with Pages enabled via a supported plan

## 📜 License
This project is licensed under the [**MIT License**](./LICENSE) — feel free to use, modify, and distribute.