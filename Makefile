CFLAGS+= -Wall
LDADD+= -lX11 
LDFLAGS=
EXEC=tigerwm

PREFIX?= /usr
BINDIR?= $(PREFIX)/bin

CC=gcc

all: $(EXEC)

tigerwm: tigerwm.o
	$(CC) $(LDFLAGS) -Os -o $@ $+ $(LDADD)

install: all
	install -Dm 755 tigerwm $(DESTDIR)$(BINDIR)/tigerwm

clean:
	rm -f tigerwm *.o
