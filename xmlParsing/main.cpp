#include <iostream>
#include <string>
#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml_iterators.hpp"
#include "FileParser.h"
#include "TextFile.h"

int main()
{
	TextFile file;
	file.loadFile("xmlconfig.xml");
	//std::cout << file.contents() << std::endl;
	
	std::string fileContents{ file.contents() };
	char* cS;
	int size = fileContents.size() + 1;
	cS = new char[size];
	strcpy_s(cS, size, fileContents.data());
	

	rapidxml::xml_document<> doc;
	std::cout << "type of doc is: " << doc.type() << std::endl;
	doc.parse<0>(cS);
	std::cout << "Name of my first node is: " << doc.first_node()->name() << "\n";
	std::cout << "Type of first node is: " << doc.first_node()->type() << "\n";

	return 0;
}