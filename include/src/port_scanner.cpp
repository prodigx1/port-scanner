
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <string>
#include <vector>

#include "../port_scanner.hpp"
#pragma comment(lib, "ws2_32.lib")





/*
    CODIGO PARA USAR COMO REFERENCIA PARA BILDAR O CODIGO PRINCIPAL
int main()
{
    WSADATA wsa;



    #inicinado winsockts api
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
    {
        std::cout << "Erro ao iniciar Winsock\n";
        return 1;
    }


    #criando sockeet
    SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    #revisaando eerro daa winsockt
    if (sock == INVALID_SOCKET)
    {
        std::cout << "Erro ao criar socket\n";
        WSACleanup();
        return 1;
    }

    #definindo informações
    sockaddr_in server{};
    server.sin_family = AF_INET;
    server.sin_port = htons(443);


    inet_pton(AF_INET, "142.250.190.78", &server.sin_addr);
    // IP do google (exemplo)

    std::cout << "Tentando conectar...\n";



    #connectando e recebeendo resposta
    if (connect(sock, (sockaddr*)&server, sizeof(server)) == 0)
    {
        std::cout << "Conexao realizada!\n";
    }
    else
    {
        std::cout << "Falha.\n";
        std::cout << "Erro: " << WSAGetLastError() << '\n';
    }
    
    #feechando.
    closesocket(sock);
    WSACleanup();
}



*/
