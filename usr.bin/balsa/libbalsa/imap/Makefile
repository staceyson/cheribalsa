#
# $FreeBSD$
#

.include <bsd.own.mk>

BALSA_DISTDIR?= ${.CURDIR}/../../../../contrib/balsa

LIB=    imap

.PATH:          ${BALSA_DISTDIR}/libbalsa/imap
SRCS=		\
		auth-cram.c 		\
		auth-gssapi.c		\
		imap-auth.c		\
		imap-commands.c		\
		imap_compress.c		\
		imap-handle.c		\
		imap_search.c		\
		imap-tls.c		\
		md5-utils.c		\
		pop3.c			\
		siobuf.c		\
		util.c

.PATH:		${.CURDIR}
SRCS+=		libimap-marshal.c

WARNFLAGS=	-Wall -Werror -Wsign-compare -Wpointer-arith -Wnested-externs \
		-Wchar-subscripts -Wuninitialized -Wmissing-prototypes \
		-Wreturn-type -Wdeclaration-after-statement

CFLAGS+=	\
		-I${.CURDIR}					\
		-I${.CURDIR}/..					\
		-I${.CURDIR}/../..				\
		-I${BALSA_DISTDIR}				\
		-I${BALSA_DISTDIR}/libbalsa			\
		-I${BALSA_DISTDIR}/libbalsa/imap		\
		-I/usr/local/include/gmime-2.6			\
		-I/usr/local/include/libgnomeui-2.0		\
		-I/usr/local/include/libbonoboui-2.0		\
		-I/usr/local/include/libgnome-2.0		\
		-I/usr/local/include/libxml2			\
		-I/usr/local/include/libgnomecanvas-2.0 	\
		-I/usr/local/include/gail-1.0			\
		-I/usr/local/include/gtk-2.0 			\
		-I/usr/local/include/gio-unix-2.0/		\
		-I/usr/local/include/atk-1.0			\
		-I/usr/local/include/cairo			\
		-I/usr/local/include/pixman-1			\
		-I/usr/local/include/pango-1.0			\
		-I/usr/local/include/freetype2			\
		-I/usr/local/include/harfbuzz			\
		-I/usr/local/include/gdk-pixbuf-2.0		\
		-I/usr/local/include/libpng15			\
		-I/usr/local/include/gnome-vfs-2.0		\
		-I/usr/local/lib/gnome-vfs-2.0/include		\
		-I/usr/local/include/libart-2.0			\
		-I/usr/local/include/libbonobo-2.0		\
		-I/usr/local/include/bonobo-activation-2.0	\
		-I/usr/local/include/gconf/2			\
		-I/usr/local/include/orbit-2.0			\
		-I/usr/local/include/gnome-keyring-1		\
		-I/usr/local/include/glib-2.0			\
		-I/usr/local/include				\
		-I/usr/local/include/libgtkhtml-3.14		\
		-I/usr/local/include/enchant			\
		-I/usr/local/include/gtkspell-2.0		\
		-DHAVE_CONFIG_H -DORBIT2=1 -O2 $(WARNFLAGS)

#		-DHAVE_CONFIG_H -D_REENTRANT -D_THREAD_SAFE -DORBIT2=1 \

.include <bsd.lib.mk>
.include <bsd.subdir.mk>
