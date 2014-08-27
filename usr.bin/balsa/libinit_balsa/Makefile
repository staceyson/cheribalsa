#
# $FreeBSD$
#

.include <bsd.own.mk>

BALSA_DISTDIR?= ${.CURDIR}/../../../contrib/balsa

LIB=    init_balsa

.PATH:          ${BALSA_DISTDIR}/libinit_balsa
SRCS=		\
		assistant_helper.c \
		assistant_init.c \
		assistant_page_defclient.c \
		assistant_page_directory.c \
		assistant_page_finish.c \
		assistant_page_user.c \
		assistant_page_welcome.c

WARNFLAGS=	-Wall -Werror -Wsign-compare -Wpointer-arith -Wnested-externs \
		-Wchar-subscripts -Wuninitialized -Wmissing-prototypes \
		-Wreturn-type -Wdeclaration-after-statement

CFLAGS+=	\
		-I${.CURDIR}/..					\
		-I${BALSA_DISTDIR}				\
		-I${BALSA_DISTDIR}/libbalsa			\
		-I${BALSA_DISTDIR}/src				\
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
		-D_LONGLONG -DHAVE_CONFIG_H -DORBIT2=1 -DGSEAL_ENABLE		\
		-DG_DISABLE_DEPRECATED -DGDK_DISABLE_DEPRECATED			\
		-DGDK_PIXBUF_DISABLE_DEPRECATED -DGMIME_DISABLE_DEPRECATED	\
		-DGNOME_DISABLE_DEPRECATED -DGNOME_DISABLE_DEPRECATED_SOURCE	\
		-DGNOME_VFS_DISABLE_DEPRECATED -DGTK_DISABLE_DEPRECATED		\
		-DNM_DISABLE_DEPRECATED -DPANGO_DISABLE_DEPRECATED		\
		-D_FORTIFY_SOURCE=2 -DGDK_PIXBUF_DISABLE_SINGLE_INCLUDES	\
		-O2 $(WARNFLAGS)

#		-D_LONGLONG -DHAVE_CONFIG_H -D_REENTRANT 		\
#		-D_THREAD_SAFE -DORBIT2=1 -DGSEAL_ENABLE 		\

.include <bsd.lib.mk>
.include <bsd.subdir.mk>
