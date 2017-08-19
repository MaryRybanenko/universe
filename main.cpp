#include"base_card.h"
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

#include <fstream>
#include <iostream>
#include <string>

int main()
{
	std::ifstream ifs("E:\\current_prog_c++\\universe\\data\\info.json");
	boost::property_tree::ptree pt;
	boost::property_tree::read_json(ifs, pt);
	std::string id(pt.get<std::string>("responseData.id"));
	std::cout << id << std::endl;
	for (auto search_result : pt.get_child("responseData.results"))
		std::cout << search_result.second.get<std::string>("unescapedUrl") << std::endl;

	return 0;
}