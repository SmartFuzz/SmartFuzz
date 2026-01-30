#include <cassert>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <unistd.h>
#include "client.h"
#include "yaml-cpp/yaml.h"
#include <filesystem>
using namespace std;
void start_up(client::DBClient *test_client, std::string startup_cmd){
  
   while (!test_client->check_alive()){
    system(startup_cmd.c_str());
    std::cout << "[INFO] check alive failed,restarting..." << std::endl;
    sleep(1);
  }
}

int main(int argc, char **argv) {
  YAML::Node config = YAML::LoadFile(std::string(argv[1]));
  std::string db_name = config["db"].as<std::string>();
  // client::PostgreSQLClient *test_client = new client::PostgreSQLClient;
  client::DBClient *test_client = client::create_client(db_name, config);
  test_client->initialize(config);

  string test_config ="/home/Squirrel/test_client.yml";
  YAML::Node config2 = YAML::LoadFile(test_config);
  string fuzz_dir=config2["fuzz_dir"].as<std::string>();
  string startup_cmd=config2["startup_cmd"].as<std::string>();
  while(true){
    start_up(test_client, startup_cmd);
  }

 
   
}
