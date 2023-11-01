#include <algorithm>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <vector>
#include "LanguageMap.h"

// Enumeration to represent menu choices
enum MenuChoice
{
	ENTER_DIRECTORY = 1,
	QUIT = 2
};

// Function to count files and subfolders by their associated programming languages
std::pair<std::map<std::string, int>, int> countFilesAndSubfoldersByLanguage(const std::string& directory)
{
	std::map<std::string, int> fileCounts; // Map to store file counts for each language
	int subfolderCount = 0; // Variable to count subfolders

	if (!std::filesystem::is_directory(directory))
	{
		std::cerr << "Error: Directory not found." << std::endl;
		return {fileCounts, subfolderCount}; // Return empty maps if the directory does not exist
	}

	for (const auto& entry : std::filesystem::recursive_directory_iterator(directory))
	{
		if (entry.is_regular_file())
		{
			// Check if the entry is a regular file
			std::string extension = entry.path().extension().string(); // Get the file extension

			// Check if the extension is in the language mapping
			if (languageMap.contains(extension))
			{
				fileCounts[languageMap[extension]]++; // Increment the count for the associated language
			}
		}
		else if (entry.is_directory())
		{
			// Check if the entry is a directory (subfolder)
			subfolderCount++; // Increment the subfolder count
		}
	}

	return {fileCounts, subfolderCount}; // Return the map of file counts by language and subfolder count
}

int main()
{
	while (true)
	{
		std::cout << "File Type Count Program\n";
		std::cout << ENTER_DIRECTORY << ". Enter a directory path\n";
		std::cout << QUIT << ". Quit\n";
		std::cout << "Enter your choice: ";
		int menuChoice;
		std::cin >> menuChoice;
		std::cin.ignore(); // Consume the newline character

		switch (static_cast<MenuChoice>(menuChoice))
		{
		case ENTER_DIRECTORY:
			{
				std::string directory;
				std::cout << "Enter the directory path: ";
				std::getline(std::cin, directory);

				std::map<std::string, int> fileCounts;
				int subfolderCount = 0;

				std::tie(fileCounts, subfolderCount) = countFilesAndSubfoldersByLanguage(directory);

				std::cout << "File Types in " << directory << " (Sorted by Count):\n";

				// Initialize sortedFileCounts here
				std::vector<std::pair<std::string, int>> sortedFileCounts(fileCounts.begin(), fileCounts.end());


				std::sort(sortedFileCounts.begin(), sortedFileCounts.end(), [](const auto& a, const auto& b)
				{
					return a.second > b.second;
				});

				size_t maxFileTypeWidth = 0;
				size_t maxCountWidth = 0;

				for (const auto& entry : sortedFileCounts)
				{
					maxFileTypeWidth = std::max(maxFileTypeWidth, entry.first.length());
					maxCountWidth = std::max(maxCountWidth, std::to_string(entry.second).length());
				}

				maxCountWidth = std::max(maxCountWidth, std::to_string(subfolderCount).length());

				// Table header
				std::cout << std::left << std::setw(maxFileTypeWidth) << "File Type" << std::setw(maxCountWidth) <<
					"Count"
					<< std::endl;
				std::cout << std::setfill('-') << std::setw(maxFileTypeWidth + maxCountWidth) << "" << std::setfill(' ')
					<<
					std::endl;

				for (const auto& entry : sortedFileCounts)
				{
					std::cout << std::left << std::setw(maxFileTypeWidth) << entry.first << std::setw(maxCountWidth) <<
						entry.second << " files" << std::endl;
				}

				// Print the subfolder count
				std::cout << "\nSubfolders: " << subfolderCount << "\n" << std::endl;
				break;
			}

		case QUIT:
			return 0; // Exit the program

		default:
			std::cout << "Invalid choice. Please select " << ENTER_DIRECTORY << " or " << QUIT << ".\n";
			break;
		}
	}
}
