// AMLGCIBIOLF$$MAHFCKJGBPP @ RVA 0x331C054

void AMLGCIBIOLF__MAHFCKJGBPP(AMLGCIBIOLF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  DOPEEDABNEK_o *pDVar4;
  HOOAAGABMBL_o *pHVar5;
  KKLJIDJBFEI_o *pKVar6;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  HOOAAGABMBL_o **ppHVar9;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_0456781d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456781d = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar7 = (__this->fields).DPDEAEJBFKA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar7,(MethodInfo *)0x0);
  iVar3 = MMOGKBGEPGM__GFLCMDMEOBN(pSVar7,(MethodInfo *)0x0);
  (__this->fields).LKGMCFDHLPK = iVar3;
  pSVar7 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).MHDJAEILAJL,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).MLPKGJACOFA;
  *ppSVar8 = pSVar7;
  thunk_FUN_01c20e04(ppSVar8);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar4 != (DOPEEDABNEK_o *)0x0) {
    pHVar5 = DOPEEDABNEK__CKKIPBAIEMN(pDVar4,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
    ppHVar9 = &(__this->fields).IHKJJFAEEHM;
    *ppHVar9 = pHVar5;
    thunk_FUN_01c20e04(ppHVar9,pHVar5);
    BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if (*ppHVar9 == (HOOAAGABMBL_o *)0x0) {
      pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar6 == (KKLJIDJBFEI_o *)0x0) goto LAB_0341c2b8;
      method_00 = extraout_x1_00;
      if ((pKVar6->fields).super._MGGBEPKMPCF_k__BackingField != false) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if ((pDVar4 == (DOPEEDABNEK_o *)0x0) ||
           (__this_00 = (pDVar4->fields)._BDIDINACBBH_k__BackingField,
           __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) goto LAB_0341c2b8;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_58,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                            );
          pIVar1 = local_58.fields._current;
          if (!bVar2) goto LAB_0341c280;
          if ((HOOAAGABMBL_o *)local_58.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            (((HOOAAGABMBL_Fields *)((long)local_58.fields._current + 0x10))->
                             _COIPKAKHDFP_k__BackingField,*ppSVar8,(MethodInfo *)0x0);
        } while (!bVar2);
        *ppHVar9 = (HOOAAGABMBL_o *)pIVar1;
        thunk_FUN_01c20e04(ppHVar9,pIVar1);
LAB_0341c280:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        method_00 = extraout_x1_01;
      }
    }
    AMLGCIBIOLF__GBPHJBEGCEH(__this,method_00);
    return;
  }
LAB_0341c2b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

