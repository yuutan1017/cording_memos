#include <stdio.h>
#include <winsock2.h>


int main(void)
{  
  WSADATA w;

  // 接続先のサーバー情報を保存するための構造体
  struct sockaddr_in server;

  // Windowsでソケットを使用する場合のライブラリの初期化  
  WSAStartup(MAKEWORD(2, 0), &w);

  // socket(通信プロトコル, 通信方式, プロトコル)
  int sock = socket(AF_INET, SOCK_STREAM, 0);

  // serverのIPアドレスを指定
  // とりあえずループバック
  server.sin_addr.s_addr = inet_addr("127.0.0.1");

  // serverのポート番号
  server.sin_port = htons(9999);

  // IPv4 
  server.sin_family = AF_INET;


  connect(sock, (struct sockaddr *)(&server), sizeof(server));
  char buf[1024] = "socket test by client side";
  send(sock, buf, sizeof(buf), 0);


  // 後処理
  closesocket(sock);
  WSACleanup;
  return 0;
}
