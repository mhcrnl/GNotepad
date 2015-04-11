/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */
   
/* 
GTK實作的簡易記事本程式。 
可讀檔、開新檔、另存新檔、剪下、複製、貼上、搜尋和取代。
目前缺陷：無法開啟UTF-16和UTF-32編碼的文件 
所有圖示均為mathilde所設計。 
 
update: 2010.5.19 
*/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif  
  
#include <gtk/gtk.h>
 
#include "interface.h"
#include "support.h"



#ifdef G_OS_WIN32
gchar *package_prefix = "" ; //PACKAGE_PREFIX;
gchar *package_data_dir = "" ; //PACKAGE_DATA_DIR;
gchar *package_locale_dir = "" ; //PACKAGE_LOCALE_DIR;
#endif

  

            
int
main (int argc, char *argv[])
{
  GtkWidget *window1;
  //GtkWidget *dialog1_information;

  gchar *pixmap_dir;
#ifdef G_OS_WIN32
  package_prefix = g_win32_get_package_installation_directory (NULL, NULL);
  package_data_dir = g_build_filename (package_prefix, "share", NULL);
  package_locale_dir = g_build_filename (package_prefix, "share", "locale", NULL);
#endif

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, package_locale_dir);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif  

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  pixmap_dir = g_build_filename (package_data_dir, "pixmaps", NULL);
  add_pixmap_directory (pixmap_dir);
  g_free (pixmap_dir);
 

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  window1 = create_window1 (); 
  gtk_window_set_default_size(GTK_WINDOW(window1), 600, 400);
  gtk_widget_show (window1);
  g_signal_connect ((gpointer) window1, "destroy", G_CALLBACK(gtk_main_quit),
                    NULL);


  gtk_main ();

#ifdef G_OS_WIN32
  g_free (package_prefix);
  g_free (package_data_dir);
  g_free (package_locale_dir);
#endif

  return 0;
}
#ifdef _MSC_VER
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
  return main (__argc, __argv);
}
#endif

