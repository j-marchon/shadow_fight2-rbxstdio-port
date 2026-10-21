// DKEOKAONIIB$$FCKPGNAFOPM @ RVA 0x32ECB8C

void DKEOKAONIIB__FCKPGNAFOPM(IGPDCHBJAPD_o *HPACPFLKHPK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x0;
  System_String_o *pSVar6;
  System_Text_StringBuilder_o *__this;
  Il2CppObject *arg0;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  DKEOKAONIIB_StaticFields *pDVar7;
  System_String_array *pSVar8;
  PJKHAJKEHEL_o *pPVar9;
  PJKHAJKEHEL_o *pPVar10;
  System_Collections_Generic_List_string__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567648 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&uint_TypeInfo);
    FUN_01bab630(&StringLiteral_14970);
    FUN_01bab630(&StringLiteral_22253);
    DAT_04567648 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
    method = extraout_x1_00;
  }
  pDVar7 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar7->LDBHFHDLBND != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
      pDVar7 = DKEOKAONIIB_TypeInfo->static_fields;
      method = extraout_x1_01;
    }
    if (pDVar7->GIGIAMDJECC != false) {
      if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
        pDVar7 = DKEOKAONIIB_TypeInfo->static_fields;
      }
      if ((HPACPFLKHPK == (IGPDCHBJAPD_o *)0x0) ||
         (pPVar9 = (HPACPFLKHPK->fields).FIJLCCEJANF, pPVar9 == (PJKHAJKEHEL_o *)0x0))
      goto LAB_033ecec4;
      pSVar11 = pDVar7->OBLIJEFDJGN;
      pSVar4 = System_String__Concat
                         (StringLiteral_14970,(pPVar9->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar11 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033ecec4;
      pSVar8 = (pSVar11->fields)._items;
      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
      if (pSVar8 == (System_String_array *)0x0) goto LAB_033ecec4;
      uVar1 = (pSVar11->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar11->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = pSVar4;
        pMVar5 = (MethodInfo *)thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pMVar5 = extraout_x0;
      }
      pSVar4 = DKEOKAONIIB__MIHAHMJPOOA(pMVar5);
      pSVar6 = System_UInt32__ToString
                         ((int)DKEOKAONIIB_TypeInfo->static_fields + 4,(MethodInfo *)0x0);
                    /* try { // try from 033ecd40 to 034ece73 has its CatchHandler @ 033ecd40
                       catch() { ... } // from try @ 033ecd40 with catch @ 033ecd40
                       catch() { ... } // from try @ 033ecf4c with catch @ 033ecd40
                       catch() { ... } // from try @ 033ecff4 with catch @ 033ecd40
                       catch() { ... } // from try @ 033ecffc with catch @ 033ecd40
                       catch() { ... } // from try @ 033ed0b0 with catch @ 033ecd40 */
      pSVar4 = System_String__Format(pSVar4,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo)
      ;
      System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
      pSVar11 = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
      if (pSVar11 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033ecec4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar11,
                 Method_System_Collections_Generic_List<string>_GetEnumerator__);
      local_60.fields._list =
           (System_Collections_Generic_List_T__o *)
           CONCAT44(local_78.fields._list._4_4_,(uint32_t)local_78.fields._list);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
        if (!bVar3) break;
        if (__this == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__Append
                  (__this,(System_String_o *)local_60.fields._current,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_033ecec4;
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      NEHNBJKKABI__GPNPELOHJCJ(pSVar4,pSVar6,(MethodInfo *)0x0);
    }
    if (((HPACPFLKHPK == (IGPDCHBJAPD_o *)0x0) ||
        (pPVar9 = (HPACPFLKHPK->fields).FIJLCCEJANF, pPVar9 == (PJKHAJKEHEL_o *)0x0)) ||
       (pPVar10 = (HPACPFLKHPK->fields).DIJDCNOLDOK, pPVar10 == (PJKHAJKEHEL_o *)0x0)) {
LAB_033ecec4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = (pPVar9->fields).NBPNHMKOJKB;
    pSVar6 = (pPVar10->fields).NBPNHMKOJKB;
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_78.fields._list._0_4_ = DKEOKAONIIB_TypeInfo->static_fields->LKMPPCHMNED;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(uint_TypeInfo,&local_78);
                    /* try { // try from 033ece74 to 034ece9b has its CatchHandler @ 033ed018 */
    pMVar5 = (MethodInfo *)
             System_String__Format
                       (StringLiteral_22253,arg0,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar6,
                        (MethodInfo *)0x0);
    pSVar4 = DKEOKAONIIB__MOBLEDGMGPO(pMVar5);
    NEHNBJKKABI__DNECLDMBFOH(pSVar4,(System_String_o *)pMVar5,false,(MethodInfo *)0x0);
    DKEOKAONIIB_TypeInfo->static_fields->LKMPPCHMNED =
         DKEOKAONIIB_TypeInfo->static_fields->LKMPPCHMNED + 1;
  }
  return;
}

