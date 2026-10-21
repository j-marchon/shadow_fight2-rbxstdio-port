// IGJEEGBBNFC$$ICDHDHBOJGK @ RVA 0x329F0A0

void IGJEEGBBNFC__ICDHDHBOJGK
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool MGHHNOBLBDI,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  Il2CppObject *PMACBPAMPJA;
  bool bVar3;
  int32_t iVar4;
  HJNEOLCKEMD_o *pHVar5;
  MMFIDKMDADC_o *__this_00;
  FPLCEOJCPOD_o *pFVar6;
  OLKKAIFGGAK_o *pOVar7;
  PJKHAJKEHEL_o *pPVar8;
  PHDCILJMEHO_o *pPVar9;
  HEFOANCOHDC_o *pHVar10;
  OLKKAIFGGAK_OGCKCABMHLC_o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  undefined8 local_58;
  
  if ((DAT_045673bf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_NILLKLHKLHG>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_NILLKLHKLHG>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_NILLKLHKLHG>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_NILLKLHKLHG>_get_Current__
                );
    FUN_01bab630(&FPLCEOJCPOD_TypeInfo);
    FUN_01bab630(&HMFIBKJMFHB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_NILLKLHKLHG>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_NILLKLHKLHG>_get_Value__);
    FUN_01bab630(&StringLiteral_5065);
    DAT_045673bf = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_58 = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar5 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar5 != (HJNEOLCKEMD_o *)0x0)) {
    bVar2 = (HMFIBKJMFHB_TypeInfo->_2).naturalAligment;
    if (((pHVar5->klass->_2).naturalAligment < bVar2) ||
       ((pHVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)HMFIBKJMFHB_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    if (pHVar5[1].klass != (HJNEOLCKEMD_c *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_b8,
                 (System_Collections_Generic_Dictionary_object__object__o *)pHVar5[1].klass,
                 Method_System_Collections_Generic_Dictionary<string,_NILLKLHKLHG>_GetEnumerator__);
      local_90.fields._version = local_b8.fields._version;
      local_90.fields._index = local_b8.fields._index;
      local_90.fields._dictionary = local_b8.fields._dictionary;
      local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
      local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
      local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
      local_90.fields._36_4_ = local_b8.fields._36_4_;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_NILLKLHKLHG>_MoveNext__
                          );
        PMACBPAMPJA = local_90.fields._current.fields.key;
        if (!bVar3) {
          System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_NILLKLHKLHG>_Dispose__
                    );
          return;
        }
        if ((NILLKLHKLHG_o *)local_90.fields._current.fields.value == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = NILLKLHKLHG__CHKGAHCDFJF
                              ((NILLKLHKLHG_o *)local_90.fields._current.fields.value,false,
                               (MethodInfo *)0x0);
        pFVar6 = (FPLCEOJCPOD_o *)thunk_FUN_01bda818(FPLCEOJCPOD_TypeInfo);
        FPLCEOJCPOD___ctor(pFVar6,(MethodInfo *)0x0);
        if (__this_00 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = MMFIDKMDADC__JBGCINPPLAC(__this_00,(MethodInfo *)0x0);
        if (pFVar6 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        FPLCEOJCPOD__FOOHBJNHOKK
                  (pFVar6,(System_String_o *)PMACBPAMPJA,iVar4,false,(MethodInfo *)0x0);
        local_58 = local_58 & 0xffffffff;
        bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                          (pFVar6,(System_String_o *)PMACBPAMPJA,(int32_t *)((long)&local_58 + 4),
                           true,false,(MethodInfo *)0x0);
        local_58 = local_58 & 0xffffffff00000000;
        pOVar7 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if (pOVar7 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(bVar3);
        }
        pPVar8 = (pOVar7->fields).FAPMJJBOFEF;
        if (pPVar8 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(bVar3);
        }
        pFVar6 = (pPVar8->fields).ACHJNNOKEDK;
        if (pFVar6 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                          (pFVar6,(System_String_o *)PMACBPAMPJA,(int32_t *)&local_58,false,true,
                           (MethodInfo *)0x0);
        pOVar7 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        if (pOVar7 == (OLKKAIFGGAK_o *)0x0) break;
        pPVar8 = (pOVar7->fields).FAPMJJBOFEF;
        if (pPVar8 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(bVar3);
        }
        pFVar6 = (pPVar8->fields).ACHJNNOKEDK;
        if (pFVar6 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar1 = -local_58._4_4_;
        if (!MGHHNOBLBDI) {
          iVar1 = local_58._4_4_;
        }
        FPLCEOJCPOD__FOOHBJNHOKK
                  (pFVar6,(System_String_o *)PMACBPAMPJA,iVar1 + (int)local_58,true,
                   (MethodInfo *)0x0);
        bVar3 = System_String__op_Equality
                          ((System_String_o *)PMACBPAMPJA,StringLiteral_5065,(MethodInfo *)0x0);
        if ((((bVar3) && (!MGHHNOBLBDI)) &&
            (pPVar9 = (__this->fields).HAHNEPLFLFD, pPVar9 != (PHDCILJMEHO_o *)0x0)) &&
           ((pHVar10 = (pPVar9->fields).MLPFFJNBKBN, pHVar10 != (HEFOANCOHDC_o *)0x0 &&
            (pOVar7 = (pHVar10->fields)._BGCNGEAHHFN_k__BackingField, pOVar7 != (OLKKAIFGGAK_o *)0x0
            )))) {
          bVar3 = OLKKAIFGGAK__HODPOCMNNIN(pOVar7,(MethodInfo *)0x0);
          if (bVar3) {
            pOVar7 = (CPECAEHDDDB->fields).EMCFCMFGPME;
            if (pOVar7 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pPVar9 = (__this->fields).HAHNEPLFLFD;
            if (pPVar9 == (PHDCILJMEHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar10 = (pPVar9->fields).MLPFFJNBKBN;
            if (pHVar10 == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_01 = (pOVar7->fields).MMIDFMEOACB;
            iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (pHVar10->fields)._MDAJFAPLLOH_k__BackingField.fields,
                               (MethodInfo *)0x0);
            if (__this_01 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            OLKKAIFGGAK_OGCKCABMHLC__AFAIENMIAKE(__this_01,iVar4,(MethodInfo *)0x0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(bVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

