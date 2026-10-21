// MGNPHCAAEIO$$NCNJKIHOOKB @ RVA 0x34038F8

bool MGNPHCAAEIO__NCNJKIHOOKB(HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this;
  KBCOFHAJOCK_o *__this_00;
  PLCCJCFAFKA_o *pPVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar5;
  GGHCLMEFIGO_o *pGVar6;
  DOPEEDABNEK_o *pDVar7;
  int iVar8;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 035038f8 to 0360391f has its CatchHandler @ 03503600 */
                    /* catch() { ... } // from try @ 035038f4 with catch @ 03503918 */
                    /* try { // try from 03503920 to 03603927 has its CatchHandler @ 0350393c */
  if ((DAT_04568007 & 1) == 0) {
                    /* try { // try from 03503928 to 03603933 has its CatchHandler @ 03503600 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
                    /* try { // try from 03503934 to 0360393b has its CatchHandler @ 0350393c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03503920 with catch @ 0350393c
                       catch(type#2 @ 00000000) { ... } // from try @ 03503934 with catch @ 0350393c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568007 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
      (pGVar6 = (pAVar5->fields).OIDPLCLELEN, pGVar6 == (GGHCLMEFIGO_o *)0x0)) ||
     (__this = (pGVar6->fields).DPOPJKJLDEE,
     __this == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      pIVar1 = local_70.fields._current;
      if (!bVar2) {
        iVar8 = 5;
        goto LAB_03503aa8;
      }
      if ((IGFGDDANEPE_o *)local_70.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = IGFGDDANEPE__FGDEJFIKMCP
                        ((IGFGDDANEPE_o *)local_70.fields._current,EIKFGOCCOIE,(MethodInfo *)0x0);
    } while (!bVar3);
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
    if (pDVar7 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pDVar7->fields)._GMODBKFPHPN_k__BackingField;
    if (__this_00 == (KBCOFHAJOCK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar4 = KBCOFHAJOCK__CBEELEAJKIN
                       (__this_00,((IGFGDDANEPE_Fields *)((long)pIVar1 + 0x10))->NPFMOEOIEKM,
                        (MethodInfo *)0x0);
  } while (pPVar4 != (PLCCJCFAFKA_o *)0x0);
  iVar8 = 4;
LAB_03503aa8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
  return bVar2 && iVar8 == 4;
}

