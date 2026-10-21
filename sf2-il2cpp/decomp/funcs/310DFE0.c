// Nekki.SF2.GUI.Shop.ItemsPanel$$GetDiscountItem @ RVA 0x310DFE0

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_ItemsPanel__GetDiscountItem
          (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  HOOAAGABMBL_o *pHVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  long lVar5;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar6;
  HOOAAGABMBL_o *pHVar7;
  HOOAAGABMBL_o *pHVar8;
  HOOAAGABMBL_o *pHVar9;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04566561 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_04566561 = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).BAADKBDJJPJ;
  if (__this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  pHVar6 = (HOOAAGABMBL_o *)0x0;
  pHVar8 = (HOOAAGABMBL_o *)0x0;
  pHVar9 = (HOOAAGABMBL_o *)0x0;
  do {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      __this_00 = local_58.fields._current;
      pHVar7 = pHVar6;
      if (!bVar3) goto LAB_0320e104;
      if ((HOOAAGABMBL_o *)local_58.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar5 = (*(((HOOAAGABMBL_c *)(local_58.fields._current)->klass)->vtable)._6_PDECHBMCBDB.
                methodPtr)(local_58.fields._current,0,
                           (((HOOAAGABMBL_c *)(local_58.fields._current)->klass)->vtable).
                           _6_PDECHBMCBDB.method);
      iVar4 = HOOAAGABMBL__DAFPKDKDOJF((HOOAAGABMBL_o *)__this_00,0,(MethodInfo *)0x0);
    } while (lVar5 == 0);
    pHVar1 = (HOOAAGABMBL_o *)__this_00;
    if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
      pHVar1 = pHVar8;
    }
    bVar3 = *(char *)(lVar5 + 0x79) == '\0';
    pHVar2 = (HOOAAGABMBL_o *)__this_00;
    if (pHVar9 != (HOOAAGABMBL_o *)0x0 || bVar3) {
      pHVar2 = pHVar9;
    }
    pHVar7 = (HOOAAGABMBL_o *)__this_00;
    if (pHVar8 != (HOOAAGABMBL_o *)0x0 && (pHVar9 != (HOOAAGABMBL_o *)0x0 || bVar3)) {
      pHVar7 = pHVar6;
    }
    pHVar6 = pHVar7;
    pHVar7 = (HOOAAGABMBL_o *)__this_00;
    pHVar8 = pHVar1;
    pHVar9 = pHVar2;
  } while (iVar4 != 1);
LAB_0320e104:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
  return pHVar7;
}

