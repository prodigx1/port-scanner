#pragma once 
#include <string>

namespace Lib {

    class PortScanner{
        public:
            std::string url_use;


            PortScanner(std::string url_use);  

            void start_socket();
            std::string make_socket();
            std::string connect(std::string port = "8080", std::string family = "AF_INET");            
    };





}

//como eu deveria definir funções de clases deentro dee nameespcaes? e como eu deveria deefinir o comportamento do arquivo do cdoigo da classe.
