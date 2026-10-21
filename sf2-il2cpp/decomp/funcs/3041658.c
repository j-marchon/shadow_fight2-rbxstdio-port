// PJKHAJKEHEL$$OBDMCJAPKPJ @ RVA 0x3041658

void PJKHAJKEHEL__OBDMCJAPKPJ(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  PJKHAJKEHEL_o *__this_01;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  HOOAAGABMBL_o *pHVar7;
  System_String_array *pSVar8;
  int index;
  
                    /* try { // try from 0314165c to 0324165f has its CatchHandler @ 0314167c */
                    /* try { // try from 03141660 to 03241687 has its CatchHandler @ 0314157c */
  if ((DAT_04565db4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0314165c with catch @ 0314167c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 03141688 to 03241693 has its CatchHandler @ 031416a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
                    /* try { // try from 03141694 to 0324169f has its CatchHandler @ 0314157c */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
                    /* try { // try from 031416a0 to 032416a7 has its CatchHandler @ 031416a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03141688 with catch @ 031416a8
                       catch(type#2 @ 00000000) { ... } // from try @ 031416a0 with catch @ 031416a8
                        */
    DAT_04565db4 = 1;
  }
  pSVar6 = (__this->fields).NIKIIEPMLJD;
  if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031419a4;
  uVar1 = (pSVar6->fields)._size;
  pMVar5 = (MethodInfo *)(ulong)uVar1;
  (pSVar6->fields)._size = 0;
  (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
  if (0 < (int)uVar1) {
    System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,uVar1,(MethodInfo *)0x0);
  }
  pHVar7 = (__this->fields).HLAAFCIMBAP;
  if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                      ((pHVar7->fields)._HKPEJNKNEGG_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      pHVar7 = (__this->fields).HLAAFCIMBAP;
      if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_031419a4;
      pSVar6 = (__this->fields).NIKIIEPMLJD;
      pSVar4 = PJKHAJKEHEL__LPEPCPLNNFP
                         ((PJKHAJKEHEL_o *)0x0,(pHVar7->fields)._HKPEJNKNEGG_k__BackingField,pMVar5)
      ;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031419a4;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_String_array *)0x0) goto LAB_031419a4;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        pMVar5 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   (MethodInfo_26E4DAC *)pMVar5);
      }
    }
  }
  pHVar7 = (__this->fields).PNAAPNFPCPI;
  if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                      ((pHVar7->fields)._HKPEJNKNEGG_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      pHVar7 = (__this->fields).PNAAPNFPCPI;
      if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_031419a4;
      pSVar6 = (__this->fields).NIKIIEPMLJD;
      pSVar4 = PJKHAJKEHEL__LPEPCPLNNFP
                         ((PJKHAJKEHEL_o *)0x0,(pHVar7->fields)._HKPEJNKNEGG_k__BackingField,pMVar5)
      ;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031419a4;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_String_array *)0x0) goto LAB_031419a4;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        pMVar5 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   (MethodInfo_26E4DAC *)pMVar5);
      }
    }
  }
  pHVar7 = (__this->fields).PEMECEBIJDM;
  if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                      ((pHVar7->fields)._HKPEJNKNEGG_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      pHVar7 = (__this->fields).PEMECEBIJDM;
      if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_031419a4;
      pSVar6 = (__this->fields).NIKIIEPMLJD;
      pSVar4 = PJKHAJKEHEL__LPEPCPLNNFP
                         ((PJKHAJKEHEL_o *)0x0,(pHVar7->fields)._HKPEJNKNEGG_k__BackingField,pMVar5)
      ;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031419a4;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_String_array *)0x0) goto LAB_031419a4;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        pMVar5 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   (MethodInfo_26E4DAC *)pMVar5);
      }
    }
  }
  pHVar7 = (__this->fields).IIDEPPHFJPA;
  if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                      ((pHVar7->fields)._HKPEJNKNEGG_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      pHVar7 = (__this->fields).IIDEPPHFJPA;
      if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_031419a4;
      pSVar6 = (__this->fields).NIKIIEPMLJD;
      pSVar4 = PJKHAJKEHEL__LPEPCPLNNFP
                         ((PJKHAJKEHEL_o *)0x0,(pHVar7->fields)._HKPEJNKNEGG_k__BackingField,pMVar5)
      ;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031419a4;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_String_array *)0x0) goto LAB_031419a4;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_00 = (__this->fields).IIBBDKMIPOF;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      pSVar6 = (__this->fields).NIKIIEPMLJD;
      pMVar5 = Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__;
      __this_01 = (PJKHAJKEHEL_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      if ((__this_01 == (PJKHAJKEHEL_o *)0x0) ||
         (pSVar4 = PJKHAJKEHEL__LPEPCPLNNFP
                             (__this_01,(System_String_o *)(__this_01->fields).NIKIIEPMLJD,pMVar5),
         lVar2 = Method_System_Collections_Generic_List<string>_Add__,
         pSVar6 == (System_Collections_Generic_List_string__o *)0x0)) break;
      pSVar8 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar8 == (System_String_array *)0x0) break;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      __this_00 = (__this->fields).IIBBDKMIPOF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0);
  }
LAB_031419a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

