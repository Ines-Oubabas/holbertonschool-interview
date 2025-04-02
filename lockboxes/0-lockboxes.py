#!/usr/bin/python3
"""
Module for canUnlockAll function
"""


def canUnlockAll(boxes):
    """
    Determines if all the boxes can be opened
    Args:
        boxes (list of lists): each box contains keys to other boxes
    Returns:
        True if all boxes can be opened, False otherwise
    """
    if not boxes or type(boxes) is not list:
        return False

    total_boxes = len(boxes)
    opened = set([0])  # Start with box 0
    keys = [0]

    while keys:
        current = keys.pop()
        for key in boxes[current]:
            if key not in opened and 0 <= key < total_boxes:
                opened.add(key)
                keys.append(key)

    return len(opened) == total_boxes
