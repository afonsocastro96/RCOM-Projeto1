#ifndef __LINKLAYER
#define __LINKLAYER

#define TRANSMITTER 0
#define RECEIVER 1

typedef LinkLayer_t * LinkLayer;

int llopen(int port, int flag);
int llclose(int fd, int flag);

#endif // __LINKLAYER