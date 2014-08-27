#
# $FreeBSD$
#

.include <bsd.own.mk>

BALSA_DISTDIR?= ${.CURDIR}/../../../contrib/balsa

PROG= balsa

MAN=

LDADD=		\
		${.CURDIR}/../libinit_balsa/libinit_balsa.a			\
		${.CURDIR}/../libbalsa/libbalsa.a	 			\
		${.CURDIR}/../libbalsa/imap/libimap.a				\
		-L/usr/local/lib 						\
		-lgmime-2.6 -lgnomeui-2 -lSM -lICE -lbonoboui-2 -lgnome-2	\
		-lpopt -lgnomecanvas-2 -lart_lgpl_2 -lgnomevfs-2 -lbonobo-2	\
		-lbonobo-activation -lgnome-keyring -lgtkhtml-3.14 -lgconf-2	\
		-lORBit-2 -lgthread-2.0 -lnotify -lgtkspell -lgtk-x11-2.0 	\
		-lgdk-x11-2.0 -lpangocairo-1.0 -lXext -lXrender -lXinerama	\
		-lXi -lXrandr -lXcursor -lXcomposite -lXdamage -lXfixes		\
		-lX11 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 \
		-lpango-1.0 -lgobject-2.0 -lffi -lfontconfig -lfreetype		\
		-lenchant -lgmodule-2.0 -lglib-2.0 -liconv -lpcre -lintl -lz

.PATH:          ${BALSA_DISTDIR}/src
SRCS=		\
		address-book-config.c			\
		ab-window.c				\
		balsa-app.c				\
		balsa-icons.c				\
		balsa-index.c				\
		balsa-mblist.c				\
		balsa-message.c				\
		balsa-mime-widget.c			\
		balsa-mime-widget-callbacks.c		\
		balsa-mime-widget-crypto.c		\
		balsa-mime-widget-image.c		\
		balsa-mime-widget-message.c		\
		balsa-mime-widget-multipart.c		\
		balsa-mime-widget-text.c		\
		balsa-mime-widget-vcalendar.c		\
		balsa-cite-bar.c			\
		filter-edit-callbacks.c			\
		filter-edit-dialog.c			\
		filter-export-callbacks.c		\
		filter-export-dialog.c			\
		filter-run-callbacks.c			\
		filter-run-dialog.c			\
		folder-conf.c				\
		information-dialog.c			\
		mailbox-conf.c				\
		mailbox-node.c				\
		main-window.c				\
		main.c					\
		message-window.c			\
		pref-manager.c				\
		quote-color.c				\
		save-restore.c				\
		sendmsg-window.c			\
		store-address.c				\
		toolbar-factory.c			\
		toolbar-prefs.c				\
		balsa-bonobo.c				\
		print-gtk.c				\
		balsa-print-object.c			\
		balsa-print-object-decor.c		\
		balsa-print-object-default.c		\
		balsa-print-object-header.c		\
		balsa-print-object-image.c		\
		balsa-print-object-text.c

.PATH:		${.CURDIR}
SRCS+=		\
		Balsa-common.c				\
		Balsa-skels.c				\
		Balsa-stubs.c

INCLUDES=	\
		-I${.CURDIR}				\
		-I${.CURDIR}/..				\
		-I${BALSA_DISTDIR}			\
		-I${BALSA_DISTDIR}/src			\
		-I${BALSA_DISTDIR}/libbalsa		\
		-I/usr/local/include/gmime-2.6		\
		-I/usr/local/include/libgnomeui-2.0	\
		-I/usr/local/include/libbonoboui-2.0	\
		-I/usr/local/include/libgnome-2.0	\
		-I/usr/local/include/libxml2		\
		-I/usr/local/include/libgnomecanvas-2.0	\
		-I/usr/local/include/gail-1.0		\
		-I/usr/local/include/gtk-2.0		\
		-I/usr/local/include/gio-unix-2.0	\
		-I/usr/local/include/atk-1.0		\
		-I/usr/local/include/cairo		\
		-I/usr/local/include/pixman-1		\
		-I/usr/local/include/pango-1.0		\
		-I/usr/local/include/freetype2		\
		-I/usr/local/include/harfbuzz		\
		-I/usr/local/include/gdk-pixbuf-2.0	\
		-I/usr/local/include/libpng15		\
		-I/usr/local/include/gnome-vfs-2.0	\
		-I/usr/local/lib/nome-vfs-2.0/include	\
		-I/usr/local/include/libart-2.0		\
		-I/usr/local/include/libbonobo-2.0	\
		-I/usr/local/include/bonobo-activation-2.0 \
		-I/usr/local/include/gconf/2		\
		-I/usr/local/include/orbit-2.0		\
		-I/usr/local/include/gnome-keyring-1	\
		-I/usr/local/include/glib-2.0		\
		-I/usr/local/include			\
		-I/usr/local/include/libgtkhtml-3.14	\
		-I/usr/local/include/enchant		\
		-I/usr/local/include/gtkspell-2.0


OPTIONS=	-DHAVE_CONFIG_H		\
		-DGNOMELOCALEDIR="/usr/local/share/locale" \
		-DGSEAL_ENABLE -DG_DISABLE_DEPRECATED	\
		-DGDK_DISABLE_DEPRECATED		\
		-DGDK_PIXBUF_DISABLE_DEPRECATED		\
		-DGMIME_DISABLE_DEPRECATED		\
		-DGNOME_DISABLE_DEPRECATED		\
		-DGNOME_DISABLE_DEPRECATED_SOURCE	\
		-DGNOME_VFS_DISABLE_DEPRECATED		\
		-DGTK_DISABLE_DEPRECATED		\
		-DNM_DISABLE_DEPRECATED			\
		-DPANGO_DISABLE_DEPRECATED		\
		-D_FORTIFY_SOURCE=2			\
		-DGDK_PIXBUF_DISABLE_SINGLE_INCLUDES	\
		-DORBIT2=1

#		-D_REENTRANT -D_THREAD_SAFE -DORBIT2=1  \

CFLAGS+=	$(INCLUDES) -D_LONGLONG $(OPTIONS) $(WARNFLAGS)

.include <bsd.prog.mk>

#.c.o
#	${CC} ${STATIC_CFLAGS} ${CFLAGS} -c ${.IMPSRC} -o ${.TARGET}

