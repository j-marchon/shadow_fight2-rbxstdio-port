// Nekki.SF2.GUI.Profile.BattlePassPanel$$OOGBJMINHEC @ RVA 0x3592030

void Nekki_SF2_GUI_Profile_BattlePassPanel__OOGBJMINHEC
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,DDMHMABAHHD_o *FBODAFDBNLH,
               int32_t JLAFGLDIFOC,MethodInfo *method)

{
  uint uVar1;
  System_ValueTuple_object__int__o key;
  long lVar2;
  bool bVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  PIJBHIFGBCK_o *__this_00;
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_01;
  MethodInfo_2BCEB60 *in_x4;
  PIJBHIFGBCK_array *pPVar7;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o
  *__this_02;
  System_ValueTuple_object__int__o __this_03;
  MGNPHCAAEIO_OPCJEEFOCFB_o local_c0;
  Il2CppObject local_90;
  int32_t iStack_80;
  undefined4 uStack_7c;
  System_String_o *pSStack_78;
  bool_conflict local_70;
  undefined7 uStack_6f;
  MGNPHCAAEIO_OPCJEEFOCFB_o local_60;
  
  if ((DAT_04568d7b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1549);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1550);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1551);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1552);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&PIJBHIFGBCK_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<string,_int>__ctor__);
    DAT_04568d7b = 1;
  }
  local_60.fields.OAPLLNNEONM = false;
  local_60.fields._33_7_ = 0;
  local_60.fields.KPDPJONADPJ = (System_String_o *)0x0;
  local_60.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_60.fields.GPOEEHGGIII = (System_String_o *)0x0;
  local_60.fields.ADCKCMDHIHM = 0;
  local_60.fields._20_4_ = 0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (FBODAFDBNLH != (DDMHMABAHHD_o *)0x0) {
    __this_03.fields._8_8_ = (FBODAFDBNLH->fields)._COIPKAKHDFP_k__BackingField;
    __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->MIIIMPBMBKA;
    local_90.klass = (Il2CppClass *)0x0;
    local_90.monitor = (System_String_o *)0x0;
    __this_03.fields.Item1 = &local_90;
    System_ValueTuple<object,_int>___ctor
              (__this_03,
               (Il2CppObject *)(ulong)(uint)(FBODAFDBNLH->fields)._HFPMLGFDOKC_k__BackingField,
               (int32_t)Method_System_ValueTuple<string,_int>__ctor__,in_x4);
    if (__this_02 !=
        (System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o *
        )0x0) {
      key.fields._8_8_ = local_90.monitor;
      key.fields.Item1 = (Il2CppObject *)local_90.klass;
      bVar3 = System_Collections_Generic_Dictionary<ValueTuple<object,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,key,
                         &local_60,
                         Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                        );
      if (bVar3) {
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(local_60.fields.JIJLBFGKNJK,(MethodInfo *)0x0);
        if (!bVar3) {
          local_90.monitor = local_60.fields.KPDPJONADPJ;
          local_90.klass = (Il2CppClass *)local_60.fields.JIJLBFGKNJK;
          pSStack_78 = local_60.fields.GPOEEHGGIII;
          iStack_80 = local_60.fields.ADCKCMDHIHM;
          uStack_7c = local_60.fields._20_4_;
          local_70 = local_60.fields.OAPLLNNEONM;
          uStack_6f = local_60.fields._33_7_;
          __this_00 = (PIJBHIFGBCK_o *)thunk_FUN_01bda818(PIJBHIFGBCK_TypeInfo);
          local_c0.fields.KPDPJONADPJ = local_90.monitor;
          local_c0.fields.JIJLBFGKNJK = (System_String_o *)local_90.klass;
          local_c0.fields.GPOEEHGGIII = pSStack_78;
          local_c0.fields.ADCKCMDHIHM = iStack_80;
          local_c0.fields._20_4_ = uStack_7c;
          local_c0.fields.OAPLLNNEONM = local_70;
          local_c0.fields._33_7_ = uStack_6f;
          PIJBHIFGBCK___ctor(__this_00,JLAFGLDIFOC,&local_c0,(MethodInfo *)0x0);
          if (__this_00 != (PIJBHIFGBCK_o *)0x0) {
            *(undefined1 *)&(__this_00->fields)._BDCFJIKFPMA_k__BackingField = 0;
            lVar2 = Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__;
            __this_01 = (__this->fields).IBBJADAIGIL;
            if (__this_01 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
              pPVar7 = (__this_01->fields)._items;
              (__this_01->fields)._version = (__this_01->fields)._version + 1;
              if (pPVar7 != (PIJBHIFGBCK_array *)0x0) {
                uVar1 = (__this_01->fields)._size;
                if (uVar1 < (uint)pPVar7->max_length) {
                  (__this_01->fields)._size = uVar1 + 1;
                  pPVar7->m_Items[(int)uVar1] = __this_00;
                  thunk_FUN_01c20e04(pPVar7->m_Items + (int)uVar1,__this_00);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
          goto LAB_03692340;
        }
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1549,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1550,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        str1 = (FBODAFDBNLH->fields)._COIPKAKHDFP_k__BackingField;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1551,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1552,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(pSVar6,str1,str2,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_03692340:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

