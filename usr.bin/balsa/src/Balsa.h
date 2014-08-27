/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#ifndef Balsa_H
#define Balsa_H 1
#include <glib.h>
#define ORBIT_IDL_SERIAL 20
#include <orbit/orbit-types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/** typedefs **/
#include <bonobo/Bonobo.h>
#if !defined(ORBIT_DECL_GNOME_Balsa_Composer) && !defined(_GNOME_Balsa_Composer_defined)
#define ORBIT_DECL_GNOME_Balsa_Composer 1
#define _GNOME_Balsa_Composer_defined 1
#define GNOME_Balsa_Composer__freekids CORBA_Object__freekids
typedef CORBA_Object GNOME_Balsa_Composer;
extern CORBA_unsigned_long GNOME_Balsa_Composer__classid;
#if !defined(TC_IMPL_TC_GNOME_Balsa_Composer_0)
#define TC_IMPL_TC_GNOME_Balsa_Composer_0 'B'
#define TC_IMPL_TC_GNOME_Balsa_Composer_1 'a'
#define TC_IMPL_TC_GNOME_Balsa_Composer_2 'l'
#define TC_IMPL_TC_GNOME_Balsa_Composer_3 's'
#define TC_IMPL_TC_GNOME_Balsa_Composer_4 'a'
#ifdef ORBIT_IDL_C_IMODULE_Balsa
static
#else
extern
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_GNOME_Balsa_Composer_struct;
#define TC_GNOME_Balsa_Composer ((CORBA_TypeCode)&TC_GNOME_Balsa_Composer_struct)
#endif
#endif
#if !defined(ORBIT_DECL_CORBA_sequence_CORBA_string)
#define ORBIT_DECL_CORBA_sequence_CORBA_string 1
#define ORBIT_IMPL_CORBA_sequence_CORBA_string_0 'B'
#define ORBIT_IMPL_CORBA_sequence_CORBA_string_1 'a'
#define ORBIT_IMPL_CORBA_sequence_CORBA_string_2 'l'
#define ORBIT_IMPL_CORBA_sequence_CORBA_string_3 's'
#define ORBIT_IMPL_CORBA_sequence_CORBA_string_4 'a'
#if !defined(_CORBA_sequence_CORBA_string_defined)
#define _CORBA_sequence_CORBA_string_defined 1
typedef struct { CORBA_unsigned_long _maximum, _length; CORBA_string* _buffer; CORBA_boolean _release; } CORBA_sequence_CORBA_string;
#endif
#if !defined(TC_IMPL_TC_CORBA_sequence_CORBA_string_0)
#define TC_IMPL_TC_CORBA_sequence_CORBA_string_0 'B'
#define TC_IMPL_TC_CORBA_sequence_CORBA_string_1 'a'
#define TC_IMPL_TC_CORBA_sequence_CORBA_string_2 'l'
#define TC_IMPL_TC_CORBA_sequence_CORBA_string_3 's'
#define TC_IMPL_TC_CORBA_sequence_CORBA_string_4 'a'
#ifdef ORBIT_IDL_C_IMODULE_Balsa
static
#else
extern
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_CORBA_sequence_CORBA_string_struct;
#define TC_CORBA_sequence_CORBA_string ((CORBA_TypeCode)&TC_CORBA_sequence_CORBA_string_struct)
#endif
#define CORBA_sequence_CORBA_string__alloc() ((CORBA_sequence_CORBA_string *)ORBit_small_alloc (TC_CORBA_sequence_CORBA_string))
#define CORBA_sequence_CORBA_string__freekids(m,d) ORBit_small_freekids (TC_CORBA_sequence_CORBA_string,(m),(d))
#define CORBA_sequence_CORBA_string_allocbuf(l) ((CORBA_string*)ORBit_small_allocbuf (TC_CORBA_sequence_CORBA_string, (l)))
#define CORBA_sequence_CORBA_string_allocbuf(l) ((CORBA_string*)ORBit_small_allocbuf (TC_CORBA_sequence_CORBA_string, (l)))
#endif
#if !defined(_GNOME_Balsa_Composer_attachs_defined)
#define _GNOME_Balsa_Composer_attachs_defined 1
typedef CORBA_sequence_CORBA_string GNOME_Balsa_Composer_attachs;
#define GNOME_Balsa_Composer_attachs_marshal(x,y,z) CORBA_sequence_CORBA_string_marshal((x),(y),(z))
#define GNOME_Balsa_Composer_attachs_demarshal(x,y,z,i) CORBA_sequence_CORBA_string_demarshal((x),(y),(z),(i))
#if !defined(TC_IMPL_TC_GNOME_Balsa_Composer_attachs_0)
#define TC_IMPL_TC_GNOME_Balsa_Composer_attachs_0 'B'
#define TC_IMPL_TC_GNOME_Balsa_Composer_attachs_1 'a'
#define TC_IMPL_TC_GNOME_Balsa_Composer_attachs_2 'l'
#define TC_IMPL_TC_GNOME_Balsa_Composer_attachs_3 's'
#define TC_IMPL_TC_GNOME_Balsa_Composer_attachs_4 'a'
#ifdef ORBIT_IDL_C_IMODULE_Balsa
static
#else
extern
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_GNOME_Balsa_Composer_attachs_struct;
#define TC_GNOME_Balsa_Composer_attachs ((CORBA_TypeCode)&TC_GNOME_Balsa_Composer_attachs_struct)
#endif
#define GNOME_Balsa_Composer_attachs__alloc() ((GNOME_Balsa_Composer_attachs *)ORBit_small_alloc (TC_CORBA_sequence_CORBA_string))
#define GNOME_Balsa_Composer_attachs__freekids(m,d) ORBit_small_freekids (TC_CORBA_sequence_CORBA_string,(m),(d))
#define GNOME_Balsa_Composer_attachs_allocbuf(l) ((CORBA_string*)ORBit_small_allocbuf (TC_CORBA_sequence_CORBA_string, (l)))
#endif
#if !defined(ORBIT_DECL_GNOME_Balsa_Application) && !defined(_GNOME_Balsa_Application_defined)
#define ORBIT_DECL_GNOME_Balsa_Application 1
#define _GNOME_Balsa_Application_defined 1
#define GNOME_Balsa_Application__freekids CORBA_Object__freekids
typedef CORBA_Object GNOME_Balsa_Application;
extern CORBA_unsigned_long GNOME_Balsa_Application__classid;
#if !defined(TC_IMPL_TC_GNOME_Balsa_Application_0)
#define TC_IMPL_TC_GNOME_Balsa_Application_0 'B'
#define TC_IMPL_TC_GNOME_Balsa_Application_1 'a'
#define TC_IMPL_TC_GNOME_Balsa_Application_2 'l'
#define TC_IMPL_TC_GNOME_Balsa_Application_3 's'
#define TC_IMPL_TC_GNOME_Balsa_Application_4 'a'
#ifdef ORBIT_IDL_C_IMODULE_Balsa
static
#else
extern
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_GNOME_Balsa_Application_struct;
#define TC_GNOME_Balsa_Application ((CORBA_TypeCode)&TC_GNOME_Balsa_Application_struct)
#endif
#endif

/** POA structures **/
#ifndef _defined_POA_GNOME_Balsa_Composer
#define _defined_POA_GNOME_Balsa_Composer 1
typedef struct {
  void *_private;
void (*sendMessage)(PortableServer_Servant _servant, const CORBA_char * from, const CORBA_char * to, const CORBA_char * cc, const CORBA_char * subject, const GNOME_Balsa_Composer_attachs* attachments, const CORBA_boolean nogui, CORBA_Environment *ev);
} POA_GNOME_Balsa_Composer__epv;
typedef struct {
  PortableServer_ServantBase__epv *_base_epv;
  POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
  POA_GNOME_Balsa_Composer__epv *GNOME_Balsa_Composer_epv;
} POA_GNOME_Balsa_Composer__vepv;
typedef struct {
  void *_private;
  POA_GNOME_Balsa_Composer__vepv *vepv;
} POA_GNOME_Balsa_Composer;
extern void POA_GNOME_Balsa_Composer__init(PortableServer_Servant servant, CORBA_Environment *ev);
extern void POA_GNOME_Balsa_Composer__fini(PortableServer_Servant servant, CORBA_Environment *ev);
#endif /* _defined_POA_GNOME_Balsa_Composer */
#ifndef _defined_POA_GNOME_Balsa_Application
#define _defined_POA_GNOME_Balsa_Application 1
typedef struct {
  void *_private;
void (*checkmail)(PortableServer_Servant _servant, CORBA_Environment *ev);
void (*openMailbox)(PortableServer_Servant _servant, const CORBA_char * name, CORBA_Environment *ev);
void (*openUnread)(PortableServer_Servant _servant, CORBA_Environment *ev);
void (*openInbox)(PortableServer_Servant _servant, CORBA_Environment *ev);
void (*getStats)(PortableServer_Servant _servant, CORBA_long* unread, CORBA_long* unsent, CORBA_Environment *ev);
} POA_GNOME_Balsa_Application__epv;
typedef struct {
  PortableServer_ServantBase__epv *_base_epv;
  POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
  POA_GNOME_Balsa_Application__epv *GNOME_Balsa_Application_epv;
} POA_GNOME_Balsa_Application__vepv;
typedef struct {
  void *_private;
  POA_GNOME_Balsa_Application__vepv *vepv;
} POA_GNOME_Balsa_Application;
extern void POA_GNOME_Balsa_Application__init(PortableServer_Servant servant, CORBA_Environment *ev);
extern void POA_GNOME_Balsa_Application__fini(PortableServer_Servant servant, CORBA_Environment *ev);
#endif /* _defined_POA_GNOME_Balsa_Application */

/** skel prototypes **/
void _ORBIT_skel_small_GNOME_Balsa_Composer_sendMessage(POA_GNOME_Balsa_Composer *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_sendMessage)(PortableServer_Servant _servant, const CORBA_char * from, const CORBA_char * to, const CORBA_char * cc, const CORBA_char * subject, const GNOME_Balsa_Composer_attachs* attachments, const CORBA_boolean nogui, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_Balsa_Application_checkmail(POA_GNOME_Balsa_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_checkmail)(PortableServer_Servant _servant, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_Balsa_Application_openMailbox(POA_GNOME_Balsa_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_openMailbox)(PortableServer_Servant _servant, const CORBA_char * name, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_Balsa_Application_openUnread(POA_GNOME_Balsa_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_openUnread)(PortableServer_Servant _servant, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_Balsa_Application_openInbox(POA_GNOME_Balsa_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_openInbox)(PortableServer_Servant _servant, CORBA_Environment *ev));
void _ORBIT_skel_small_GNOME_Balsa_Application_getStats(POA_GNOME_Balsa_Application *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_getStats)(PortableServer_Servant _servant, CORBA_long* unread, CORBA_long* unsent, CORBA_Environment *ev));

/** stub prototypes **/
#define GNOME_Balsa_Composer_ref Bonobo_Unknown_ref
#define GNOME_Balsa_Composer_unref Bonobo_Unknown_unref
#define GNOME_Balsa_Composer_queryInterface Bonobo_Unknown_queryInterface
void GNOME_Balsa_Composer_sendMessage(GNOME_Balsa_Composer _obj, const CORBA_char * from, const CORBA_char * to, const CORBA_char * cc, const CORBA_char * subject, const GNOME_Balsa_Composer_attachs* attachments, const CORBA_boolean nogui, CORBA_Environment *ev);
#define GNOME_Balsa_Application_ref Bonobo_Unknown_ref
#define GNOME_Balsa_Application_unref Bonobo_Unknown_unref
#define GNOME_Balsa_Application_queryInterface Bonobo_Unknown_queryInterface
void GNOME_Balsa_Application_checkmail(GNOME_Balsa_Application _obj, CORBA_Environment *ev);
void GNOME_Balsa_Application_openMailbox(GNOME_Balsa_Application _obj, const CORBA_char * name, CORBA_Environment *ev);
void GNOME_Balsa_Application_openUnread(GNOME_Balsa_Application _obj, CORBA_Environment *ev);
void GNOME_Balsa_Application_openInbox(GNOME_Balsa_Application _obj, CORBA_Environment *ev);
void GNOME_Balsa_Application_getStats(GNOME_Balsa_Application _obj, CORBA_long* unread, CORBA_long* unsent, CORBA_Environment *ev);
#include <orbit/orb-core/orbit-interface.h>

#ifdef ORBIT_IDL_C_IMODULE_Balsa
static 
#else
extern 
#endif
ORBit_IInterface GNOME_Balsa_Composer__iinterface;
#define GNOME_Balsa_Composer_IMETHODS_LEN 1
#ifdef ORBIT_IDL_C_IMODULE_Balsa
static 
#else
extern 
#endif
ORBit_IMethod GNOME_Balsa_Composer__imethods[GNOME_Balsa_Composer_IMETHODS_LEN];
#ifdef ORBIT_IDL_C_IMODULE_Balsa
static 
#else
extern 
#endif
ORBit_IInterface GNOME_Balsa_Application__iinterface;
#define GNOME_Balsa_Application_IMETHODS_LEN 5
#ifdef ORBIT_IDL_C_IMODULE_Balsa
static 
#else
extern 
#endif
ORBit_IMethod GNOME_Balsa_Application__imethods[GNOME_Balsa_Application_IMETHODS_LEN];

/** IMethods index */

#ifndef __GNOME_Balsa_Composer__imethods_index
#define __GNOME_Balsa_Composer__imethods_index
typedef enum {
	GNOME_Balsa_Composer_sendMessage__imethods_index
} GNOME_Balsa_Composer__imethods_index;
#endif /* __GNOME_Balsa_Composer__imethods_index */

#ifndef __GNOME_Balsa_Application__imethods_index
#define __GNOME_Balsa_Application__imethods_index
typedef enum {
	GNOME_Balsa_Application_checkmail__imethods_index,
	GNOME_Balsa_Application_openMailbox__imethods_index,
	GNOME_Balsa_Application_openUnread__imethods_index,
	GNOME_Balsa_Application_openInbox__imethods_index,
	GNOME_Balsa_Application_getStats__imethods_index
} GNOME_Balsa_Application__imethods_index;
#endif /* __GNOME_Balsa_Application__imethods_index */

#ifndef __ORBIT_IMETHODS_INDEX
#define __ORBIT_IMETHODS_INDEX
#define ORBIT_IMETHODS_INDEX(m) (m ## __imethods_index)
#endif /* __ORBIT_IMETHODS_INDEX */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifndef EXCLUDE_ORBIT_H
#include <orbit/orbit.h>

#endif /* EXCLUDE_ORBIT_H */
#endif
#undef ORBIT_IDL_SERIAL
