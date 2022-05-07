#include <iostream>

int	main(int argc, char *argv[])
{
	(void) argc;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int cur = 1; argv[cur] != NULL; ++cur)
		{
			for (int acur = 0; argv[cur][acur]; acur++)
				argv[cur][acur] = std::toupper(argv[cur][acur]);
			std::cout << argv[cur];
		}
		std::cout << std::endl;
	}
}
