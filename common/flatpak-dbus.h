/*
 * Generated by gdbus-codegen 2.49.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef ____COMMON_FLATPAK_DBUS_H__
#define ____COMMON_FLATPAK_DBUS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.Flatpak.SessionHelper */

#define FLATPAK_TYPE_SESSION_HELPER (flatpak_session_helper_get_type ())
#define FLATPAK_SESSION_HELPER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), FLATPAK_TYPE_SESSION_HELPER, FlatpakSessionHelper))
#define FLATPAK_IS_SESSION_HELPER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), FLATPAK_TYPE_SESSION_HELPER))
#define FLATPAK_SESSION_HELPER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), FLATPAK_TYPE_SESSION_HELPER, FlatpakSessionHelperIface))

struct _FlatpakSessionHelper;
typedef struct _FlatpakSessionHelper FlatpakSessionHelper;
typedef struct _FlatpakSessionHelperIface FlatpakSessionHelperIface;

struct _FlatpakSessionHelperIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_request_monitor) (
    FlatpakSessionHelper *object,
    GDBusMethodInvocation *invocation);

};

GType flatpak_session_helper_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *flatpak_session_helper_interface_info (void);
guint flatpak_session_helper_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void flatpak_session_helper_complete_request_monitor (
    FlatpakSessionHelper *object,
    GDBusMethodInvocation *invocation,
    const gchar *path);



/* D-Bus method calls: */
void flatpak_session_helper_call_request_monitor (
    FlatpakSessionHelper *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean flatpak_session_helper_call_request_monitor_finish (
    FlatpakSessionHelper *proxy,
    gchar **out_path,
    GAsyncResult *res,
    GError **error);

gboolean flatpak_session_helper_call_request_monitor_sync (
    FlatpakSessionHelper *proxy,
    gchar **out_path,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define FLATPAK_TYPE_SESSION_HELPER_PROXY (flatpak_session_helper_proxy_get_type ())
#define FLATPAK_SESSION_HELPER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), FLATPAK_TYPE_SESSION_HELPER_PROXY, FlatpakSessionHelperProxy))
#define FLATPAK_SESSION_HELPER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), FLATPAK_TYPE_SESSION_HELPER_PROXY, FlatpakSessionHelperProxyClass))
#define FLATPAK_SESSION_HELPER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), FLATPAK_TYPE_SESSION_HELPER_PROXY, FlatpakSessionHelperProxyClass))
#define FLATPAK_IS_SESSION_HELPER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), FLATPAK_TYPE_SESSION_HELPER_PROXY))
#define FLATPAK_IS_SESSION_HELPER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), FLATPAK_TYPE_SESSION_HELPER_PROXY))

typedef struct _FlatpakSessionHelperProxy FlatpakSessionHelperProxy;
typedef struct _FlatpakSessionHelperProxyClass FlatpakSessionHelperProxyClass;
typedef struct _FlatpakSessionHelperProxyPrivate FlatpakSessionHelperProxyPrivate;

struct _FlatpakSessionHelperProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  FlatpakSessionHelperProxyPrivate *priv;
};

struct _FlatpakSessionHelperProxyClass
{
  GDBusProxyClass parent_class;
};

GType flatpak_session_helper_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (FlatpakSessionHelperProxy, g_object_unref)
#endif

void flatpak_session_helper_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
FlatpakSessionHelper *flatpak_session_helper_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
FlatpakSessionHelper *flatpak_session_helper_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void flatpak_session_helper_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
FlatpakSessionHelper *flatpak_session_helper_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
FlatpakSessionHelper *flatpak_session_helper_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define FLATPAK_TYPE_SESSION_HELPER_SKELETON (flatpak_session_helper_skeleton_get_type ())
#define FLATPAK_SESSION_HELPER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), FLATPAK_TYPE_SESSION_HELPER_SKELETON, FlatpakSessionHelperSkeleton))
#define FLATPAK_SESSION_HELPER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), FLATPAK_TYPE_SESSION_HELPER_SKELETON, FlatpakSessionHelperSkeletonClass))
#define FLATPAK_SESSION_HELPER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), FLATPAK_TYPE_SESSION_HELPER_SKELETON, FlatpakSessionHelperSkeletonClass))
#define FLATPAK_IS_SESSION_HELPER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), FLATPAK_TYPE_SESSION_HELPER_SKELETON))
#define FLATPAK_IS_SESSION_HELPER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), FLATPAK_TYPE_SESSION_HELPER_SKELETON))

typedef struct _FlatpakSessionHelperSkeleton FlatpakSessionHelperSkeleton;
typedef struct _FlatpakSessionHelperSkeletonClass FlatpakSessionHelperSkeletonClass;
typedef struct _FlatpakSessionHelperSkeletonPrivate FlatpakSessionHelperSkeletonPrivate;

struct _FlatpakSessionHelperSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  FlatpakSessionHelperSkeletonPrivate *priv;
};

struct _FlatpakSessionHelperSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType flatpak_session_helper_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (FlatpakSessionHelperSkeleton, g_object_unref)
#endif

FlatpakSessionHelper *flatpak_session_helper_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.Flatpak.SystemHelper */

#define FLATPAK_TYPE_SYSTEM_HELPER (flatpak_system_helper_get_type ())
#define FLATPAK_SYSTEM_HELPER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), FLATPAK_TYPE_SYSTEM_HELPER, FlatpakSystemHelper))
#define FLATPAK_IS_SYSTEM_HELPER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), FLATPAK_TYPE_SYSTEM_HELPER))
#define FLATPAK_SYSTEM_HELPER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), FLATPAK_TYPE_SYSTEM_HELPER, FlatpakSystemHelperIface))

struct _FlatpakSystemHelper;
typedef struct _FlatpakSystemHelper FlatpakSystemHelper;
typedef struct _FlatpakSystemHelperIface FlatpakSystemHelperIface;

struct _FlatpakSystemHelperIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_configure_remote) (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation,
    guint arg_flags,
    const gchar *arg_remote,
    const gchar *arg_config,
    GVariant *arg_gpg_key);

  gboolean (*handle_deploy) (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_repo_path,
    guint arg_flags,
    const gchar *arg_ref,
    const gchar *arg_origin,
    const gchar *const *arg_subpaths);

  gboolean (*handle_deploy_appstream) (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_repo_path,
    const gchar *arg_origin,
    const gchar *arg_arch);

  gboolean (*handle_install_bundle) (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_bundle_path,
    guint arg_flags,
    GVariant *arg_gpg_key);

  gboolean (*handle_uninstall) (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation,
    guint arg_flags,
    const gchar *arg_ref);

};

GType flatpak_system_helper_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *flatpak_system_helper_interface_info (void);
guint flatpak_system_helper_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void flatpak_system_helper_complete_deploy (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation);

void flatpak_system_helper_complete_deploy_appstream (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation);

void flatpak_system_helper_complete_uninstall (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation);

void flatpak_system_helper_complete_install_bundle (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation,
    const gchar *ref);

void flatpak_system_helper_complete_configure_remote (
    FlatpakSystemHelper *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void flatpak_system_helper_call_deploy (
    FlatpakSystemHelper *proxy,
    const gchar *arg_repo_path,
    guint arg_flags,
    const gchar *arg_ref,
    const gchar *arg_origin,
    const gchar *const *arg_subpaths,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean flatpak_system_helper_call_deploy_finish (
    FlatpakSystemHelper *proxy,
    GAsyncResult *res,
    GError **error);

gboolean flatpak_system_helper_call_deploy_sync (
    FlatpakSystemHelper *proxy,
    const gchar *arg_repo_path,
    guint arg_flags,
    const gchar *arg_ref,
    const gchar *arg_origin,
    const gchar *const *arg_subpaths,
    GCancellable *cancellable,
    GError **error);

void flatpak_system_helper_call_deploy_appstream (
    FlatpakSystemHelper *proxy,
    const gchar *arg_repo_path,
    const gchar *arg_origin,
    const gchar *arg_arch,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean flatpak_system_helper_call_deploy_appstream_finish (
    FlatpakSystemHelper *proxy,
    GAsyncResult *res,
    GError **error);

gboolean flatpak_system_helper_call_deploy_appstream_sync (
    FlatpakSystemHelper *proxy,
    const gchar *arg_repo_path,
    const gchar *arg_origin,
    const gchar *arg_arch,
    GCancellable *cancellable,
    GError **error);

void flatpak_system_helper_call_uninstall (
    FlatpakSystemHelper *proxy,
    guint arg_flags,
    const gchar *arg_ref,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean flatpak_system_helper_call_uninstall_finish (
    FlatpakSystemHelper *proxy,
    GAsyncResult *res,
    GError **error);

gboolean flatpak_system_helper_call_uninstall_sync (
    FlatpakSystemHelper *proxy,
    guint arg_flags,
    const gchar *arg_ref,
    GCancellable *cancellable,
    GError **error);

void flatpak_system_helper_call_install_bundle (
    FlatpakSystemHelper *proxy,
    const gchar *arg_bundle_path,
    guint arg_flags,
    GVariant *arg_gpg_key,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean flatpak_system_helper_call_install_bundle_finish (
    FlatpakSystemHelper *proxy,
    gchar **out_ref,
    GAsyncResult *res,
    GError **error);

gboolean flatpak_system_helper_call_install_bundle_sync (
    FlatpakSystemHelper *proxy,
    const gchar *arg_bundle_path,
    guint arg_flags,
    GVariant *arg_gpg_key,
    gchar **out_ref,
    GCancellable *cancellable,
    GError **error);

void flatpak_system_helper_call_configure_remote (
    FlatpakSystemHelper *proxy,
    guint arg_flags,
    const gchar *arg_remote,
    const gchar *arg_config,
    GVariant *arg_gpg_key,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean flatpak_system_helper_call_configure_remote_finish (
    FlatpakSystemHelper *proxy,
    GAsyncResult *res,
    GError **error);

gboolean flatpak_system_helper_call_configure_remote_sync (
    FlatpakSystemHelper *proxy,
    guint arg_flags,
    const gchar *arg_remote,
    const gchar *arg_config,
    GVariant *arg_gpg_key,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define FLATPAK_TYPE_SYSTEM_HELPER_PROXY (flatpak_system_helper_proxy_get_type ())
#define FLATPAK_SYSTEM_HELPER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), FLATPAK_TYPE_SYSTEM_HELPER_PROXY, FlatpakSystemHelperProxy))
#define FLATPAK_SYSTEM_HELPER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), FLATPAK_TYPE_SYSTEM_HELPER_PROXY, FlatpakSystemHelperProxyClass))
#define FLATPAK_SYSTEM_HELPER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), FLATPAK_TYPE_SYSTEM_HELPER_PROXY, FlatpakSystemHelperProxyClass))
#define FLATPAK_IS_SYSTEM_HELPER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), FLATPAK_TYPE_SYSTEM_HELPER_PROXY))
#define FLATPAK_IS_SYSTEM_HELPER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), FLATPAK_TYPE_SYSTEM_HELPER_PROXY))

typedef struct _FlatpakSystemHelperProxy FlatpakSystemHelperProxy;
typedef struct _FlatpakSystemHelperProxyClass FlatpakSystemHelperProxyClass;
typedef struct _FlatpakSystemHelperProxyPrivate FlatpakSystemHelperProxyPrivate;

struct _FlatpakSystemHelperProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  FlatpakSystemHelperProxyPrivate *priv;
};

struct _FlatpakSystemHelperProxyClass
{
  GDBusProxyClass parent_class;
};

GType flatpak_system_helper_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (FlatpakSystemHelperProxy, g_object_unref)
#endif

void flatpak_system_helper_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
FlatpakSystemHelper *flatpak_system_helper_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
FlatpakSystemHelper *flatpak_system_helper_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void flatpak_system_helper_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
FlatpakSystemHelper *flatpak_system_helper_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
FlatpakSystemHelper *flatpak_system_helper_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define FLATPAK_TYPE_SYSTEM_HELPER_SKELETON (flatpak_system_helper_skeleton_get_type ())
#define FLATPAK_SYSTEM_HELPER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), FLATPAK_TYPE_SYSTEM_HELPER_SKELETON, FlatpakSystemHelperSkeleton))
#define FLATPAK_SYSTEM_HELPER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), FLATPAK_TYPE_SYSTEM_HELPER_SKELETON, FlatpakSystemHelperSkeletonClass))
#define FLATPAK_SYSTEM_HELPER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), FLATPAK_TYPE_SYSTEM_HELPER_SKELETON, FlatpakSystemHelperSkeletonClass))
#define FLATPAK_IS_SYSTEM_HELPER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), FLATPAK_TYPE_SYSTEM_HELPER_SKELETON))
#define FLATPAK_IS_SYSTEM_HELPER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), FLATPAK_TYPE_SYSTEM_HELPER_SKELETON))

typedef struct _FlatpakSystemHelperSkeleton FlatpakSystemHelperSkeleton;
typedef struct _FlatpakSystemHelperSkeletonClass FlatpakSystemHelperSkeletonClass;
typedef struct _FlatpakSystemHelperSkeletonPrivate FlatpakSystemHelperSkeletonPrivate;

struct _FlatpakSystemHelperSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  FlatpakSystemHelperSkeletonPrivate *priv;
};

struct _FlatpakSystemHelperSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType flatpak_system_helper_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (FlatpakSystemHelperSkeleton, g_object_unref)
#endif

FlatpakSystemHelper *flatpak_system_helper_skeleton_new (void);


G_END_DECLS

#endif /* ____COMMON_FLATPAK_DBUS_H__ */