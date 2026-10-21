// IKBGLDJFIJH$$OEHBFKCJMFA @ RVA 0x3293268

void IKBGLDJFIJH__OEHBFKCJMFA(IKBGLDJFIJH_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_Action__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04567342 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_get_Item__);
    DAT_04567342 = 1;
  }
  __this_00 = (__this->fields).LBCPFBBIBCL;
  index = (__this->fields).DGFKDMNEAJJ + 1;
  (__this->fields).DGFKDMNEAJJ = index;
  if (__this_00 == (System_Collections_Generic_List_Action__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields)._size <= index) {
    IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
    return;
  }
  pIVar1 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,index,
                      Method_System_Collections_Generic_List<Action>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033932ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1[1].monitor)(pIVar1[4].klass,pIVar1[2].monitor);
    return;
  }
  return;
}

