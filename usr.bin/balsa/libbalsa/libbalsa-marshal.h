
#ifndef __libbalsa_MARSHAL_H__
#define __libbalsa_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* INT:OBJECT (./libbalsa-marshal.list:5) */
extern void libbalsa_INT__OBJECT (GClosure     *closure,
                                  GValue       *return_value,
                                  guint         n_param_values,
                                  const GValue *param_values,
                                  gpointer      invocation_hint,
                                  gpointer      marshal_data);

/* INT:OBJECT,OBJECT (./libbalsa-marshal.list:6) */
extern void libbalsa_INT__OBJECT_OBJECT (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);

/* INT:POINTER,POINTER,POINTER (./libbalsa-marshal.list:8) */
extern void libbalsa_INT__POINTER_POINTER_POINTER (GClosure     *closure,
                                                   GValue       *return_value,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint,
                                                   gpointer      marshal_data);

/* POINTER:OBJECT (./libbalsa-marshal.list:11) */
extern void libbalsa_POINTER__OBJECT (GClosure     *closure,
                                      GValue       *return_value,
                                      guint         n_param_values,
                                      const GValue *param_values,
                                      gpointer      invocation_hint,
                                      gpointer      marshal_data);

/* POINTER:POINTER,POINTER (./libbalsa-marshal.list:12) */
extern void libbalsa_POINTER__POINTER_POINTER (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);

/* POINTER:VOID (./libbalsa-marshal.list:13) */
extern void libbalsa_POINTER__VOID (GClosure     *closure,
                                    GValue       *return_value,
                                    guint         n_param_values,
                                    const GValue *param_values,
                                    gpointer      invocation_hint,
                                    gpointer      marshal_data);

/* VOID:INT,INT,INT (./libbalsa-marshal.list:14) */
extern void libbalsa_VOID__INT_INT_INT (GClosure     *closure,
                                        GValue       *return_value,
                                        guint         n_param_values,
                                        const GValue *param_values,
                                        gpointer      invocation_hint,
                                        gpointer      marshal_data);

/* VOID:INT,INT,INT,STRING (./libbalsa-marshal.list:15) */
extern void libbalsa_VOID__INT_INT_INT_STRING (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);

/* VOID:OBJECT,BOOLEAN (./libbalsa-marshal.list:16) */
extern void libbalsa_VOID__OBJECT_BOOLEAN (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

/* VOID:POINTER,INT (./libbalsa-marshal.list:17) */
extern void libbalsa_VOID__POINTER_INT (GClosure     *closure,
                                        GValue       *return_value,
                                        guint         n_param_values,
                                        const GValue *param_values,
                                        gpointer      invocation_hint,
                                        gpointer      marshal_data);

G_END_DECLS

#endif /* __libbalsa_MARSHAL_H__ */

