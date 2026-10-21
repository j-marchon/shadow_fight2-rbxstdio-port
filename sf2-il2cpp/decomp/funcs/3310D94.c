// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$MKECLNPFGHC @ RVA 0x3310D94

int32_t Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MKECLNPFGHC
                  (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,
                  System_String_o *BANLPNAAHPH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_045677ac & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__);
    DAT_045677ac = 1;
  }
  __this_00 = (__this->fields).FHPLGHNOJGE;
  if (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return 0;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__
                         );
      if (pIVar2 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pIVar2[1].klass,BANLPNAAHPH,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      __this_00 = (__this->fields).FHPLGHNOJGE;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

