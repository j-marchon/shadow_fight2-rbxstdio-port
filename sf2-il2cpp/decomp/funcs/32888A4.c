// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HJHIFHPBJOB @ RVA 0x32888A4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__HJHIFHPBJOB
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  PLCCJCFAFKA_o *pPVar4;
  System_Collections_Generic_List_PLCCJCFAFKA__o *__this_00;
  IGFGDDANEPE_o *pIVar5;
  AKADDLNNLKH_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *pIVar6;
  DOPEEDABNEK_o *pDVar7;
  LPGLKMNHELJ_o *pLVar8;
  ACHLOMELAJE_o *pAVar9;
  System_String_o *pSVar10;
  KBCOFHAJOCK_o *__this_03;
  Il2CppClass *KGLJICLJHEL;
  int iVar11;
  int32_t local_a4;
  int32_t local_a0;
  int local_9c;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045672eb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_get_Current__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20122);
    FUN_01bab630(&StringLiteral_18949);
    FUN_01bab630(&StringLiteral_19215);
    FUN_01bab630(&StringLiteral_21566);
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_20950);
    FUN_01bab630(&StringLiteral_19216);
    FUN_01bab630(&StringLiteral_10075);
    FUN_01bab630(&StringLiteral_11314);
    DAT_045672eb = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
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
  pDVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (((pDVar7 != (DOPEEDABNEK_o *)0x0) && (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) &&
     (__this_03 = (pDVar7->fields)._GMODBKFPHPN_k__BackingField, __this_03 != (KBCOFHAJOCK_o *)0x0))
  {
    pPVar4 = KBCOFHAJOCK__CBEELEAJKIN
                       (__this_03,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    if (pPVar4 == (PLCCJCFAFKA_o *)0x0) {
      return;
    }
    __this_00 = (__this_03->fields).AJJILEMLFOI;
    if (__this_00 != (System_Collections_Generic_List_PLCCJCFAFKA__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PLCCJCFAFKA>_GetEnumerator__);
      iVar11 = 0;
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_MoveNext__
                               ), bVar1) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        KGLJICLJHEL = local_80.fields._current[1].klass;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar5 = NLPJLHOEAOE__JNFIBDBHNOA((System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
        if (pIVar5 != (IGFGDDANEPE_o *)0x0) {
          iVar11 = iVar11 + 1;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PLCCJCFAFKA>_Dispose__)
      ;
      pLVar8 = (__this->fields).DKMMBMBMJBO;
      if ((pLVar8 != (LPGLKMNHELJ_o *)0x0) &&
         (pSVar10 = (pLVar8->fields).JOPIEJMBFHK, pSVar10 != (System_String_o *)0x0)) {
        iVar2 = System_String__IndexOf(pSVar10,StringLiteral_15862,(MethodInfo *)0x0);
        pSVar10 = System_String__Substring(pSVar10,iVar2,(MethodInfo *)0x0);
        pSVar10 = System_String__Format
                            (StringLiteral_11314,(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
           (__this_01 = (pAVar9->fields).MLNLNNNNPGH, __this_01 != (AKADDLNNLKH_o *)0x0)) {
          iVar2 = AKADDLNNLKH__CBGJMMDIFGA(__this_01,pSVar10,(MethodInfo *)0x0);
          pIVar5 = NLPJLHOEAOE__JNFIBDBHNOA(StringLiteral_10075,(MethodInfo *)0x0);
          if (pIVar5 == (IGFGDDANEPE_o *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = IGFGDDANEPE__LDJLMEFOMLG(pIVar5,(MethodInfo *)0x0);
          }
          __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                      thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
          MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_02,(MethodInfo *)0x0);
          if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_20950,(Il2CppObject *)(pPVar4->fields).JIJLBFGKNJK,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_19216,
                       (Il2CppObject *)(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            local_9c = iVar11;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_9c);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_19215,pIVar6,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            local_a0 = iVar2;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_a0);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_18949,pIVar6,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            local_a4 = iVar3;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_a4);
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (__this_02,StringLiteral_20122,pIVar6,
                       Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
              local_98.fields._list =
                   (System_Collections_Generic_List_T__o *)(pAVar9->fields).FBEBOPDOKFH;
              pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_98);
              System_Collections_Generic_Dictionary<object,_object>__Add
                        (__this_02,StringLiteral_21566,pIVar6,
                         Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
              NFNBHPOJFNJ__NOJIAJPLOKB(10,(MDNLIFLBFNO_o *)__this_02,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

