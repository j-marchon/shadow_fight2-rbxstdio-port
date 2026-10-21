// BGFNOPDHEOM$$IIHMILNAGAB @ RVA 0x32AB4CC

void BGFNOPDHEOM__IIHMILNAGAB
               (int32_t PCLEALHGACC,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  NLIDHEAMLMC_o *pNVar3;
  System_Collections_Generic_List_NLIDHEAMLMC__o *__this;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  NLIDHEAMLMC_array *pNVar4;
  
  method_00 = (MethodInfo *)(ulong)(uint)NAIJBCMHBFK;
  if ((DAT_04567437 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>_Add__);
    FUN_01bab630(&NLIDHEAMLMC_TypeInfo);
    DAT_04567437 = 1;
    method_00 = extraout_x1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pNVar3 = BGFNOPDHEOM__PFOBJKIPLCK(PCLEALHGACC,method_00);
  if (pNVar3 != (NLIDHEAMLMC_o *)0x0) {
    (pNVar3->fields).ELHIGHABJBJ = NAIJBCMHBFK;
    (pNVar3->fields).OFFPEKODFPE = OPHMGAKOJLP;
    return;
  }
  pNVar3 = (NLIDHEAMLMC_o *)thunk_FUN_01bda818(NLIDHEAMLMC_TypeInfo);
  NLIDHEAMLMC___ctor(pNVar3,PCLEALHGACC,NAIJBCMHBFK,OPHMGAKOJLP,(MethodInfo *)0x0);
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<NLIDHEAMLMC>_Add__;
  __this = BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC;
  if (__this != (System_Collections_Generic_List_NLIDHEAMLMC__o *)0x0) {
    pNVar4 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pNVar4 != (NLIDHEAMLMC_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pNVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pNVar4->m_Items[(int)uVar1] = pNVar3;
        thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,pNVar3);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pNVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

