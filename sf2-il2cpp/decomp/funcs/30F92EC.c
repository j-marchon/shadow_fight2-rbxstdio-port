// Nekki.SF2.GUI.Shop.ParametersPanelContent$$ONGPLJHECGE @ RVA 0x30F92EC

void Nekki_SF2_GUI_Shop_ParametersPanelContent__ONGPLJHECGE
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,float PNEIGGOFIOA,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_List_BaseScrollItem__o *__this_01;
  FPLCEOJCPOD_o *pFVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  PJKHAJKEHEL_o *pPVar5;
  PJKHAJKEHEL_o *pPVar6;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  int32_t local_68 [2];
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566489 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ParameterScrollItem_TypeInfo);
    FUN_01bab630(&StringLiteral_10133);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566489 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  (__this->fields).JBKOKFGICDL = false;
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo,method);
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_10133,StringLiteral_1,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ParametersPanelContent__FJHEDBMBEFI(__this,method_00);
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
     (__this_01 = (__this->fields).DNHMKKDMGFA,
     __this_01 == (System_Collections_Generic_List_BaseScrollItem__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = (pAVar4->fields).MFLNIMCFPDK;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_80,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  local_60.fields._index = local_80.fields._index;
  local_60.fields._version = local_80.fields._version;
  local_60.fields._list = local_80.fields._list;
  local_60.fields._current = local_80.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    __this_00 = local_60.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      return;
    }
    if ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)local_60.fields._current ==
        (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0) break;
    bVar1 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_TypeInfo->_2).naturalAligment;
    if (((((Nekki_SF2_GUI_Shop_ParameterScrollItem_c *)(local_60.fields._current)->klass)->_2).
         naturalAligment < bVar1) ||
       ((((Nekki_SF2_GUI_Shop_ParameterScrollItem_c *)(local_60.fields._current)->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Shop_ParameterScrollItem_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(local_60.fields._current);
    }
    local_68[0] = 0;
    local_68[1] = 0;
    if (pPVar6 == (PJKHAJKEHEL_o *)0x0) goto LAB_031f9564;
    pFVar3 = (pPVar6->fields).ACHJNNOKEDK;
    if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                      (pFVar3,((Nekki_SF2_GUI_Shop_ParameterScrollItem_Fields *)
                              ((long)local_60.fields._current + 0x10))->LBMOMAIHCEM,local_68 + 1,
                       true,false,(MethodInfo *)0x0);
    pPVar5 = (__this->fields).GFGOPEKNBPF;
    if (pPVar5 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(bVar2);
    }
    pFVar3 = (pPVar5->fields).ACHJNNOKEDK;
    if (pFVar3 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    FPLCEOJCPOD__KNMENIBLFGF
              (pFVar3,((Nekki_SF2_GUI_Shop_ParameterScrollItem_Fields *)((long)__this_00 + 0x10))->
                      LBMOMAIHCEM,local_68,true,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ParameterScrollItem__SetValue
              ((Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)__this_00,local_68[1],local_68[0],
               PNEIGGOFIOA,(MethodInfo *)0x0);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (pPVar6 != (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031f9564:
  local_68[0] = 0;
  local_68[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

