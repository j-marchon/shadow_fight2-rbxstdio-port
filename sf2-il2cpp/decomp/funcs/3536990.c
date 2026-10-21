// EPFMFHDGMCE$$FLCAGIJMPKA @ RVA 0x3536990

EANNACPOJFA_o *
EPFMFHDGMCE__FLCAGIJMPKA(EPFMFHDGMCE_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  EANNACPOJFA_o *pEVar1;
  int index;
  
  if ((DAT_04568aa6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    DAT_04568aa6 = 1;
  }
  __this_00 = (__this->fields).JMPJKOKFJMN;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return (EANNACPOJFA_o *)0x0;
      }
      pEVar1 = (EANNACPOJFA_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      if (pEVar1 == (EANNACPOJFA_o *)0x0) break;
      if ((pEVar1->fields).NOPGBJNLFHM == JLAFGLDIFOC) {
        return pEVar1;
      }
      __this_00 = (__this->fields).JMPJKOKFJMN;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

