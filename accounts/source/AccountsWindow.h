/*
 * Copyright © 2012 Fabian Schuiki
 */

#pragma once

#include <gtkmm/window.h>
#include <gtkmm/builder.h>


struct cld_client;
class AccountList;
class AccountType;
class AddAccountPanel;


class AccountsWindow : public Gtk::Window
{
public:
	AccountsWindow(BaseObjectType *cobject, const Glib::RefPtr<Gtk::Builder> &builder);
	virtual ~AccountsWindow();
	
	void addAccount(AccountType *type);
	
protected:
	struct cld_client *cloud;
	
	AccountList *accountList;
	AddAccountPanel *addAccountPanel;
};
