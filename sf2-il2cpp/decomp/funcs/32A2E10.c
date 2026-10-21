// IGJEEGBBNFC$$HHIAINBEGIB @ RVA 0x32A2E10

void IGJEEGBBNFC__HHIAINBEGIB
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  MMFIDKMDADC_o *pMVar2;
  NILLKLHKLHG_o *pNVar3;
  System_String_o *value;
  OLKKAIFGGAK_o *pOVar4;
  NJPBHDMCLIN_o *pNVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  HJNEOLCKEMD_o *pHVar6;
  float fVar7;
  float __this_01;
  float local_24;
  
  if ((DAT_045673d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&LBGHEJGGCHM_TypeInfo);
    DAT_045673d3 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar6 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar6 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (LBGHEJGGCHM_TypeInfo->_2).naturalAligment;
    if (((pHVar6->klass->_2).naturalAligment < bVar1) ||
       ((pHVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)LBGHEJGGCHM_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar6);
    }
    if (pHVar6[1].klass != (HJNEOLCKEMD_c *)0x0) {
      key = (pHVar6->fields)._COIPKAKHDFP_k__BackingField;
      pMVar2 = NILLKLHKLHG__CHKGAHCDFJF((NILLKLHKLHG_o *)pHVar6[1].klass,false,(MethodInfo *)0x0);
      if (pMVar2 != (MMFIDKMDADC_o *)0x0) {
        fVar7 = MMFIDKMDADC__OFFODGKLGOP(pMVar2,(MethodInfo *)0x0);
        __this_01 = fVar7;
        local_24 = fVar7;
        if (*(char *)&pHVar6[1].monitor != '\0') {
          pNVar3 = *(NILLKLHKLHG_o **)&pHVar6[1].fields.super;
          if ((pNVar3 == (NILLKLHKLHG_o *)0x0) ||
             (pMVar2 = NILLKLHKLHG__CHKGAHCDFJF(pNVar3,false,(MethodInfo *)0x0),
             pMVar2 == (MMFIDKMDADC_o *)0x0)) goto LAB_033a2f74;
          __this_01 = MMFIDKMDADC__OFFODGKLGOP(pMVar2,(MethodInfo *)0x0);
          if (fVar7 < __this_01) {
            fVar7 = __this_01;
            local_24 = __this_01;
          }
        }
        if (*(char *)&pHVar6[1].fields.super._MEFGNAIILBJ_k__BackingField != '\0') {
          pNVar3 = (NILLKLHKLHG_o *)pHVar6[1].fields._COIPKAKHDFP_k__BackingField;
          if ((pNVar3 == (NILLKLHKLHG_o *)0x0) ||
             (pMVar2 = NILLKLHKLHG__CHKGAHCDFJF(pNVar3,false,(MethodInfo *)0x0),
             pMVar2 == (MMFIDKMDADC_o *)0x0)) goto LAB_033a2f74;
          __this_01 = MMFIDKMDADC__OFFODGKLGOP(pMVar2,(MethodInfo *)0x0);
          if (__this_01 < fVar7) {
            local_24 = __this_01;
          }
        }
        pOVar4 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
           (pNVar5 = (pOVar4->fields).FNEAAHOOHAA, pNVar5 != (NJPBHDMCLIN_o *)0x0)) {
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pNVar5->fields).JJCFAGEDAAN;
          value = System_Single__ToString(__this_01,(MethodInfo *)&local_24);
          if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (__this_00,(Il2CppObject *)key,(Il2CppObject *)value,
                       Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
            return;
          }
        }
      }
    }
  }
LAB_033a2f74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

