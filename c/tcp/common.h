int sendall(int sockfd, char *buff, size_t len, int flags);
int recvall(int sockfd, char *buff, size_t len, int flags);
char *get_host_port_ipv4(struct sockaddr *ai_addr);

int proto_send(int sockfd, char *message);
char *proto_recv(int sockfd);
