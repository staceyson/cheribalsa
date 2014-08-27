/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Common directories for storing balsa icons. */
#define BALSA_COMMON_PREFIXES "/usr/local", "/usr/local/share/balsa"

/* Directory for storing balsa data files. */
#define BALSA_DATA_PREFIX "/usr/local/share/balsa"

/* Directory for all balsa files. */
#define BALSA_STD_PREFIX "/usr/local"

/* Defined when balsa is to use threads. */
/* #undef BALSA_USE_THREADS */

/* Defines the Balsa version */
#define BALSA_VERSION "2.4.14"

/* Defined when ESTMP support is to be enabled. */
/* #undef ENABLE_ESMTP */

/* Defined when the LDAP support is to be compiled in. */
/* #undef ENABLE_LDAP */

/* always defined to indicate that i18n is enabled */
/* #undef ENABLE_NLS */

/* Defined when touchscreen optimized UI is to be enabled. */
/* #undef ENABLE_TOUCH_UI */

/* The gettext package name. */
#define GETTEXT_PACKAGE "balsa"

/* Path of gpg. */
/* #undef GPG_PATH */

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
/* #undef HAVE_BIND_TEXTDOMAIN_CODESET */

/* Defined when canberra can be used. */
/* #undef HAVE_CANBERRA */

/* Defined when Compface support is requested. */
/* #undef HAVE_COMPFACE */

/* Define to 1 if you have the `ctime_r' function. */
#define HAVE_CTIME_R 1

/* Define to 1 if you have the `dcgettext' function. */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of `ctime_r', and to 0 if you
   don't. */
#define HAVE_DECL_CTIME_R 1

/* Define to 1 if you have the declaration of `gmtime_r', and to 0 if you
   don't. */
#define HAVE_DECL_GMTIME_R 1

/* Define to 1 if you have the declaration of `localtime_r', and to 0 if you
   don't. */
#define HAVE_DECL_LOCALTIME_R 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `gai_strerror' function. */
#define HAVE_GAI_STRERROR 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Defined when GMime version is at least 2.5.7 */
#define HAVE_GMIME_2_5_7 1

/* Defined to build with GMime version 2.5 or 2.6 */
#define HAVE_GMIME_2_6 1

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Defined when gnome libs are available. */
#define HAVE_GNOME 1

/* Defined when gnome-keyring is there. */
#define HAVE_GNOME_KEYRING 1

/* Defined with gnome-keyring-2.24 or newer. */
#define HAVE_GNOME_KEYRING_24 1

/* Defined when gpg is available. */
/* #undef HAVE_GPG */

/* Defined when gpgme is available. */
/* #undef HAVE_GPGME */

/* Defined when GSSAPI support is to be compiled. */
/* #undef HAVE_GSSAPI */

/* Defined when GtkHtml-2 can be used. */
/* #undef HAVE_GTKHTML2 */

/* Defined when GtkHtml-3 can be used. */
#define HAVE_GTKHTML3 1

/* Defined when GtkSourceView can be used. */
/* #undef HAVE_GTKSOURCEVIEW */

/* Defined when GtkSpell can be used. */
#define HAVE_GTKSPELL 1

/* Defined for Heimdal. */
/* #undef HAVE_HEIMDAL */

/* Defined when any HTML widget can be used. */
#define HAVE_HTML_WIDGET 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Defined for langinfo. */
#define HAVE_LANGINFO 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Defined when LDAP lib supports TLS */
/* #undef HAVE_LDAP_TLS */

/* Define to 1 if you have the `aspell' library (-laspell). */
/* #undef HAVE_LIBASPELL */

/* Defined if NetworkManager-glib-devel is found. */
/* #undef HAVE_LIBNM_GLIB */

/* Define to 1 if you have the `pspell' library (-lpspell). */
/* #undef HAVE_LIBPSPELL */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Defined when menus can be integrated into the Mac OS X desktop */
/* #undef HAVE_MACOSX_DESKTOP */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Defined when libnotify can be used. */
#define HAVE_NOTIFY 7

/* Defined when PCRE library is available. */
/* #undef HAVE_PCRE */

/* Defined when res_init is available. */
/* #undef HAVE_RES_INIT */

/* If defined, enable Rubrica2 address book support. */
/* #undef HAVE_RUBRICA */

/* Defined when supporting S/MIME */
/* #undef HAVE_SMIME */

/* Defined when libESMTP has TLS support. */
/* #undef HAVE_SMTP_TLS_CLIENT_CERTIFICATE */

/* If defined, enable GPE address book support. */
/* #undef HAVE_SQLITE */

/* If defined, use sqlite3 api. */
/* #undef HAVE_SQLITE3 */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `domainname' is a member of `struct utsname'. */
/* #undef HAVE_STRUCT_UTSNAME_DOMAINNAME */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Defined when libUnique can be used. */
/* #undef HAVE_UNIQUE */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Defined when WebKit can be used. */
/* #undef HAVE_WEBKIT */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "balsa"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "balsa"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "balsa 2.4.14"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "balsa"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.4.14"

/* Path to sendmail program. */
#define SENDMAIL "/usr/sbin/sendmail"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if fcntl locking should be used. */
#define USE_FCNTL 1

/* Define if flock locking should be used. */
/* #undef USE_FLOCK */

/* Defined when GRegex is to be used. */
/* #undef USE_GREGEX */

/* Defined when SSL support is to be compiled. */
/* #undef USE_SSL */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
/*
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
*/


/* Defined when TLS is to be enabled. */
/* #undef USE_TLS */

/* Version number of package */
#define VERSION "2.4.14"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* We strive for XOPEN compliance */
#define _XOPEN_SOURCE 600

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Redefined to isspace if isblank is not available. */
/* #undef isblank */
