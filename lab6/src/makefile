all: client server

dbg: client-dbg server-dbg

client-dbg: client.c libnetfaculty
	gcc -o client-dbg.out client.c -I./libnetfac -L./ -lpthread -lm -lnetfac -g -O0

server-dbg: server.c libnetfaculty
	gcc -o server-dbg.out  server.c -I./libnetfaculty -L./ -lpthread -lm -lnetfaculty -g -O0

client: client.c libnetfaculty
	gcc -o client.out client.c -I./libnetfaculty -L./ -lpthread -lm -lnetfaculty

server: server.c libnetfaculty
	gcc -o server.out server.c -I./libnetfaculty -L./ -lpthread -lm -lnetfaculty

libnetfaculty: ./libnetfaculty/netfaculty.c
	gcc -o ./libnetfaculty/libnetfaculty.o -c ./libnetfaculty/netfaculty.c -I./libnetfaculty
	ar rcs ./libnetfaculty.a ./libnetfaculty/libnetfaculty.o

clean:
	rm -r *.o *.a *.out -f
