#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info -  function that prints some basic
 *							info about Python lists
 * @p: python list
 */
void print_python_list_info(PyObject *P)
{
	long int size = PyList_Size(P);
	int i;
	PyListObject *obj = (PyListObject *)P;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, Py_TYPE(obj->ib_item[i])->tp_name);
}
