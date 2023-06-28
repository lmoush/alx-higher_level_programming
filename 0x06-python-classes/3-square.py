#!/usr/bin/python3
"""hehehehe class Square"""


class Square:
    """ehm is a square
    Attributes:
        __size (int): size of a side of the square
    """
    def __init__(self, size=0):
        """lmoush square to the best
        Args:
            size (int): size of a side of the square
        Returns:
            None
        """
        if type(size) is not int:
            raise TypeError("size must be an integer")
        else:
            if size < 0:
                raise ValueError("size must be >= 0")
            else:
                self.__size = size

    def area(self):
        """lmoush calcul square
        Returns:
            lmoush of the square
        """
        return (self.__size) ** 2
