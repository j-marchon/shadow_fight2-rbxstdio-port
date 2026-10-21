// HOOAAGABMBL$$AFEIDKHBMDG @ RVA 0x30EA260

PONNKDFAMFM_o *
HOOAAGABMBL__AFEIDKHBMDG(HOOAAGABMBL_o *__this,PONNKDFAMFM_o *MONGGBMMAAD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  PONNKDFAMFM_o *__this_00;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_01;
  FPLCEOJCPOD_o *pFVar3;
  int64_t iVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ABCMPMHNMAP_o *pAVar5;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar6;
  PONNKDFAMFM_PMJIICINKEM_o *pPVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  bool_conflict bStack_68;
  bool_conflict bStack_67;
  undefined6 uStack_66;
  int32_t local_54;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566415 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&PONNKDFAMFM_TypeInfo);
    DAT_04566415 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  local_54 = 0;
  __this_00 = (PONNKDFAMFM_o *)thunk_FUN_01bda818(PONNKDFAMFM_TypeInfo);
  PONNKDFAMFM___ctor(__this_00,MONGGBMMAAD,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
  if ((pAVar5 != (ABCMPMHNMAP_o *)0x0) &&
     (__this_01 = (pAVar5->fields).ACHJNNOKEDK,
     __this_01 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_80,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    local_50.fields._index = local_80.fields._index;
    local_50.fields._version = local_80.fields._version;
    local_50.fields._list = local_80.fields._list;
    local_50.fields._current = local_80.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
      pIVar1 = local_50.fields._current;
      if (!bVar2) break;
      local_54 = 0;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pFVar3 = (__this->fields)._EBHBCMICHKA_k__BackingField;
      if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                        (pFVar3,(System_String_o *)local_50.fields._current[1].klass,&local_54,true,
                         false,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this_00 == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pPVar6 = (__this_00->fields).JDHAHDALAOA;
        if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pFVar3 = (pPVar6->fields).ACHJNNOKEDK;
        if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                          (pFVar3,(System_String_o *)pIVar1[1].klass,&local_54,true,false,
                           (MethodInfo *)0x0);
        if (!bVar2) {
          pFVar3 = (__this->fields)._EBHBCMICHKA_k__BackingField;
          if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                            (pFVar3,(System_String_o *)pIVar1[1].klass,&local_54,true,false,
                             (MethodInfo *)0x0);
          pPVar6 = (__this_00->fields).JDHAHDALAOA;
          if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8(bVar2);
          }
          pFVar3 = (pPVar6->fields).ACHJNNOKEDK;
          if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          FPLCEOJCPOD__FOOHBJNHOKK
                    (pFVar3,(System_String_o *)pIVar1[1].klass,local_54,false,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    if ((__this_00 != (PONNKDFAMFM_o *)0x0) &&
       (pPVar7 = (__this_00->fields).OGAGBLMFFAL, pPVar7 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0)) {
      bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                         (pPVar7->fields).BGGJBKHNGFG.fields,(MethodInfo *)0x0);
      if (!bVar2) {
        local_80.fields._8_8_ = (__this->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_80.fields._list =
             (System_Collections_Generic_List_T__o *)
             (__this->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        bStack_68 = (__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        bStack_67 = (__this->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        uStack_66 = *(undefined6 *)&(__this->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_80.fields._current =
             (Il2CppObject *)(__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        pPVar6 = (__this_00->fields).JDHAHDALAOA;
        if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031ea610;
        (pPVar6->fields).BGGJBKHNGFG.fields.fakeValueActive = bStack_68;
        (pPVar6->fields).BGGJBKHNGFG.fields.inited = bStack_67;
        *(undefined6 *)&(pPVar6->fields).BGGJBKHNGFG.fields.field_0x1a = uStack_66;
        (pPVar6->fields).BGGJBKHNGFG.fields.fakeValue = (int64_t)local_80.fields._current;
        (pPVar6->fields).BGGJBKHNGFG.fields.hiddenValue = local_80.fields._8_8_;
        (pPVar6->fields).BGGJBKHNGFG.fields.currentCryptoKey = (int64_t)local_80.fields._list;
      }
      pPVar7 = (__this_00->fields).OGAGBLMFFAL;
      if (pPVar7 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
        bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (pPVar7->fields).HBMNICBOJFL.fields,(MethodInfo *)0x0);
        if (!bVar2) {
          pPVar6 = (__this_00->fields).JDHAHDALAOA;
          iVar4 = HOOAAGABMBL__MNKCHHFDEGH(__this,method_00);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                    (&local_a0,iVar4,(MethodInfo *)0x0);
          local_80.fields._index = (undefined4)local_a0.fields.hiddenValue;
          local_80.fields._version = local_a0.fields.hiddenValue._4_4_;
          local_80.fields._list =
               (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey;
          bStack_68 = local_a0.fields.fakeValueActive;
          bStack_67 = local_a0.fields.inited;
          uStack_66 = local_a0.fields._26_6_;
          local_80.fields._current = (Il2CppObject *)local_a0.fields.fakeValue;
          if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031ea610;
          (pPVar6->fields).HBMNICBOJFL.fields.fakeValueActive = local_a0.fields.fakeValueActive;
          (pPVar6->fields).HBMNICBOJFL.fields.inited = local_a0.fields.inited;
          *(undefined6 *)&(pPVar6->fields).HBMNICBOJFL.fields.field_0x1a = local_a0.fields._26_6_;
          (pPVar6->fields).HBMNICBOJFL.fields.fakeValue = local_a0.fields.fakeValue;
          (pPVar6->fields).HBMNICBOJFL.fields.hiddenValue = local_a0.fields.hiddenValue;
          (pPVar6->fields).HBMNICBOJFL.fields.currentCryptoKey = local_a0.fields.currentCryptoKey;
        }
        pPVar7 = (__this_00->fields).OGAGBLMFFAL;
        if (pPVar7 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
          bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (pPVar7->fields).HDGEOJGHEOE.fields,(MethodInfo *)0x0);
          if (!bVar2) {
            pPVar6 = (__this_00->fields).JDHAHDALAOA;
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                      (&local_a0,(__this->fields)._LAOFJOMPFDL_k__BackingField,(MethodInfo *)0x0);
            local_80.fields._index = (undefined4)local_a0.fields.hiddenValue;
            local_80.fields._version = local_a0.fields.hiddenValue._4_4_;
            local_80.fields._list =
                 (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey;
            bStack_68 = local_a0.fields.fakeValueActive;
            bStack_67 = local_a0.fields.inited;
            uStack_66 = local_a0.fields._26_6_;
            local_80.fields._current = (Il2CppObject *)local_a0.fields.fakeValue;
            if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031ea610;
            (pPVar6->fields).HDGEOJGHEOE.fields.fakeValueActive = local_a0.fields.fakeValueActive;
            (pPVar6->fields).HDGEOJGHEOE.fields.inited = local_a0.fields.inited;
            *(undefined6 *)&(pPVar6->fields).HDGEOJGHEOE.fields.field_0x1a = local_a0.fields._26_6_;
            (pPVar6->fields).HDGEOJGHEOE.fields.fakeValue = local_a0.fields.fakeValue;
            (pPVar6->fields).HDGEOJGHEOE.fields.hiddenValue = local_a0.fields.hiddenValue;
            (pPVar6->fields).HDGEOJGHEOE.fields.currentCryptoKey = local_a0.fields.currentCryptoKey;
          }
          pPVar7 = (__this_00->fields).OGAGBLMFFAL;
          if (pPVar7 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
            bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                               (pPVar7->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
            if (!bVar2) {
              pPVar6 = (__this_00->fields).JDHAHDALAOA;
              CVar8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((__this->fields)._JDEHPJEIOCI_k__BackingField,(MethodInfo *)0x0);
              if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031ea610;
              (pPVar6->fields).NOPGBJNLFHM.fields = CVar8;
            }
            pPVar7 = (__this_00->fields).OGAGBLMFFAL;
            if (pPVar7 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
              bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                                 (pPVar7->fields).BIKFMGALAEC.fields,(MethodInfo *)0x0);
              if (!bVar2) {
                pPVar6 = (__this_00->fields).JDHAHDALAOA;
                CVar8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((__this->fields)._NDHGDCODPPJ_k__BackingField,(MethodInfo *)0x0);
                if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031ea610;
                (pPVar6->fields).BIKFMGALAEC.fields = CVar8;
              }
              pPVar7 = (__this_00->fields).OGAGBLMFFAL;
              if (pPVar7 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                                   (pPVar7->fields).NPADKALJCPB.fields,(MethodInfo *)0x0);
                if (!bVar2) {
                  pPVar6 = (__this_00->fields).JDHAHDALAOA;
                  iVar4 = HOOAAGABMBL__ICMFLAFFOFM(__this,method_01);
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_a0,iVar4,(MethodInfo *)0x0);
                  local_80.fields._index = (undefined4)local_a0.fields.hiddenValue;
                  local_80.fields._version = local_a0.fields.hiddenValue._4_4_;
                  local_80.fields._list =
                       (System_Collections_Generic_List_T__o *)local_a0.fields.currentCryptoKey;
                  bStack_68 = local_a0.fields.fakeValueActive;
                  bStack_67 = local_a0.fields.inited;
                  uStack_66 = local_a0.fields._26_6_;
                  local_80.fields._current = (Il2CppObject *)local_a0.fields.fakeValue;
                  if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031ea610;
                  (pPVar6->fields).NPADKALJCPB.fields.fakeValueActive =
                       local_a0.fields.fakeValueActive;
                  (pPVar6->fields).NPADKALJCPB.fields.inited = local_a0.fields.inited;
                  *(undefined6 *)&(pPVar6->fields).NPADKALJCPB.fields.field_0x1a =
                       local_a0.fields._26_6_;
                  (pPVar6->fields).NPADKALJCPB.fields.fakeValue = local_a0.fields.fakeValue;
                  (pPVar6->fields).NPADKALJCPB.fields.hiddenValue = local_a0.fields.hiddenValue;
                  (pPVar6->fields).NPADKALJCPB.fields.currentCryptoKey =
                       local_a0.fields.currentCryptoKey;
                }
                pPVar7 = (__this_00->fields).OGAGBLMFFAL;
                if (pPVar7 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                  bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                                     (pPVar7->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
                  if (!bVar2) {
                    pPVar6 = (__this_00->fields).JDHAHDALAOA;
                    CVar8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                      ((__this->fields)._HCHGENFJLHA_k__BackingField,
                                       (MethodInfo *)0x0);
                    if (pPVar6 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031ea610;
                    (pPVar6->fields).AEIJFFBOBCP.fields = CVar8;
                  }
                  return __this_00;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031ea610:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

