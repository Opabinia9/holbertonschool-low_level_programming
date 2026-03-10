/**
 * print_name - print name using passed function
 * @name: name to pass to f
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
