// HOOAAGABMBL$$HCEDMCPIPPE @ RVA 0x30E9CD4

void HOOAAGABMBL__HCEDMCPIPPE(HOOAAGABMBL_o *__this,PONNKDFAMFM_o *JGANIDFNOAF,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined6 uVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_00;
  FPLCEOJCPOD_o *pFVar7;
  int64_t iVar8;
  MethodInfo *method_00;
  ABCMPMHNMAP_o *pAVar9;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar10;
  PONNKDFAMFM_PMJIICINKEM_o *pPVar11;
  int64_t iVar12;
  int64_t iVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  int32_t local_54;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566429 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566429 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  local_54 = 0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar9 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
  if ((pAVar9 != (ABCMPMHNMAP_o *)0x0) &&
     (__this_00 = (pAVar9->fields).ACHJNNOKEDK,
     __this_00 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_70,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    local_50.fields._index = local_70.fields._index;
    local_50.fields._version = local_70.fields._version;
    local_50.fields._list = local_70.fields._list;
    local_50.fields._current = local_70.fields._current;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
      pIVar4 = local_50.fields._current;
      if (!bVar5) break;
      local_54 = 0;
      if (JGANIDFNOAF == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
      if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pFVar7 = (pPVar10->fields).ACHJNNOKEDK;
      if (pFVar7 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar5 = FPLCEOJCPOD__KNMENIBLFGF
                        (pFVar7,(System_String_o *)local_50.fields._current[1].klass,&local_54,true,
                         false,(MethodInfo *)0x0);
      if (bVar5) {
        pFVar7 = (__this->fields)._EBHBCMICHKA_k__BackingField;
        if (pFVar7 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        FPLCEOJCPOD__FOOHBJNHOKK
                  (pFVar7,(System_String_o *)pIVar4[1].klass,local_54,false,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    if ((JGANIDFNOAF != (PONNKDFAMFM_o *)0x0) &&
       (pPVar11 = (JGANIDFNOAF->fields).OGAGBLMFFAL, pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0)) {
      bVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                         (pPVar11->fields).BGGJBKHNGFG.fields,(MethodInfo *)0x0);
      if (bVar5) {
        pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
        if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031e9fd0;
        bVar1 = (pPVar10->fields).BGGJBKHNGFG.fields.fakeValueActive;
        bVar2 = (pPVar10->fields).BGGJBKHNGFG.fields.inited;
        uVar3 = *(undefined6 *)&(pPVar10->fields).BGGJBKHNGFG.fields.field_0x1a;
        iVar8 = (pPVar10->fields).BGGJBKHNGFG.fields.fakeValue;
        iVar12 = (pPVar10->fields).BGGJBKHNGFG.fields.currentCryptoKey;
        (__this->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue =
             (pPVar10->fields).BGGJBKHNGFG.fields.hiddenValue;
        (__this->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey = iVar12;
        (__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive = bVar1;
        (__this->fields)._BGAELGPOEHE_k__BackingField.fields.inited = bVar2;
        *(undefined6 *)&(__this->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a = uVar3;
        (__this->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue = iVar8;
      }
      pPVar11 = (JGANIDFNOAF->fields).OGAGBLMFFAL;
      if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
        bVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (pPVar11->fields).HBMNICBOJFL.fields,(MethodInfo *)0x0);
        if (bVar5) {
          pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
          if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031e9fd0;
          bVar1 = (pPVar10->fields).HBMNICBOJFL.fields.fakeValueActive;
          bVar2 = (pPVar10->fields).HBMNICBOJFL.fields.inited;
          uVar3 = *(undefined6 *)&(pPVar10->fields).HBMNICBOJFL.fields.field_0x1a;
          iVar8 = (pPVar10->fields).HBMNICBOJFL.fields.fakeValue;
          iVar12 = (pPVar10->fields).HBMNICBOJFL.fields.currentCryptoKey;
          (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue =
               (pPVar10->fields).HBMNICBOJFL.fields.hiddenValue;
          (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey = iVar12;
          (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive = bVar1;
          (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited = bVar2;
          *(undefined6 *)&(__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a = uVar3;
          (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue = iVar8;
        }
        pPVar11 = (JGANIDFNOAF->fields).OGAGBLMFFAL;
        if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
          bVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (pPVar11->fields).HDGEOJGHEOE.fields,(MethodInfo *)0x0);
          if (bVar5) {
            pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
            if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031e9fd0;
            local_90.fields.fakeValueActive = (pPVar10->fields).HDGEOJGHEOE.fields.fakeValueActive;
            local_90.fields.inited = (pPVar10->fields).HDGEOJGHEOE.fields.inited;
            local_90.fields._26_6_ = *(undefined6 *)&(pPVar10->fields).HDGEOJGHEOE.fields.field_0x1a
            ;
            local_90.fields.fakeValue = (pPVar10->fields).HDGEOJGHEOE.fields.fakeValue;
            local_90.fields.hiddenValue = (pPVar10->fields).HDGEOJGHEOE.fields.hiddenValue;
            local_90.fields.currentCryptoKey = (pPVar10->fields).HDGEOJGHEOE.fields.currentCryptoKey
            ;
            iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              (&local_90,(MethodInfo *)0x0);
            (__this->fields)._LAOFJOMPFDL_k__BackingField = iVar8;
            HOOAAGABMBL__MLPGHGIOAOC(__this,method_00);
          }
          pPVar11 = (JGANIDFNOAF->fields).OGAGBLMFFAL;
          if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
            bVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                               (pPVar11->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
            if (bVar5) {
              pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
              if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031e9fd0;
              iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 (pPVar10->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
              (__this->fields)._JDEHPJEIOCI_k__BackingField = iVar6;
            }
            pPVar11 = (JGANIDFNOAF->fields).OGAGBLMFFAL;
            if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
              bVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                                 (pPVar11->fields).BIKFMGALAEC.fields,(MethodInfo *)0x0);
              if (bVar5) {
                pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
                if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031e9fd0;
                iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   (pPVar10->fields).BIKFMGALAEC.fields,(MethodInfo *)0x0);
                (__this->fields)._NDHGDCODPPJ_k__BackingField = iVar6;
              }
              pPVar11 = (JGANIDFNOAF->fields).OGAGBLMFFAL;
              if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                bVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                                   (pPVar11->fields).NPADKALJCPB.fields,(MethodInfo *)0x0);
                if (bVar5) {
                  pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
                  if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031e9fd0;
                  bVar1 = (pPVar10->fields).NPADKALJCPB.fields.inited;
                  uVar3 = *(undefined6 *)&(pPVar10->fields).NPADKALJCPB.fields.field_0x1a;
                  iVar8 = (pPVar10->fields).NPADKALJCPB.fields.fakeValue;
                  iVar13 = (pPVar10->fields).NPADKALJCPB.fields.hiddenValue;
                  iVar12 = (pPVar10->fields).NPADKALJCPB.fields.currentCryptoKey;
                  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive =
                       (pPVar10->fields).NPADKALJCPB.fields.fakeValueActive;
                  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.inited = bVar1;
                  *(undefined6 *)&(__this->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a =
                       uVar3;
                  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue = iVar8;
                  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue = iVar13;
                  (__this->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey = iVar12;
                }
                pPVar11 = (JGANIDFNOAF->fields).OGAGBLMFFAL;
                if (pPVar11 != (PONNKDFAMFM_PMJIICINKEM_o *)0x0) {
                  bVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                                     (pPVar11->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
                  if (bVar5) {
                    pPVar10 = (JGANIDFNOAF->fields).JDHAHDALAOA;
                    if (pPVar10 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) goto LAB_031e9fd0;
                    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                       (pPVar10->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
                    (__this->fields)._HCHGENFJLHA_k__BackingField = iVar6;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031e9fd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

