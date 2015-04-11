/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */ 
  
#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <string.h> 
#include <stdio.h> 

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
 
#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)
  
#define COUNT_OF_ALL_DATA 8 // ALL_DATA(AD)的資料數 

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GdkPixbuf *window1_icon_pixbuf;
  GtkWidget *vbox0;
  GtkWidget *menubar1;
  GtkWidget *menuitem1;
  GtkWidget *menuitem1_menu;
  GtkWidget *_______n_1;
  GtkWidget *_______o_1;
  GtkWidget *_______s_1;
  GtkWidget *_____________a_1;
  GtkWidget *separatormenuitem1;
  GtkWidget *_______q_1;
  GtkWidget *menuitem2;
  GtkWidget *menuitem2_menu;
  GtkWidget *_______t_1;
  GtkWidget *_______c_1;
  GtkWidget *_______p_1;
  GtkWidget *_______d_1;
  GtkWidget *menuitem3;
  GtkWidget *menuitem3_menu;
  GtkWidget *mainfile1;
  GtkWidget *interfacefile1;
  GtkWidget *callbacksfile1;
  GtkWidget *menuitem4;
  GtkWidget *menuitem4_menu;
  GtkWidget *about1;
  GtkWidget *quit1;
  GtkWidget *toolbar1;
  GtkIconSize tmp_toolbar_icon_size;
  GtkWidget *toolitem1;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *vbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *toolitem2;
  GtkWidget *button2;
  GtkWidget *alignment2;
  GtkWidget *vbox2;
  GtkWidget *image2;
  GtkWidget *label2;
  GtkWidget *toolitem3;
  GtkWidget *button3;
  GtkWidget *alignment3;
  GtkWidget *vbox3;
  GtkWidget *image3;
  GtkWidget *label3;
  GtkWidget *toolitem4;
  GtkWidget *button4;
  GtkWidget *alignment4;
  GtkWidget *vbox8;
  GtkWidget *image8;
  GtkWidget *label8;
  GtkWidget *toolitem5;
  GtkWidget *button5;
  GtkWidget *alignment5;
  GtkWidget *vbox5;
  GtkWidget *image5;
  GtkWidget *label5;
  GtkWidget *toolitem6;
  GtkWidget *button6;
  GtkWidget *alignment6;
  GtkWidget *vbox6;
  GtkWidget *image6;
  GtkWidget *label6;
  GtkWidget *toolitem7;
  GtkWidget *button7;
  GtkWidget *alignment7;
  GtkWidget *vbox7;
  GtkWidget *image7;
  GtkWidget *label7;
  GtkWidget *toolitem8;
  GtkWidget *button8;
  GtkWidget *alignment9;
  GtkWidget *vbox9;
  GtkWidget *image9;
  GtkWidget *label9;
  GtkWidget *toolitem9;
  GtkWidget *button9;
  GtkWidget *alignment10;
  GtkWidget *vbox10;
  GtkWidget *image10;
  GtkWidget *label10;
  GtkWidget *toolitem10;
  GtkWidget *button10;
  GtkWidget *alignment11;
  GtkWidget *vbox11;
  GtkWidget *image11;
  GtkWidget *label11;
  GtkWidget *scrolledwindow1;
  GtkWidget *textview1;
  GtkWidget *statusbar1;
  GtkAccelGroup *accel_group;
  GError *error; 
  //AD *data;

  accel_group = gtk_accel_group_new ();
     
  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);  
  gtk_window_set_title (GTK_WINDOW (window1), utf8("記事本"));//_("window1"));
  /*
  window1_icon_pixbuf = gdk_pixbuf_new_from_file ("my_documents_11.ico", &error);
  if (window1_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (window1), window1_icon_pixbuf);
      gdk_pixbuf_unref (window1_icon_pixbuf);
    }
  */  
  gtk_window_set_icon_from_file (GTK_WINDOW (window1), "..\\pixmaps\\my_documents_11.ico", &error);

  vbox0 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox0);
  gtk_container_add (GTK_CONTAINER (window1), vbox0);

  menubar1 = gtk_menu_bar_new ();
  gtk_widget_show (menubar1);
  gtk_box_pack_start (GTK_BOX (vbox0), menubar1, FALSE, FALSE, 0);

  menuitem1 = gtk_menu_item_new_with_mnemonic (_("_File"));
  gtk_widget_show (menuitem1);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem1);

  menuitem1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem1), menuitem1_menu);

  _______n_1 = gtk_image_menu_item_new_from_stock ("gtk-new", accel_group);
  gtk_widget_show (_______n_1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), _______n_1);

  _______o_1 = gtk_image_menu_item_new_from_stock ("gtk-open", accel_group);
  gtk_widget_show (_______o_1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), _______o_1);

  _______s_1 = gtk_image_menu_item_new_from_stock ("gtk-save", accel_group);
  gtk_widget_show (_______s_1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), _______s_1);

  _____________a_1 = gtk_image_menu_item_new_from_stock ("gtk-save-as", accel_group);
  gtk_widget_show (_____________a_1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), _____________a_1);

  separatormenuitem1 = gtk_separator_menu_item_new ();
  gtk_widget_show (separatormenuitem1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separatormenuitem1);
  gtk_widget_set_sensitive (separatormenuitem1, FALSE);

  _______q_1 = gtk_image_menu_item_new_from_stock ("gtk-quit", accel_group);
  gtk_widget_show (_______q_1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), _______q_1);

  menuitem2 = gtk_menu_item_new_with_mnemonic (_("_Edit"));
  gtk_widget_show (menuitem2);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem2);

  menuitem2_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem2), menuitem2_menu);

  _______t_1 = gtk_image_menu_item_new_from_stock ("gtk-cut", accel_group);
  gtk_widget_show (_______t_1);
  gtk_container_add (GTK_CONTAINER (menuitem2_menu), _______t_1);

  _______c_1 = gtk_image_menu_item_new_from_stock ("gtk-copy", accel_group);
  gtk_widget_show (_______c_1);
  gtk_container_add (GTK_CONTAINER (menuitem2_menu), _______c_1);

  _______p_1 = gtk_image_menu_item_new_from_stock ("gtk-paste", accel_group);
  gtk_widget_show (_______p_1);
  gtk_container_add (GTK_CONTAINER (menuitem2_menu), _______p_1);

  _______d_1 = gtk_image_menu_item_new_from_stock ("gtk-delete", accel_group);
  gtk_widget_show (_______d_1);
  gtk_container_add (GTK_CONTAINER (menuitem2_menu), _______d_1);

  menuitem3 = gtk_menu_item_new_with_mnemonic (_("_View"));
  gtk_widget_show (menuitem3);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem3);

  menuitem3_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem3), menuitem3_menu);

  mainfile1 = gtk_menu_item_new_with_mnemonic (_("_main.c"));
  gtk_widget_show (mainfile1);
  gtk_container_add (GTK_CONTAINER (menuitem3_menu), mainfile1);

  interfacefile1 = gtk_menu_item_new_with_mnemonic (_("_interface.c"));
  gtk_widget_show (interfacefile1);
  gtk_container_add (GTK_CONTAINER (menuitem3_menu), interfacefile1);

  callbacksfile1 = gtk_menu_item_new_with_mnemonic (_("_callbacks.c"));
  gtk_widget_show (callbacksfile1);
  gtk_container_add (GTK_CONTAINER (menuitem3_menu), callbacksfile1);

  menuitem4 = gtk_menu_item_new_with_mnemonic (_("_Help"));
  gtk_widget_show (menuitem4);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem4);

  menuitem4_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem4), menuitem4_menu);

  about1 = gtk_menu_item_new_with_mnemonic (_("_About"));
  gtk_widget_show (about1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), about1);

  quit1 = gtk_menu_item_new_with_mnemonic (_("_Quit"));
  gtk_widget_show (quit1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), quit1);

  toolbar1 = gtk_toolbar_new ();
  gtk_widget_show (toolbar1);
  gtk_box_pack_start (GTK_BOX (vbox0), toolbar1, FALSE, FALSE, 0);
  gtk_toolbar_set_style (GTK_TOOLBAR (toolbar1), GTK_TOOLBAR_BOTH);
  tmp_toolbar_icon_size = gtk_toolbar_get_icon_size (GTK_TOOLBAR (toolbar1));

  toolitem1 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem1);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem1);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_container_add (GTK_CONTAINER (toolitem1), button1);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  vbox1 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), vbox1);
 
  image1 = gtk_image_new_from_file ("..\\pixmaps\\comic_collector_3.ico");
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (vbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("\346\226\260\345\242\236"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (vbox1), label1, FALSE, FALSE, 0);

  toolitem2 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem2);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem2);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_container_add (GTK_CONTAINER (toolitem2), button2);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button2), alignment2);

  vbox2 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), vbox2);

  image2 = gtk_image_new_from_file ("..\\pixmaps\\folder_drawings_3.ico");
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (vbox2), image2, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic (_("\351\226\213\345\225\237"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (vbox2), label2, FALSE, FALSE, 0);

  toolitem3 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem3);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem3);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_container_add (GTK_CONTAINER (toolitem3), button3);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button3), alignment3);

  vbox3 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), vbox3);

  image3 = gtk_image_new_from_file ("..\\pixmaps\\download2_3.ico");
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (vbox3), image3, FALSE, FALSE, 0);

  label3 = gtk_label_new_with_mnemonic (_("\345\204\262\345\255\230"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (vbox3), label3, FALSE, FALSE, 0);

  toolitem4 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem4);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem4);

  button4 = gtk_button_new ();
  gtk_widget_show (button4);
  gtk_container_add (GTK_CONTAINER (toolitem4), button4);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button4), alignment4);

  vbox8 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox8);
  gtk_container_add (GTK_CONTAINER (alignment4), vbox8);

  image8 = gtk_image_new_from_file ("..\\pixmaps\\recycle_bin_rabbit_full_3.ico");
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (vbox8), image8, FALSE, FALSE, 0);

  label8 = gtk_label_new_with_mnemonic (_("\345\211\252\344\270\213"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (vbox8), label8, FALSE, FALSE, 0);

  toolitem5 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem5);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem5);

  button5 = gtk_button_new ();
  gtk_widget_show (button5);
  gtk_container_add (GTK_CONTAINER (toolitem5), button5);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (button5), alignment5);

  vbox5 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), vbox5);

  image5 = gtk_image_new_from_file ("..\\pixmaps\\blocnote_3.ico");
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (vbox5), image5, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("\350\244\207\350\243\275"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (vbox5), label5, FALSE, FALSE, 0);

  toolitem6 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem6);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem6);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_container_add (GTK_CONTAINER (toolitem6), button6);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button6), alignment6);

  vbox6 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), vbox6);

  image6 = gtk_image_new_from_file ("..\\pixmaps\\drawing_3.ico");
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (vbox6), image6, FALSE, FALSE, 0);

  label6 = gtk_label_new_with_mnemonic (_("\350\262\274\344\270\212"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (vbox6), label6, FALSE, FALSE, 0);

  toolitem7 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem7);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem7);

  button7 = gtk_button_new ();
  gtk_widget_show (button7);
  gtk_container_add (GTK_CONTAINER (toolitem7), button7);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button7), alignment7);

  vbox7 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), vbox7);

  image7 = gtk_image_new_from_file ("..\\pixmaps\\my_computer1_3.ico");
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (vbox7), image7, FALSE, FALSE, 0);

  label7 = gtk_label_new_with_mnemonic (_("\346\220\234\345\260\213"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (vbox7), label7, FALSE, FALSE, 0);

  toolitem8 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem8);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem8);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_container_add (GTK_CONTAINER (toolitem8), button8);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (button8), alignment9);

  vbox9 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), vbox9);

  image9 = gtk_image_new_from_file ("..\\pixmaps\\photoshop_3.ico");
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (vbox9), image9, FALSE, FALSE, 0);

  label9 = gtk_label_new_with_mnemonic (_("\345\217\226\344\273\243"));
  gtk_widget_show (label9);
  gtk_box_pack_start (GTK_BOX (vbox9), label9, FALSE, FALSE, 0);

  toolitem9 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem9);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem9);

  button9 = gtk_button_new ();
  gtk_widget_show (button9);
  gtk_container_add (GTK_CONTAINER (toolitem9), button9);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (button9), alignment10);

  vbox10 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), vbox10);

  image10 = gtk_image_new_from_file ("..\\pixmaps\\julien_3.ico");
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (vbox10), image10, FALSE, FALSE, 0);

  label10 = gtk_label_new_with_mnemonic (_("\351\227\234\346\226\274"));
  gtk_widget_show (label10);
  gtk_box_pack_start (GTK_BOX (vbox10), label10, FALSE, FALSE, 0);

  toolitem10 = (GtkWidget*) gtk_tool_item_new ();
  gtk_widget_show (toolitem10);
  gtk_container_add (GTK_CONTAINER (toolbar1), toolitem10);

  button10 = gtk_button_new ();
  gtk_widget_show (button10);
  gtk_container_add (GTK_CONTAINER (toolitem10), button10);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (button10), alignment11);

  vbox11 = gtk_vbox_new (FALSE, 2);
  gtk_widget_show (vbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), vbox11);

  image11 = gtk_image_new_from_file ("..\\pixmaps\\instant_messenger _3.ico");
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (vbox11), image11, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("\351\233\242\351\226\213"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (vbox11), label11, FALSE, FALSE, 0);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_box_pack_start (GTK_BOX (vbox0), scrolledwindow1, TRUE, TRUE, 0);
  gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_SHADOW_IN);

  textview1 = gtk_text_view_new ();
  gtk_widget_show (textview1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), textview1);

  statusbar1 = gtk_statusbar_new ();
  gtk_widget_show (statusbar1);
  gtk_box_pack_start (GTK_BOX (vbox0), statusbar1, FALSE, FALSE, 0);
  
    
  
  AD data = g_new0(struct AllData, COUNT_OF_ALL_DATA); // 建立callback用的傳遞資料   
  
  data->window = window1;
  data->textview = textview1; 
  data->statusbar = statusbar1;
  
  
  
  
  
  
  // callback function begin. 

  g_signal_connect ((gpointer) _______n_1, "activate",
                    G_CALLBACK (on________n_1_activate),
                    data); // 新增 
  g_signal_connect ((gpointer) _______o_1, "activate",
                    G_CALLBACK (on________o_1_activate),
                    data); // 開啟 
  g_signal_connect ((gpointer) _______s_1, "activate",
                    G_CALLBACK (on________s_1_activate),
                    data); // 儲存 
  g_signal_connect ((gpointer) _____________a_1, "activate",
                    G_CALLBACK (on________s_1_activate ),
                    data); // 另存 
  g_signal_connect ((gpointer) _______q_1, "activate",
                    G_CALLBACK (on________q_1_activate),
                    data); // 離開 
  g_signal_connect ((gpointer) _______t_1, "activate",
                    G_CALLBACK (on________t_1_activate),
                    data); // 剪下 
  g_signal_connect ((gpointer) _______c_1, "activate",
                    G_CALLBACK (on________c_1_activate),
                    data); // 複製 
  g_signal_connect ((gpointer) _______p_1, "activate",
                    G_CALLBACK (on________p_1_activate),
                    data); // 貼上 
  g_signal_connect ((gpointer) _______d_1, "activate",
                    G_CALLBACK (on________d_1_activate),
                    data); // 刪除 
  g_signal_connect ((gpointer) mainfile1, "activate",
                    G_CALLBACK (on_mainfile1_activate),
                    data); // view
  g_signal_connect ((gpointer) interfacefile1, "activate",
                    G_CALLBACK (on_interfacefile1_activate),
                    data); // view
  g_signal_connect ((gpointer) callbacksfile1, "activate",
                    G_CALLBACK (on_callbacksfile1_activate),
                    data); // view
  g_signal_connect ((gpointer) about1, "activate",
                    G_CALLBACK (on_about1_activate),
                    NULL); // 關於 
  g_signal_connect ((gpointer) quit1, "activate", 
                    G_CALLBACK (on_quit1_activate),
                    NULL); // 離開 
  g_signal_connect ((gpointer) quit1, "activate",
                    G_CALLBACK (gtk_main_quit),
                    NULL); // 離開 
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on________n_1_activate),
                    data); // 新增 
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on________o_1_activate),
                    data); // 開啟 
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on________s_1_activate),
                    data); // 儲存 
  g_signal_connect ((gpointer) button4, "clicked",
                    G_CALLBACK (on________t_1_activate),
                    data); // 剪下 
  g_signal_connect ((gpointer) button5, "clicked", 
                    G_CALLBACK (on________c_1_activate),
                    data); // 複製 
  g_signal_connect ((gpointer) button6, "clicked", 
                    G_CALLBACK (on________p_1_activate),
                    data); // 貼上 
  g_signal_connect ((gpointer) button7, "clicked",  
                    G_CALLBACK (on_search_button_clicked),
                    data); // 搜尋
                    
  //g_signal_connect ((gpointer) window1, "key-press-event", 
    //                G_CALLBACK (on_next_button_clicked),
      //              data); // 搜尋(對應快捷鍵F3) 
  g_signal_connect ((gpointer) button8, "clicked",  
                    G_CALLBACK (on_replace_button_clicked),
                    data); // 取代 
  g_signal_connect ((gpointer) button9, "clicked",
                    G_CALLBACK (on_about1_activate),
                    NULL); // 關於 
  g_signal_connect ((gpointer) button10, "clicked",
                    G_CALLBACK (gtk_main_quit),
                    NULL);  // 離開 


  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (window1, menubar1, "menubar1");
  GLADE_HOOKUP_OBJECT (window1, menuitem1, "menuitem1");
  GLADE_HOOKUP_OBJECT (window1, menuitem1_menu, "menuitem1_menu");
  GLADE_HOOKUP_OBJECT (window1, _______n_1, "_______n_1");
  GLADE_HOOKUP_OBJECT (window1, _______o_1, "_______o_1");
  GLADE_HOOKUP_OBJECT (window1, _______s_1, "_______s_1");
  GLADE_HOOKUP_OBJECT (window1, _____________a_1, "_____________a_1");
  GLADE_HOOKUP_OBJECT (window1, separatormenuitem1, "separatormenuitem1");
  GLADE_HOOKUP_OBJECT (window1, _______q_1, "_______q_1");
  GLADE_HOOKUP_OBJECT (window1, menuitem2, "menuitem2");
  GLADE_HOOKUP_OBJECT (window1, menuitem2_menu, "menuitem2_menu");
  GLADE_HOOKUP_OBJECT (window1, _______t_1, "_______t_1");
  GLADE_HOOKUP_OBJECT (window1, _______c_1, "_______c_1");
  GLADE_HOOKUP_OBJECT (window1, _______p_1, "_______p_1");
  GLADE_HOOKUP_OBJECT (window1, _______d_1, "_______d_1");
  GLADE_HOOKUP_OBJECT (window1, menuitem3, "menuitem3");
  GLADE_HOOKUP_OBJECT (window1, menuitem3_menu, "menuitem3_menu");
  GLADE_HOOKUP_OBJECT (window1, mainfile1, "mainfile1");
  GLADE_HOOKUP_OBJECT (window1, interfacefile1, "interfacefile1");
  GLADE_HOOKUP_OBJECT (window1, callbacksfile1, "callbacksfile1");
  GLADE_HOOKUP_OBJECT (window1, menuitem4, "menuitem4");
  GLADE_HOOKUP_OBJECT (window1, menuitem4_menu, "menuitem4_menu");
  GLADE_HOOKUP_OBJECT (window1, about1, "about1");
  GLADE_HOOKUP_OBJECT (window1, quit1, "quit1");
  GLADE_HOOKUP_OBJECT (window1, toolbar1, "toolbar1");
  GLADE_HOOKUP_OBJECT (window1, toolitem1, "toolitem1");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, toolitem2, "toolitem2");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (window1, image2, "image2");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, toolitem3, "toolitem3");
  GLADE_HOOKUP_OBJECT (window1, button3, "button3");
  GLADE_HOOKUP_OBJECT (window1, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window1, vbox3, "vbox3");
  GLADE_HOOKUP_OBJECT (window1, image3, "image3");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, toolitem4, "toolitem4");
  GLADE_HOOKUP_OBJECT (window1, button4, "button4");
  GLADE_HOOKUP_OBJECT (window1, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window1, vbox8, "vbox8");
  GLADE_HOOKUP_OBJECT (window1, image8, "image8");
  GLADE_HOOKUP_OBJECT (window1, label8, "label8");
  GLADE_HOOKUP_OBJECT (window1, toolitem5, "toolitem5");
  GLADE_HOOKUP_OBJECT (window1, button5, "button5");
  GLADE_HOOKUP_OBJECT (window1, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window1, vbox5, "vbox5");
  GLADE_HOOKUP_OBJECT (window1, image5, "image5");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, toolitem6, "toolitem6");
  GLADE_HOOKUP_OBJECT (window1, button6, "button6");
  GLADE_HOOKUP_OBJECT (window1, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window1, vbox6, "vbox6");
  GLADE_HOOKUP_OBJECT (window1, image6, "image6");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, toolitem7, "toolitem7");
  GLADE_HOOKUP_OBJECT (window1, button7, "button7");
  GLADE_HOOKUP_OBJECT (window1, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (window1, vbox7, "vbox7");
  GLADE_HOOKUP_OBJECT (window1, image7, "image7");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, toolitem8, "toolitem8");
  GLADE_HOOKUP_OBJECT (window1, button8, "button8");
  GLADE_HOOKUP_OBJECT (window1, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (window1, vbox9, "vbox9");
  GLADE_HOOKUP_OBJECT (window1, image9, "image9");
  GLADE_HOOKUP_OBJECT (window1, label9, "label9");
  GLADE_HOOKUP_OBJECT (window1, toolitem9, "toolitem9");
  GLADE_HOOKUP_OBJECT (window1, button9, "button9");
  GLADE_HOOKUP_OBJECT (window1, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (window1, vbox10, "vbox10");
  GLADE_HOOKUP_OBJECT (window1, image10, "image10");
  GLADE_HOOKUP_OBJECT (window1, label10, "label10");
  GLADE_HOOKUP_OBJECT (window1, toolitem10, "toolitem10");
  GLADE_HOOKUP_OBJECT (window1, button10, "button10");
  GLADE_HOOKUP_OBJECT (window1, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (window1, vbox11, "vbox11");
  GLADE_HOOKUP_OBJECT (window1, image11, "image11");
  GLADE_HOOKUP_OBJECT (window1, label11, "label11");
  GLADE_HOOKUP_OBJECT (window1, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (window1, textview1, "textview1");
  GLADE_HOOKUP_OBJECT (window1, statusbar1, "statusbar1");

  gtk_window_add_accel_group (GTK_WINDOW (window1), accel_group);

  return window1;
}

GtkWidget*
create_dialog1_information (void)
{
  GtkWidget *dialog1_information;
  GdkPixbuf *dialog1_information_icon_pixbuf;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox2;
  GtkWidget *image12;
  GtkWidget *label12;
  GtkWidget *dialog_action_area1;
  GtkWidget *okbutton1;
  GError *error;

  dialog1_information = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1_information), _("dialog1"));
  /*
  dialog1_information_icon_pixbuf = gdk_pixbuf_new_from_file ("my_documents_11.ico", &error);
  if (dialog1_information_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (dialog1_information), dialog1_information_icon_pixbuf);
      gdk_pixbuf_unref (dialog1_information_icon_pixbuf);
    }
  gtk_window_set_icon (GTK_WINDOW (dialog1_information), dialog1_information_icon_pixbuf);  
  */
  gtk_window_set_icon_from_file (GTK_WINDOW (dialog1_information), "..\\pixmaps\\my_documents_11.ico", &error);
    
  gtk_window_set_type_hint (GTK_WINDOW (dialog1_information), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (dialog1_information)->vbox;
  gtk_widget_show (dialog_vbox1);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), vbox2, TRUE, TRUE, 0);

  image12 = gtk_image_new_from_file ("..\\pixmaps\\tetedane.png");
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (vbox2), image12, TRUE, TRUE, 0);

  label12 = gtk_label_new (_("\344\270\200\345\200\213\344\273\245GTK+Glade\345\257\246\344\275\234\347\232\204\347\260\241\346\230\223\350\250\230\344\272\213\346\234\254\347\250\213\345\274\217"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (vbox2), label12, FALSE, FALSE, 0);

  dialog_action_area1 = GTK_DIALOG (dialog1_information)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  okbutton1 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1_information), okbutton1, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton1, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) okbutton1, "clicked",
                    G_CALLBACK (gtk_widget_destroy),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1_information, dialog1_information, "dialog1_information");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1_information, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (dialog1_information, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (dialog1_information, image12, "image12");
  GLADE_HOOKUP_OBJECT (dialog1_information, label12, "label12");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1_information, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (dialog1_information, okbutton1, "okbutton1");

  return dialog1_information;
}

GtkWidget* 
create_file_chooser_oepn_dialog (GtkWidget *window)
// 建立開啟檔案的dialog 
{ 
  GtkWidget *dialog;
  
  dialog = gtk_file_chooser_dialog_new ("Open File",
			                                  GTK_WINDOW(window),
                                        GTK_FILE_CHOOSER_ACTION_OPEN,
                                        GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
                                        GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT, 
                                        NULL);
  
  /*
  if (gtk_dialog_run (GTK_DIALOG (dialog)) == GTK_RESPONSE_ACCEPT)
  {
    char *filename;

    filename = gtk_file_chooser_get_filename (GTK_FILE_CHOOSER (dialog));
    open_file (filename);
    g_free (filename);
  }
  */
  //gtk_widget_destroy (dialog);
  
  return dialog ;
}                                      
      
GtkWidget* 
create_file_chooser_save_dialog (GtkWidget *window)    
// 建立儲存檔案的dialog                                 
{
  GtkWidget *dialog;

  dialog = gtk_file_chooser_dialog_new ("Save File",
	 			                                GTK_WINDOW(window),
	 			                                GTK_FILE_CHOOSER_ACTION_SAVE,
	 			                                GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
				                                GTK_STOCK_SAVE, GTK_RESPONSE_ACCEPT,
				                                NULL);

  gtk_file_chooser_set_do_overwrite_confirmation (GTK_FILE_CHOOSER (dialog), TRUE);
  /*
  if (user_edited_a_new_document)
  {
    gtk_file_chooser_set_current_folder (GTK_FILE_CHOOSER (dialog), default_folder_for_saving);
    gtk_file_chooser_set_current_name (GTK_FILE_CHOOSER (dialog), "Untitled document");
  }
  else
    gtk_file_chooser_set_filename (GTK_FILE_CHOOSER (dialog), filename_for_existing_document);


  if (gtk_dialog_run (GTK_DIALOG (dialog)) == GTK_RESPONSE_ACCEPT)
  {
    char *filename;

    filename = gtk_file_chooser_get_filename (GTK_FILE_CHOOSER (dialog));
    save_to_file (filename);
    g_free (filename);
  }
  */
  //gtk_widget_destroy (dialog);
  
  return dialog ;             
}             
                                         

GtkWidget *create_search_dialog (AD data)
{
  GtkWidget *dialog1;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox1;
  GtkWidget *label1;
  GtkWidget *entry1;
  GtkWidget *radiobutton1;
  GSList *radiobutton1_group = NULL;
  GtkWidget *radiobutton2;
  GtkWidget *dialog_action_area1;
  GtkWidget *cancelbutton1;
  GtkWidget *okbutton1;
  
  dialog1 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1), utf8("搜尋"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog1), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (dialog1)->vbox;
  gtk_widget_show (dialog_vbox1);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), vbox1, TRUE, TRUE, 0);

  label1 = gtk_label_new (utf8("請輸入欲搜尋的字串："));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (vbox1), label1, FALSE, FALSE, 0);
  gtk_widget_set_size_request (label1, -1, 41);
  gtk_misc_set_padding (GTK_MISC (label1), 19, 0);

  //entry1 = gtk_entry_new();
  //gtk_widget_show (entry1);
  data->entry = gtk_entry_new();
  gtk_widget_show (data->entry);
  gtk_box_pack_start (GTK_BOX (vbox1), data->entry, FALSE, FALSE, 0);
  
  
  

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, utf8("區分大小寫"));
  gtk_widget_show (radiobutton1);
  gtk_box_pack_start (GTK_BOX (vbox1), radiobutton1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, utf8("不分大小寫"));
  gtk_widget_show (radiobutton2);
  gtk_box_pack_start (GTK_BOX (vbox1), radiobutton2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  dialog_action_area1 = GTK_DIALOG (dialog1)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  cancelbutton1 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), cancelbutton1, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (cancelbutton1, GTK_CAN_DEFAULT);

  okbutton1 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), okbutton1, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton1, GTK_CAN_DEFAULT);
  
  
  g_signal_connect ((gpointer) okbutton1, "clicked",
                    G_CALLBACK (on_search_okbutton_clicked),
                    data); // 
  g_signal_connect ((gpointer) cancelbutton1, "clicked",
                    G_CALLBACK (on_search_cancelbutton_clicked),
                    dialog1); 
  g_signal_connect(GTK_OBJECT(dialog1), "destroy",
                     G_CALLBACK(on_search_cancelbutton_clicked), dialog1);
  

  return dialog1;

}

GtkWidget *create_replace_dialog (AD data)
// 建立取代dialog 
{
  GtkWidget *dialog1;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox1;
  GtkWidget *label1, *label2;
  GtkWidget *entry1;
  GtkWidget *radiobutton1;
  GSList *radiobutton1_group = NULL;
  GtkWidget *radiobutton2;
  GtkWidget *dialog_action_area1;
  GtkWidget *cancelbutton1;
  GtkWidget *okbutton1;
  
  dialog1 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1), utf8("取代"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog1), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = GTK_DIALOG (dialog1)->vbox;
  gtk_widget_show (dialog_vbox1);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), vbox1, TRUE, TRUE, 0);

  label1 = gtk_label_new (utf8("請輸入原本的字串："));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (vbox1), label1, FALSE, FALSE, 0);
  gtk_widget_set_size_request (label1, -1, 41);
  gtk_misc_set_padding (GTK_MISC (label1), 19, 0);

  //entry1 = gtk_entry_new();
  //gtk_widget_show (entry1);
  data->entry = gtk_entry_new();
  gtk_widget_show (data->entry);
  gtk_box_pack_start (GTK_BOX (vbox1), data->entry, FALSE, FALSE, 0);
  
  
  
  label2 = gtk_label_new (utf8("請輸入取代的字串："));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (vbox1), label2, FALSE, FALSE, 0);
  gtk_widget_set_size_request (label2, -1, 41);
  gtk_misc_set_padding (GTK_MISC (label2), 19, 0);
  
  data->entry2 = gtk_entry_new();
  gtk_widget_show (data->entry2);
  gtk_box_pack_start (GTK_BOX (vbox1), data->entry2, FALSE, FALSE, 0);
  

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, utf8("區分大小寫"));
  gtk_widget_show (radiobutton1);
  gtk_box_pack_start (GTK_BOX (vbox1), radiobutton1, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, utf8("不分大小寫"));
  gtk_widget_show (radiobutton2);
  gtk_box_pack_start (GTK_BOX (vbox1), radiobutton2, FALSE, FALSE, 0);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  dialog_action_area1 = GTK_DIALOG (dialog1)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  cancelbutton1 = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (cancelbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), cancelbutton1, GTK_RESPONSE_CANCEL);
  GTK_WIDGET_SET_FLAGS (cancelbutton1, GTK_CAN_DEFAULT);

  okbutton1 = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (okbutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), okbutton1, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (okbutton1, GTK_CAN_DEFAULT);
  
  
  g_signal_connect ((gpointer) okbutton1, "clicked",
                    G_CALLBACK (on_replace_okbutton_clicked),
                    data); // 
  g_signal_connect ((gpointer) cancelbutton1, "clicked",
                    G_CALLBACK (on_replace_cancelbutton_clicked),
                    dialog1); 
  g_signal_connect(GTK_OBJECT(dialog1), "destroy",
                     G_CALLBACK(on_replace_cancelbutton_clicked), dialog1);
  

  return dialog1;

}
