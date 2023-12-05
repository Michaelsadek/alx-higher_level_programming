#!/usr/bin/python3
"""contains the clas "student"""

class student:
    """Representation of a student"""
    def __int__(self, first_name, last_name, age):
        """Initializes the student"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

        def to_json(self):
            """return a dictionary representation of a student instance"""
            return self.__dict__

