// CIOBNDOOGIM$$.ctor @ RVA 0x35680E0

void CIOBNDOOGIM___ctor(CIOBNDOOGIM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  CIOBNDOOGIM_c *method_00;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this_00;
  CIOBNDOOGIM_array *pCVar3;
  
  if ((DAT_04568c06 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Add__);
    DAT_04568c06 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  method_00 = CIOBNDOOGIM_TypeInfo;
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CIOBNDOOGIM_c *)thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM__OCBMEPOCFHH((MethodInfo *)method_00);
  lVar2 = Method_System_Collections_Generic_List<CIOBNDOOGIM>_Add__;
  __this_00 = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if (__this_00 != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    pCVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pCVar3 != (CIOBNDOOGIM_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pCVar3->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pCVar3->m_Items + (int)uVar1,__this);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

