#include "main.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	ifs_file(argv[1]);
		std::ofstream	outfile;
		std::string		out;
		std::string		filename;
		std::string		s1;
		std::string		s2;
		std::string		temp;
		std::string		result;

		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		if (!ifs_file.is_open())
		{
			std::cout << "Unable to open a file" << std::endl;
			return (1);
		}
		if (!filename.length() || !s1.length() || !s2.length())
		{
			std::cout << "ERROR: Bad arguments" << std::endl;
			return (1);
		}
		
		size_t	pos = 0;
		size_t	index = 0;
		int		line = 0;
		out = filename + ".replace";
		outfile.open(out, std::ios_base::app);
		while (std::getline(ifs_file, temp))
		{
			if (line)
				outfile << "\n";
			pos = temp.find(s1, 0);
			while (pos != std::string::npos)
			{
				result += temp.substr(index, pos - index) + s2;
				index = pos + s1.length();
				pos = temp.find(s1, pos + 1);
			}	
			if (index < temp.length())
				result += temp.substr(index, temp.length());
			line = 1;
			outfile << result;
			result = "";
			index = 0;
		}
		ifs_file.close();
		outfile.close();
	}
	else
		std::cout << "ERROR: Bad arguments" << std::endl;
	return (0);
}