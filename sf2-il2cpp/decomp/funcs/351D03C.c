// JLEKKANADII$$HNJCEIGCIGM @ RVA 0x351D03C

void JLEKKANADII__HNJCEIGCIGM(InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_InputDevice__o *pSVar4;
  MethodInfo *extraout_x1;
  InControl_InputDevice_array *pIVar5;
  
  if ((DAT_045689a1 & 1) == 0) {
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Contains__);
    DAT_045689a1 = 1;
    method = extraout_x1;
  }
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JLEKKANADII_TypeInfo,method);
  }
  pSVar4 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
  if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)GIDJIIFPHJK,
                       Method_System_Collections_Generic_List<InputDevice>_Contains__);
    if (bVar3) {
      return;
    }
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<InputDevice>_Add__;
    pSVar4 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
    if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      pIVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pIVar5 != (InControl_InputDevice_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pIVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pIVar5->m_Items[(int)uVar1] = GIDJIIFPHJK;
          thunk_FUN_01c20e04(pIVar5->m_Items + (int)uVar1,GIDJIIFPHJK);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GIDJIIFPHJK,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

