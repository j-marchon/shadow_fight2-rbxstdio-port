// IKBGLDJFIJH$$.ctor @ RVA 0x3293318

void IKBGLDJFIJH___ctor(IKBGLDJFIJH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Action__o *__this_00;
  System_Collections_Generic_List_Action__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03393338 to 0349333f has its CatchHandler @ 03393540 */
  if ((DAT_04567341 & 1) == 0) {
                    /* try { // try from 0339334c to 03493357 has its CatchHandler @ 03393538 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Action>_TypeInfo);
    DAT_04567341 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Action__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Action>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Action>__ctor__);
  ppSVar1 = &(__this->fields).LBCPFBBIBCL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).DGFKDMNEAJJ = -1;
                    /* try { // try from 03393398 to 034933a7 has its CatchHandler @ 0339353c */
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  return;
}

