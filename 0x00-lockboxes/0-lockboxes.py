#!/usr/bin/python3
"""
You have n number of locked boxes in front of you. Each box is
numbered sequentially from 0 to n - 1 and each box may contain
keys to the other boxes.
Write a method that determines if all the boxes can be opened.
"""

def canUnlockAll(boxes):
    """You have n number of locked boxes in front of you.
    Each box is numbered sequentially from 0 to n - 1 
    and each box may contain keys to the other boxes.

    Write a method that determines if all the boxes 
    can be opened.

    Args:
        boxes (list of lists): A key with the same number 
        as a box opens that box and The first box boxes[0]
        is unlocked.

    Returns:
        [boolean]: True if all boxes can be opened, 
        else return False.
    """
    keys = [0]
    for key in keys:
        for bKey in boxes[key]:
            if bKey not in keys and bKey < len(boxes):
                keys.append(bKey)

    if len(keys) == len(boxes):
        return True
    return False
