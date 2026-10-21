// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$HMNIABGDCDL @ RVA 0x300FD14

void Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__HMNIABGDCDL
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  System_Collections_Generic_List_bool____o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04565b9f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    FUN_01bab630(&StringLiteral_8971);
    DAT_04565b9f = 1;
  }
  __this_00 = (__this->fields).MFKHOLCJNKE;
  if (__this_00 != (System_Collections_Generic_List_bool____o *)0x0) {
    if ((__this_00->fields)._size <= ABACOMLKIAJ) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_8971,(MethodInfo *)0x0);
      return;
    }
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,ABACOMLKIAJ,
                        Method_System_Collections_Generic_List<bool[]>_get_Item__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((uint)AAJGEHHPMGH < *(uint *)&pIVar1[1].monitor) {
        *(undefined1 *)((long)&pIVar1[2].klass + (long)AAJGEHHPMGH) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

