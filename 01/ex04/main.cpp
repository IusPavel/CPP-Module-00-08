#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		content;
	size_t			position;

	if (argc != 4)
	{
		std::cout << "3 arguments are needed. 1st - filename, 2nd and 3rd - strings" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "error: invalid arguments" << std::endl;
		return (1);
	}
	ifs.open(filename);
	if (!ifs)
	{
		std::cout << "The file " << filename << " can't be opened" << std::endl;
		return (1);
	}
	ofs.open(filename.append(".replace"));
	if (!ofs)
	{
		std::cout << "The file " << filename << " can't be opened or created" << std::endl;
		return (1);
	}
	position = 0;
	std::getline(ifs, content, '\0');
	while (1)
	{

		position = content.find(s1, position);
		if (position == std::string::npos)
			break ;
		content.erase(position, s1.length());
		content.insert(position, s2);
		position += s2.length();
	}
	ofs << content;
	ifs.close();
	ofs.close();
	return (0);
}