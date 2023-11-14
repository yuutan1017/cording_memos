#include <stdio.h>
#include <winsock2.h>


int main(void)
{
  WSADATA w;
  struct sockaddr_in server, client;

  WSAStartup(MAKEWORD(2, 0), &w);
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  server.sin_addr.s_addr = INADDR_ANY;
  server.sin_port = htons(9999);
  server.sin_family = AF_INET;


  bind(sock, (struct sockaddr *)(&server), sizeof(server));
  listen(sock, 1);

  int len = sizeof(client);
  int sock2 = accept(sock, (struct sockaddr *)(&client), &len);

  char buf[1024];
  recv(sock2, buf, sizeof(buf), 0);

  closesocket(sock);
  closesocket(sock2);
  WSACleanup();
  return 0;
}
