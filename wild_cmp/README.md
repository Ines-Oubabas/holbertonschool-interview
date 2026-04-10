# wild_cmp

This project contains a function `wildcmp` that compares two strings recursively.

## Prototype
```c
int wildcmp(char *s1, char *s2);
Description
s2 can contain the special character *
* can replace any string, including an empty string
returns 1 if the strings can be considered identical, otherwise 0
