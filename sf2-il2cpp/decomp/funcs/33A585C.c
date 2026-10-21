// GGLKHCAIGDI$$GCPMMFAOHHG @ RVA 0x33A585C

int32_t GGLKHCAIGDI__GCPMMFAOHHG
                  (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
                  bool OKBCMODBOOO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  KBCOFHAJOCK_o *__this_02;
  uint uVar3;
  DOPEEDABNEK_o *pDVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567ced & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567ced = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,true,method);
  if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  iVar5 = 0;
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
LAB_034a5954:
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    pIVar1 = local_80.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__)
      ;
      return iVar5;
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
    if (__this_01 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    EIKFGOCCOIE = FOKJBDHLIMG__JMMDGEOBMOC
                            (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
  } while (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0);
  if ((EIKFGOCCOIE->fields).OCABLLPNEGL == 0) {
    if (OKBCMODBOOO) goto code_r0x034a59ac;
    goto LAB_034a59c4;
  }
  uVar3 = 1;
  goto LAB_034a5a28;
code_r0x034a59ac:
  if (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = IGFGDDANEPE__FGDEJFIKMCP(NKCMBEFHFII,EIKFGOCCOIE,(MethodInfo *)0x0);
  if (!bVar2) {
LAB_034a59c4:
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
    if (pDVar4 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (pDVar4->fields)._GMODBKFPHPN_k__BackingField;
    if (__this_02 == (KBCOFHAJOCK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = KBCOFHAJOCK__CPKKHCAIGLN(__this_02,EIKFGOCCOIE,(MethodInfo *)0x0);
    uVar3 = (uint)bVar2;
LAB_034a5a28:
    iVar5 = iVar5 + uVar3;
  }
  goto LAB_034a5954;
}

