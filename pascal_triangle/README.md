## 📌 Description

This project implements a function that generates Pascal's Triangle up to a given number of rows.

Pascal's Triangle is a triangular array of numbers where each number is the sum of the two numbers directly above it.

---

## 🧠 Function Prototype

```python
def pascal_triangle(n):
	⚙️ Requirements
	Python 3
	All files must be executable
	The code should follow PEP8 style (pycodestyle)
	🚀 Usage

	Example:

pascal_triangle(5)

	Output:

	[1]
	[1, 1]
	[1, 2, 1]
	[1, 3, 3, 1]
	[1, 4, 6, 4, 1]
	📋 Behavior
	Returns a list of lists of integers
	Each list represents a row in Pascal’s Triangle
	If n <= 0, the function returns an empty list
	🗂️ Project Structure
	pascal_triangle/
	│── 0-pascal_triangle.py
	│── README.md
