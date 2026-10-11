# Library

A personal library tracker: which books I own, in what format (ebook / physical), and what I've read, am reading, or plan to read.

> **Status:** work in progress, being rebuilt from scratch.

## Planned architecture

- **Desktop client:** native Windows application in C++ (Win32 / MFC)
- **Backend:** small PHP REST API with a MySQL database
- **Design:** repository interface (`IBookRepository`) separating the UI from data access
- **Tests:** Google Test for the core logic

## Why this project?

Built as a portfolio piece to practice native Windows development (MFC, Win32 API) together with SQL-backed persistence, in modern C++ (C++20/23).

## Roadmap

- [x] Database schema
- [ ] Core library (`Book`, `BookManager`, repository)
- [ ] PHP REST API (CRUD)
- [ ] MFC desktop client
- [ ] Unit and integration tests
- [ ] Optional: book search via Google Books API

## License

GPL-3.0
