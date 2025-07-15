#include "files.h"



namespace files {


	std::string get_path_from_file(const std::string& filename)
	{
		if (filename.size() < 5) {
			std::cerr << "\033[31m" << "O nome do arquivo nao foi informado!" << '\n';
			system("pause");
			exit(-1);
		}

		std::filesystem::path cwd = std::filesystem::current_path();
		std::filesystem::path filepath = cwd;

		return filepath.string()
			.append("\\res\\")
			.append(filename);
	}
}
