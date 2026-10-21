// ECENNHNBAME$$LLPDMCGMLOK @ RVA 0x301A61C

void ECENNHNBAME__LLPDMCGMLOK(ECENNHNBAME_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ECENNHNBAME_ECNMNALHFIF_o *pEVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  MethodInfo *method_02;
  ECENNHNBAME_ECNMNALHFIF_array *pEVar6;
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *__this_00;
  
  if ((DAT_04565bfb & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_ECNMNALHFIF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>_Add__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_22364);
    DAT_04565bfb = 1;
  }
  bVar3 = System_String__IsNullOrEmpty((__this->fields).KBCOHMPJELJ,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pEVar4 = ECENNHNBAME__GDMIJMOJIFH(__this,method_00);
  if (pEVar4 != (ECENNHNBAME_ECNMNALHFIF_o *)0x0) {
    pEVar4 = ECENNHNBAME__GDMIJMOJIFH(__this,method_01);
    ECENNHNBAME__MAOJJLKMHIF(__this,pEVar4,in_x2);
    return;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = MGENAMAJALB__DGOOOLFLFEH((MethodInfo *)0x0);
  method_02 = (MethodInfo *)(__this->fields).KBCOHMPJELJ;
  pSVar5 = System_String__Format
                     (StringLiteral_22364,(Il2CppObject *)pSVar5,(Il2CppObject *)method_02,
                      (MethodInfo *)0x0);
  ECENNHNBAME__NLGCBCPOCID(__this,pSVar5,method_02);
  if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = ECENNHNBAME_TypeInfo->static_fields->PHNBIJIOHJO;
  pEVar4 = (ECENNHNBAME_ECNMNALHFIF_o *)thunk_FUN_01bda818(ECENNHNBAME_ECNMNALHFIF_TypeInfo);
  System_Object___ctor((Il2CppObject *)pEVar4,(MethodInfo *)0x0);
  if (pEVar4 != (ECENNHNBAME_ECNMNALHFIF_o *)0x0) {
    (pEVar4->fields).KBCOHMPJELJ = (__this->fields).KBCOHMPJELJ;
    thunk_FUN_01c20e04();
    (pEVar4->fields).EGDMNJBHAPF = (__this->fields).MMENPDNBNHN;
    thunk_FUN_01c20e04();
    lVar2 = Method_System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>_Add__;
    if (__this_00 != (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)0x0) {
      pEVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pEVar6 != (ECENNHNBAME_ECNMNALHFIF_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pEVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pEVar6->m_Items[(int)uVar1] = pEVar4;
          thunk_FUN_01c20e04(pEVar6->m_Items + (int)uVar1,pEVar4);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pEVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

