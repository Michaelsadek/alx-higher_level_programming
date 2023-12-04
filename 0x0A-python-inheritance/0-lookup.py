#!/usr/bin/python3
''' Module for lookup method.'''

def lookup(obj):
    '''Looks up object attributes and method.
    Args:
        obj (object): the object to list.

        Return:
            list: the list of attributes.
        '''
        return dir(obj)
