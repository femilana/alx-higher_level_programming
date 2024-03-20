#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints the bytes information
 * @p: the Python Object
 * Return: 0
 */

void print_python_bytes(PyObject *p)
{
	char *stg;
	long int sizes, intg, limit;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	sizez = ((PyVarObject *)(p))->ob_size;
	strg = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", strg);

	if (sizes >= 10)
		limit = 10;
	else
		limit = sizes + 1;

	printf("  first %ld bytes:", limit);

	for (intg = 0; intg < limit; intg++)
		if (stg[intg] >= 0)
			printf(" %02x", stg[intg]);
		else
			printf(" %02x", 256 + stg[intg]);

	printf("\n");
}

/**
 * print_python_list - Prints list of information
 * @p: the Python Object
 * Return: 0
 */

void print_python_list(PyObject *p)
{
	long int size, item;
	PyListObject *list;
	PyObject *obj;

	size = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (item = 0; item < size; item++)
	{
		obj = ((PyListObject *)p)->ob_item[item];
		printf("Element %ld: %s\n", item, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
