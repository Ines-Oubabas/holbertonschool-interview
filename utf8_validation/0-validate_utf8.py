#!/usr/bin/python3
"""UTF-8 validation module"""


def validUTF8(data):
    """Check if a list of integers is a valid UTF-8 encoding"""
    num_bytes = 0

    for byte in data:
        byte = byte & 0xFF  # On garde les 8 bits de poids faible

        if num_bytes == 0:
            if (byte >> 5) == 0b110:
                num_bytes = 1
            elif (byte >> 4) == 0b1110:
                num_bytes = 2
            elif (byte >> 3) == 0b11110:
                num_bytes = 3
            elif (byte >> 7) != 0:
                return False
        else:
            if (byte >> 6) != 0b10:
                return False
            num_bytes -= 1

    return num_bytes == 0
