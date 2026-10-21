// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$PNBPCMGLKEF @ RVA 0x300F5E8

bool Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__PNBPCMGLKEF
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_bool____o *__this_00;
  Il2CppObject *pIVar2;
  
  if ((DAT_04565b9d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    DAT_04565b9d = 1;
  }
  __this_00 = (__this->fields).MFKHOLCJNKE;
  if (__this_00 != (System_Collections_Generic_List_bool____o *)0x0) {
    if (ABACOMLKIAJ < (__this_00->fields)._size) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,ABACOMLKIAJ,
                          Method_System_Collections_Generic_List<bool[]>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0310f68c;
      if (*(uint *)&pIVar2[1].monitor <= (uint)AAJGEHHPMGH) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      bVar1 = *(char *)((long)&pIVar2[2].klass + (long)AAJGEHHPMGH) != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0310f68c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

