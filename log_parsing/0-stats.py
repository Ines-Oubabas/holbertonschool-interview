#!/usr/bin/python3
"""Log parsing script"""

import sys


def print_stats(total_size, status_codes):
    """Prints the accumulated statistics"""
    print("File size: {}".format(total_size))
    for code in sorted(status_codes.keys()):
        print("{}: {}".format(code, status_codes[code]))


if __name__ == "__main__":
    total_size = 0
    status_codes = {}
    valid_codes = ['200', '301', '400', '401', '403', '404', '405', '500']
    line_count = 0

    try:
        for line in sys.stdin:
            line_count += 1
            parts = line.strip().split()

            if len(parts) >= 7:
                status_code = parts[-2]
                try:
                    file_size = int(parts[-1])
                    total_size += file_size
                except ValueError:
                    continue

                if status_code in valid_codes:
                    status_counts = status_codes.get(status_code, 0)
                    status_codes[status_code] = status_counts + 1

            if line_count % 10 == 0:
                print_stats(total_size, status_codes)

    except KeyboardInterrupt:
        print_stats(total_size, status_codes)
        raise

    print_stats(total_size, status_codes)
