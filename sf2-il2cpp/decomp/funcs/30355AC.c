// FJNIPMODEPO$$EECHNLMEMEF @ RVA 0x30355AC

void FJNIPMODEPO__EECHNLMEMEF
               (FJNIPMODEPO_o *__this,System_Exception_o *BPKHJMDEHED,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_Exception__o *__this_00;
  System_Exception_array *pSVar3;
  
  if ((DAT_04565d36 & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>_Add__);
    DAT_04565d36 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    Firebase_Crashlytics_Crashlytics__LogException(BPKHJMDEHED,(MethodInfo *)0x0);
    return;
  }
  if ((FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  lVar2 = Method_System_Collections_Generic_List<Exception>_Add__;
  __this_00 = FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MMPNIPJGIDD;
  if (__this_00 != (System_Collections_Generic_List_Exception__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Exception_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = BPKHJMDEHED;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,BPKHJMDEHED);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)BPKHJMDEHED,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

