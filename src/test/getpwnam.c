/* -*- Mode: C; tab-width: 8; c-basic-offset: 2; indent-tabs-mode: nil; -*- */

#include "rrutil.h"

int main(void) {
  struct passwd* p = getpwnam("root");
  atomic_printf("%d\n", p->pw_uid);
  atomic_puts("EXIT-SUCCESS");
  return 0;
}