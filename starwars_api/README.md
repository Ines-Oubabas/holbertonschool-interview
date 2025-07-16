# Star Wars API

This project is part of the Holberton School curriculum.  
It uses the Star Wars API (SWAPI) to retrieve and display data about characters from a specific Star Wars movie.

---

## 📋 Description

The goal of this project is to write a Node.js script that consumes a RESTful API and displays a list of Star Wars characters based on a movie ID.  
You must use the [`request`](https://www.npmjs.com/package/request) module to make HTTP requests to the API.

---

## 📁 Files

| Filename                   | Description                                     |
|---------------------------|-------------------------------------------------|
| `0-starwars_characters.js` | Fetches and prints all characters of a Star Wars movie based on the given ID. |

---

## 🛠️ Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files should end with a new line
- The first line of all your files should be: `#!/usr/bin/node`
- Code must be semistandard compliant (Rules of Standard + semicolons)
- All files must be executable
- No use of `var` allowed (use `const` or `let` only)

---

## 🚀 Installation

### Install Node.js version 10:
```bash
curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
sudo apt-get install -y nodejs

Install semistandard:
bash
Copier le code
sudo npm install semistandard --global
Install request module:
bash
Copier le code
sudo npm install request --global
export NODE_PATH=/usr/lib/node_modules
📌 Usage
bash
Copier le code
./0-starwars_characters.js <movie_id>
Example:

bash
Copier le code
./0-starwars_characters.js 3
Expected output (shortened):

python-repl
Copier le code
Luke Skywalker
C-3PO
R2-D2
Darth Vader
Leia Organa
...
🌐 API Reference
Base URL: https://swapi-api.hbtn.io/api/

Film endpoint: /films/:id/

Characters endpoint: List of URLs in characters field of each film

✅ Example of logic
Get film details with /films/:id/

Extract the array characters

For each URL in the array, make a request and print the character's name

Preserve order of appearance

👩‍💻 Author
By Ines Oubabas, Student at Holberton School
