// ADGIHFGIFHO$$ACBMLHJIFMD @ RVA 0x312BD50

System_Collections_Generic_List_HOOAAGABMBL__o *
ADGIHFGIFHO__ACBMLHJIFMD(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  HOOAAGABMBL_o *pHVar3;
  HOOAAGABMBL_array *pHVar4;
  
  if ((DAT_04566698 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    DAT_04566698 = 1;
  }
  __this_00 = PJKHAJKEHEL__ACBMLHJIFMD((PJKHAJKEHEL_o *)__this,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).GFNKONPLPEB;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0322be64;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_0322be64;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).NOKHEGPHOHK;
  if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
    return __this_00;
  }
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 != (HOOAAGABMBL_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pHVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pHVar4->m_Items[(int)uVar1] = pHVar3;
        thunk_FUN_01c20e04();
        return __this_00;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return __this_00;
    }
  }
LAB_0322be64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

