// Nekki.SF2.GUI.Profile.BattlePassPanel$$MFJHNBOEHFN @ RVA 0x3591820

void Nekki_SF2_GUI_Profile_BattlePassPanel__MFJHNBOEHFN
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_o *PBDIPLHDHHD,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_ENBCJNLAHAC_o *IOOJAJAPMBM;
  FAIJGJCCKJC_o *__this_01;
  PIJBHIFGBCK_o *__this_02;
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_03;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  PIJBHIFGBCK_array *pPVar6;
  System_String_o *str1;
  MGNPHCAAEIO_OPCJEEFOCFB_o local_c0;
  System_String_o *local_90;
  System_String_o *pSStack_88;
  int32_t iStack_80;
  undefined4 uStack_7c;
  System_String_o *pSStack_78;
  bool_conflict local_70;
  undefined7 uStack_6f;
  MGNPHCAAEIO_OPCJEEFOCFB_o local_60;
  
  if ((DAT_04568d77 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1545);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1546);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1547);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1548);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__);
    FUN_01bab630(&PIJBHIFGBCK_TypeInfo);
    DAT_04568d77 = 1;
  }
  local_60.fields.OAPLLNNEONM = false;
  local_60.fields._33_7_ = 0;
  local_60.fields.KPDPJONADPJ = (System_String_o *)0x0;
  local_60.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_60.fields.GPOEEHGGIII = (System_String_o *)0x0;
  local_60.fields.ADCKCMDHIHM = 0;
  local_60.fields._20_4_ = 0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((PBDIPLHDHHD != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) && (__this_00 != (JMDPBFOCHHP_o *)0x0)) {
    IOOJAJAPMBM = JMDPBFOCHHP__DIFLKMKBENA
                            (__this_00,(PBDIPLHDHHD->fields).JFDGLPNMELO,false,(MethodInfo *)0x0);
    if (IOOJAJAPMBM == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1545,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1546,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      str1 = (PBDIPLHDHHD->fields).JFDGLPNMELO;
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1547,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1548,
                 (MethodInfo *)0x0);
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(pSVar5,str1,str2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
    FAIJGJCCKJC___ctor(__this_01,IOOJAJAPMBM,(MethodInfo *)0x0);
    MGNPHCAAEIO_OPCJEEFOCFB___ctor(&local_60,(HOOAAGABMBL_o *)__this_01,(MethodInfo *)0x0);
    local_60.fields.OAPLLNNEONM = true;
    pSStack_88 = local_60.fields.KPDPJONADPJ;
    local_90 = local_60.fields.JIJLBFGKNJK;
    pSStack_78 = local_60.fields.GPOEEHGGIII;
    iStack_80 = local_60.fields.ADCKCMDHIHM;
    uStack_7c = local_60.fields._20_4_;
    local_70 = true;
    uStack_6f = local_60.fields._33_7_;
    __this_02 = (PIJBHIFGBCK_o *)thunk_FUN_01bda818(PIJBHIFGBCK_TypeInfo);
    local_c0.fields.KPDPJONADPJ = pSStack_88;
    local_c0.fields.JIJLBFGKNJK = local_90;
    local_c0.fields.GPOEEHGGIII = pSStack_78;
    local_c0.fields.ADCKCMDHIHM = iStack_80;
    local_c0.fields._20_4_ = uStack_7c;
    local_c0.fields.OAPLLNNEONM = local_70;
    local_c0.fields._33_7_ = uStack_6f;
    PIJBHIFGBCK___ctor(__this_02,JLAFGLDIFOC,&local_c0,(MethodInfo *)0x0);
    if (__this_02 != (PIJBHIFGBCK_o *)0x0) {
      *(bool_conflict *)&(__this_02->fields)._BDCFJIKFPMA_k__BackingField =
           (IOOJAJAPMBM->fields).NIHFMGMHLBN;
      lVar2 = Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__;
      __this_03 = (__this->fields).IBBJADAIGIL;
      if (__this_03 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
        pPVar6 = (__this_03->fields)._items;
        (__this_03->fields)._version = (__this_03->fields)._version + 1;
        if (pPVar6 != (PIJBHIFGBCK_array *)0x0) {
          uVar1 = (__this_03->fields)._size;
          if (uVar1 < (uint)pPVar6->max_length) {
            (__this_03->fields)._size = uVar1 + 1;
            pPVar6->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pPVar6->m_Items + (int)uVar1,__this_02);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,
                     (Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

