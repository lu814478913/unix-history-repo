divert(-1)
#
# Copyright (c) 1983 Eric P. Allman
# Copyright (c) 1988 The Regents of the University of California.
# All rights reserved.
#
# %sccs.include.redist.sh%
#

include(`../m4/cf.m4')
VERSIONID(`@(#)mail.cs.mc	6.6 (Berkeley) %G%')
OSTYPE(ultrix4.1)dnl
DOMAIN(cs.exposed)dnl
FEATURE(use_cw_file)dnl
FEATURE(notsticky)dnl
MAILER(local)dnl
MAILER(smtp)dnl
define(`USERDB_SPEC', ``/usr/local/lib/users.cs.db,/usr/local/lib/users.eecs.db'')dnl
