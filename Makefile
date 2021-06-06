all:
	gcc qstring.c qnet.c -fPIC -shared -o libqlib.so

install:
	install libqlib.so /usr/lib
	install qlib.h /usr/include

clean:
	rm -rf libqlib.so a.out