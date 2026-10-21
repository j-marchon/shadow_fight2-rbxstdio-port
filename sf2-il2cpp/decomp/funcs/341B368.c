// HEFOANCOHDC$$IAPPOPBLBHP @ RVA 0x341B368

void HEFOANCOHDC__IAPPOPBLBHP
               (HEFOANCOHDC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  NJPBBPOABKP_o *__this_00;
  HEFOANCOHDC_o **ppHVar3;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_01;
  NJPBBPOABKP_array *pNVar4;
  
  if ((DAT_045680cb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__);
    FUN_01bab630(&NJPBBPOABKP_TypeInfo);
    DAT_045680cb = 1;
  }
  __this_00 = (NJPBBPOABKP_o *)thunk_FUN_01bda818(NJPBBPOABKP_TypeInfo);
  NJPBBPOABKP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (NJPBBPOABKP_o *)0x0) {
    ppHVar3 = &(__this_00->fields)._MEFGNAIILBJ_k__BackingField;
    *ppHVar3 = __this;
    thunk_FUN_01c20e04(ppHVar3,__this);
    NJPBBPOABKP__HNIHOIAMDPC(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<NJPBBPOABKP>_Add__;
    __this_01 = (__this->fields).EMNOFACFIBF;
    if (__this_01 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
      pNVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pNVar4 != (NJPBBPOABKP_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

