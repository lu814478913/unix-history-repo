/*-
 * Copyright (c) 1988, 1989, 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 * Copyright (c) 1989 by Berkeley Softworks
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Adam de Boor.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)nonints.h	8.3 (Berkeley) %G%
 */

/* arch.c */
ReturnStatus Arch_ParseArchive __P((char **, Lst, GNode *));
void Arch_Touch __P((GNode *));
void Arch_TouchLib __P((GNode *));
int Arch_MTime __P((GNode *));
int Arch_MemMTime __P((GNode *));
void Arch_FindLib __P((GNode *, Lst));
Boolean Arch_LibOODate __P((GNode *));
void Arch_Init __P((void));
  
/* compat.c */
void Compat_Run __P((Lst));

/* cond.c */
int Cond_Eval __P((char *));
void Cond_End __P((void));

/* for.c */
int For_Eval __P((char *));
void For_Run  __P((void));

/* main.c */
void Main_ParseArgLine __P((char *));
int main __P((int, char **));
void Error __P((const char *, ...));
void Fatal __P((const char *, ...));
void Punt __P((const char *, ...));
void DieHorribly __P((void));
void Finish __P((int));
char *emalloc __P((u_int));
void enomem __P((void));

/* parse.c */
void Parse_Error __P((int, const char *, ...));
Boolean Parse_AnyExport __P((void));
Boolean Parse_IsVar __P((char *));
void Parse_DoVar __P((char *, GNode *));
void Parse_AddIncludeDir __P((char *));
void Parse_File __P((char *, FILE *));
void Parse_Init __P((void));
void Parse_FromString __P((char *));
Lst Parse_MainName __P((void));

/* str.c */
char *str_concat __P((char *, char *, int));
char **brk_string __P((char *, int *));
char *Str_FindSubstring __P((char *, char *));
int Str_Match __P((char *, char *));
char *Str_SYSVMatch __P((char *, char *, int *len));
void Str_SYSVSubst __P((Buffer, char *, char *, int));

/* suff.c */
void Suff_ClearSuffixes __P((void));
Boolean Suff_IsTransform __P((char *));
GNode *Suff_AddTransform __P((char *));
int Suff_EndTransform __P((GNode *));
void Suff_AddSuffix __P((char *));
Lst Suff_GetPath __P((char *));
void Suff_DoPaths __P((void));
void Suff_AddInclude __P((char *));
void Suff_AddLib __P((char *));
void Suff_FindDeps __P((GNode *));
void Suff_SetNull __P((char *));
void Suff_Init __P((void));
void Suff_PrintAll __P((void));

/* targ.c */
void Targ_Init __P((void));
GNode *Targ_NewGN __P((char *));
GNode *Targ_FindNode __P((char *, int));
Lst Targ_FindList __P((Lst, int));
Boolean Targ_Ignore __P((GNode *));
Boolean Targ_Silent __P((GNode *));
Boolean Targ_Precious __P((GNode *));
void Targ_SetMain __P((GNode *));
int Targ_PrintCmd __P((char *));
char *Targ_FmtTime __P((time_t));
void Targ_PrintType __P((int));
void Targ_PrintGraph __P((int));

/* var.c */
void Var_Delete __P((char *, GNode *));
void Var_Set __P((char *, char *, GNode *));
void Var_Append __P((char *, char *, GNode *));
Boolean Var_Exists __P((char *, GNode *));
char *Var_Value __P((char *, GNode *));
char *Var_Parse __P((char *, GNode *, Boolean, int *, Boolean *));
char *Var_Subst __P((char *, char *, GNode *, Boolean));
char *Var_GetTail __P((char *));
char *Var_GetHead __P((char *));
void Var_Init __P((void));
void Var_Dump __P((GNode *));
