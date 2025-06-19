Voici un exemple complet de **README.md** pour ton projet `menger`, conforme aux attentes Holberton :

---

### 📄 `README.md`

````markdown
# 0x00. Menger Sponge

## Description

This project implements a function to draw a 2D Menger sponge, a fractal pattern based on recursive square subdivision.

The Menger sponge at level `N` is built by dividing a square into 9 equal parts (like a tic-tac-toe board), removing the center square, and recursively repeating the process for each of the remaining 8 squares.

The size of a level `N` sponge is `3^N`.

---

## Requirements

- Ubuntu 14.04 LTS
- `gcc 4.8.4` with the flags: `-Wall -Werror -Wextra -pedantic`
- Code must follow the Betty style
- No global variables allowed
- Max 5 functions per file
- You must include the header file `menger.h` with proper include guards
- You are allowed to use the math library (compiled with `-lm`)

---

## Prototype

```c
void menger(int level);
````

* `level`: the level of the Menger Sponge to print
* If `level < 0`, the function does nothing

---

## Example

```bash
$ ./0-menger 0
#

$ ./0-menger 1
###
# #
###

$ ./0-menger 2
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
```

---

## Files

| File         | Description                        |
| ------------ | ---------------------------------- |
| `0-menger.c` | Function to draw the Menger sponge |
| `menger.h`   | Header file with the prototype     |
| `0-main.c`   | Example main file for testing      |

> ⚠️ Only `0-menger.c` and `menger.h` should be pushed. The `main.c` file is for testing purposes only.

---

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm
```

---

## Author

👤 **Ines Oubabas**
Holberton School –

