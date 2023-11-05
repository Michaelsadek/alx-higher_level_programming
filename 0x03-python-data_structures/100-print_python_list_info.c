#include <Python.h>

/**
 * print_python_list_info - prints basic info about Python lists.
 * @p: A Pyobject list.
 */
void print_python_list_info(Pyobject *p)
{
	int size, alloc, i;
	Pyobjrct *obj;

	size = Py_SIZE(p);
	alloc = ((PyListObject *)P)->allocated;

	printf("[*] size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = o; i < size; i++)
	{
		printf("Element %d: ", i);

		obj = PyList_GetItem(P, i);
		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
