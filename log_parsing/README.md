# Log Parsing

## Description
This project implements a log parser that reads stdin line by line and computes metrics based on given log entries.

## Usage
\`\`\`bash
./0-generator.py | ./0-stats.py
\`\`\`

## Features
- Calculates total file size.
- Counts the number of lines by valid status codes.
- Prints statistics every 10 lines or on keyboard interruption (CTRL+C).

## Input Format
\`\`\`
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>
\`\`\`

- Status codes: \`200, 301, 400, 401, 403, 404, 405, 500\`
- If the input doesn't match the expected format, it is skipped.

## Example
\`\`\`bash
alexa@ubuntu:~/log_parsing$ ./0-generator.py | ./0-stats.py
File size: 5213
200: 2
401: 1
403: 2
404: 1
405: 1
500: 3
\`\`\`

## Requirements
- Python 3.4.3
- PEP 8 style guide
- All files are executable and start with \`#!/usr/bin/python3\`

