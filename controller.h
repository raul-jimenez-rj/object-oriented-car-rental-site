#ifndef __CONTROLLER_H
#define __CONTROLLER_H
#include "rental_site.h"
#include "dialog.h"
#include <gtkmm.h>

class Controller
{
public:
  void execute_cmd(int command);
  void cli();
  Rental_Site rental_site();

private:
  Rental_Site _rental_site;
};

#endif