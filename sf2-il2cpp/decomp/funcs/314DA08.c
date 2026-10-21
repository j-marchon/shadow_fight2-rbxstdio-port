// Nekki.SF2.GUI.ModuleHolder$$PLFDCCKIGHJ @ RVA 0x314DA08

void Nekki_SF2_GUI_ModuleHolder__PLFDCCKIGHJ
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_UIModule__o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_045667dd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Clear__);
    DAT_045667dd = 1;
  }
  pSVar1 = (__this->fields).LPIPKHINEJH;
  if (pSVar1 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).LPIPKHINEJH;
      if (pSVar1 == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0324daac;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._MountOnStart,
               Method_System_Collections_Generic_List<UIModule>_AddRange__);
    pSVar1 = (__this->fields).LPIPKHINEJH;
    if (pSVar1 != (System_Collections_Generic_List_UIModule__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 (__this->fields)._MountOnStart_Mobiles,
                 Method_System_Collections_Generic_List<UIModule>_AddRange__);
      Nekki_SF2_GUI_ModuleHolder__BGGBJPGPKPF((__this->fields).LPIPKHINEJH,method_00);
      return;
    }
  }
LAB_0324daac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

