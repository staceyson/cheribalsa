#
# $FreeBSD$
#

.include <bsd.own.mk>

BALSA_DISTDIR?= ${.CURDIR}/../../../contrib/balsa

LIB=    balsa

.PATH:          ${BALSA_DISTDIR}/libbalsa
SRCS=		\
		abook-completion.c		\
		address-book-extern.c		\
		address-book-gpe.c		\
		address-book-ldap.c		\
		address-book-ldif.c		\
		address-book-rubrica.c		\
		address-book-text.c		\
		address-book-vcard.c		\
		address-book.c			\
		address-view.c			\
		address.c			\
		body.c				\
		cell-renderer-button.c		\
		completion.c			\
		files.c				\
		filter-error.c			\
		filter-file.c			\
		filter-funcs.c			\
		filter.c			\
		folder-scanners.c		\
		gmime-stream-gio.c		\
		html.c				\
		identity.c			\
		imap-server.c			\
		information.c			\
		libbalsa-conf.c			\
		libbalsa-vfs.c			\
		libbalsa.c			\
		macosx-helpers.c		\
		mailbox-filter.c		\
		mailbox.c			\
		mailbox_imap.c			\
		mailbox_local.c			\
		mailbox_maildir.c		\
		mailbox_mbox.c			\
		mailbox_mh.c			\
		mailbox_pop3.c			\
		mailbox_remote.c		\
		message.c			\
		mime-stream-shared.c		\
		mime.c				\
		misc.c				\
		missing_time.c			\
		rfc2445.c			\
		rfc3156.c			\
		send.c				\
		server.c			\
		smtp-server.c			\
		source-viewer.c			\
		url.c

.PATH:		${.CURDIR}
SRCS+=		libbalsa-marshal.c

WARNFLAGS=	-Wall -Werror -Wsign-compare -Wpointer-arith -Wnested-externs \
		-Wchar-subscripts -Wuninitialized -Wmissing-prototypes \
		-Wreturn-type -Wdeclaration-after-statement

CFLAGS+=	\
		-I${.CURDIR}					\
		-I${.CURDIR}/..					\
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
		-D_LONGLONG -DHAVE_CONFIG_H -DGSEAL_ENABLE		\
		-DG_DISABLE_DEPRECATED -DGDK_DISABLE_DEPRECATED 	\
		-DGDK_PIXBUF_DISABLE_DEPRECATED				\
		-DGMIME_DISABLE_DEPRECATED -DGNOME_DISABLE_DEPRECATED 	\
		-DGNOME_DISABLE_DEPRECATED_SOURCE			\
		-DGNOME_VFS_DISABLE_DEPRECATED -DGTK_DISABLE_DEPRECATED \
		-DNM_DISABLE_DEPRECATED -DPANGO_DISABLE_DEPRECATED 	\
		-D_FORTIFY_SOURCE=2 -DGDK_PIXBUF_DISABLE_SINGLE_INCLUDES \
		-DORBIT2=1 -O2 $(WARNFLAGS)

#		-D_REENTRANT -D_THREAD_SAFE -DORBIT2=1	\

.include <bsd.lib.mk>
.include <bsd.subdir.mk>
