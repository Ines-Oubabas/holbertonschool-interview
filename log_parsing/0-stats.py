#!/usr/bin/python3
import sys
import re
from collections import defaultdict

def print_stats(total_size, status_counts):
    print("File size: {}".format(total_size))
    for code in sorted(status_counts.keys()):
        print("{}: {}".format(code, status_counts[code]))

if __name__ == "__main__":
    total_size = 0
    status_counts = defaultdict(int)
    line_count = 0

    valid_status_codes = {'200', '301', '400', '401', '403', '404', '405', '500'}
    line_pattern = re.compile(
        r'^\d{1,3}(\.\d{1,3}){3} - \[.*\] "GET /projects/260 HTTP/1.1" (\d{3}) (\d+)$'
    )

    try:
        for line in sys.stdin:
            line = line.strip()
            match = line_pattern.match(line)
            if match:
                status_code = match.group(2)
                file_size = int(match.group(3))
                total_size += file_size

                if status_code in valid_status_codes:
                    status_counts[status_code] += 1

            line_count += 1
            if line_count % 10 == 0:
                print_stats(total_size, status_counts)

    except KeyboardInterrupt:
        print_stats(total_size, status_counts)
        raise

    print_stats(total_size, status_counts)
