#include "../../include/server/chatserver.hpp"
#include <iostream>
using namespace std;

int main()
{
    EventLoop loop;
    //集群时需要更改ip地址与端口号与nginx配置对应
    //客户端对应连接nginx配置的端口号
    InetAddress addr("127.0.0.1",6000);
    ChatServer server(&loop,addr,"ChatServer");

    server.start();
    loop.loop();

    return 0;
}