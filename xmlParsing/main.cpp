#include <iostream>
#include <string>
#include <vector>
//#include "rapidxml.hpp"
//#include "rapidxml_print.hpp"
//#include "rapidxml_utils.hpp"
//#include "rapidxml_iterators.hpp"
#include "FileParser.h"
//#include "TextFile.h"


//std::string nodeTypeToString(rapidxml::node_type _type)
//{
//	std::string returnString{ "" };
//	switch (_type)
//	{
//	case rapidxml::node_document:
//		returnString = "document";
//		break;
//	case rapidxml::node_element:
//		returnString = "element";
//		break;
//	case rapidxml::node_data:
//		returnString = "data";
//		break;
//	case rapidxml::node_cdata:
//		returnString = "cdata";
//		break;
//	case rapidxml::node_comment:
//		returnString = "comment";
//		break;
//	case rapidxml::node_declaration:
//		returnString = "declaration";
//		break;
//	case rapidxml::node_doctype:
//		returnString = "doctype";
//		break;
//	case rapidxml::node_pi:
//		returnString = "pi";
//		break;
//	default:
//		break;
//	}
//	return returnString;
//}

int main()
{

	
	using configFile = Config::ParsedFile;

	std::vector<configFile*> configFileVec;
	Config::FileParser::Parse(Config::AssetType::Font, "xmlconfig.xml", configFileVec);
	for (auto it : configFileVec)
	{
		std::cout << it->name << '\n' << it->key << '\n' << it->filePath << "\n\n";
	}






	
	//:::::::::::::::::::::::::::::::::::::::::::Test 2:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
	//rapidxml::file<> rxmlFile{ "xmlconfig.xml" }; // well now that i learned about this it makes my code.. useless
	//rapidxml::xml_document<> docFromFile;
	//docFromFile.parse<0>(rxmlFile.data());
	//
	//// this works to iterate through all of the font nodes in the file but I'm not sure why i cant just get the
	//// iterator functionality to work in the rapidxml_iterators.h file
	//for (rapidxml::xml_node<> *nd = docFromFile.first_node()->first_node(); nd; nd = nd->next_sibling())
	//{
	//	std::cout << "Fonts in file: " << nd->first_attribute()->value() << " " << std::endl;
	//}
	//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::



	//:::::::::::::::::::::::::::::::::::::::::::Test 1:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
	/*TextFile file;
	file.loadFile("xmlconfig.xml");*/
	//std::cout << file.contents() << std::endl;

	//std::string fileContents{ file.contents() };
	//char* cS;
	//int size = fileContents.size() + 1;
	//cS = new char[size];
	//strcpy_s(cS, size, fileContents.data());
	//

	//rapidxml::xml_document<> doc;
	//std::cout << "type of doc is: " << nodeTypeToString(doc.type()) << std::endl; // document
	//doc.parse<0>(cS);
	//std::cout << "\nFirst node of doc is: " << doc.first_node()->name() << "\n"; // font_pool
	//std::cout << "Type of " << doc.first_node()->name() << " is: " << nodeTypeToString(doc.first_node()->type()) << "\n"; // font_pool // element
	//std::cout << "\nchild of " << doc.first_node()->name() << " is: " << doc.first_node()->first_node()->name() << "\n"; // font_pool // font
	//std::cout << "Type of " << doc.first_node()->first_node()->name() << " is: " << nodeTypeToString(doc.first_node()->first_node()->type()) << "\n"; // font // element
	//std::cout << doc.first_node()->first_node()->name() << " has an attribute called " << doc.first_node()->first_node()->first_attribute()->name() << "\n";
	//std::cout << doc.first_node()->first_node()->first_attribute()->name() << " holds the value " << doc.first_node()->first_node()->first_attribute()->value() << "\n";
	//std::cout << "\n\n\n";

	//auto fontPool = doc.first_node(); 
	//auto firstFont = fontPool->first_node(); 
	//std::string firstFontTitle = firstFont->first_attribute()->value(); 
	//std::string firstFontKey = firstFont->first_node()->value(); 
	//std::string firstFontFilePath = firstFont->first_node()->next_sibling()->value(); 


	//std::cout << fontPool << std::endl; // address of font_pool
	//std::cout << firstFont << std::endl; // address of first_node of font_pool
	//std::cout << firstFontTitle << std::endl; // Nunito-Sans Bold
	//std::cout << firstFontKey << std::endl; // default_font
	//std::cout << firstFontFilePath << std::endl; // the file path of the font .. .. .. 
	//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
	
	


	return 0;
}

/*
node_document
A document node. Name and value are empty.
node_element
An element node. Name contains element name. Value contains text of first data node.
node_data
A data node. Name is empty. Value contains data text.
node_cdata
A CDATA node. Name is empty. Value contains data text.
node_comment
A comment node. Name is empty. Value contains comment text.
node_declaration
A declaration node. Name and value are empty. Declaration parameters (version, encoding and standalone) are in node attributes.
node_doctype
A DOCTYPE node. Name is empty. Value contains DOCTYPE text.
node_pi
A PI node. Name contains target. Value contains instructions.*/