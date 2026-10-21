// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$UpdateContent @ RVA 0x35398D8

void Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_KMDOLFBIGNC__o *LBELDDAPIMD;
  System_Collections_Generic_List_KMDOLFBIGNC__o *collection;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Il2CppObject *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_00;
  EOLFEKNCPLM_o *pEVar3;
  FGKGKDEJCOG_o *pFVar4;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *pSVar5;
  OBCMNBDBNFO_o *pOVar6;
  
  if ((DAT_04568ab7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22116);
    DAT_04568ab7 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pEVar3 = (__this->fields).super.MLAAJICBOAD;
  if (pEVar3 != (EOLFEKNCPLM_o *)0x0) {
    pOVar6 = (pEVar3->fields).PLJJCOHGICK;
    if (pOVar6 == (OBCMNBDBNFO_o *)0x0) {
      return;
    }
    LBELDDAPIMD = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo,
                                     IMMNELPBGIF);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)LBELDDAPIMD,
               Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_IList_T__o *)(pOVar6->fields).CFIKNGMJBLI,
                       Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
    method_00 = extraout_x1_00;
    if (!bVar1) {
      if (LBELDDAPIMD == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) goto LAB_03639b0c;
      method = Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__;
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)LBELDDAPIMD,
                 (System_Collections_Generic_IEnumerable_T__o *)(pOVar6->fields).CFIKNGMJBLI,
                 (MethodInfo_26E4FB8 *)
                 Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__);
      method_00 = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_02;
    }
    if (DAT_04565e59 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565e59 = '\x01';
      method_00 = extraout_x1_03;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_04;
    }
    pFVar4 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
    if (pFVar4 != (FGKGKDEJCOG_o *)0x0) {
      if ((pFVar4->fields).LFINLNAPHFL != false) {
        collection = Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__OOIMKCKLBAI
                               ((Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *)
                                NLPJLHOEAOE_TypeInfo,method_00);
        if (LBELDDAPIMD == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) goto LAB_03639b0c;
        method = Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)LBELDDAPIMD,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_26E4FB8 *)
                   Method_System_Collections_Generic_List<KMDOLFBIGNC>_AddRange__);
      }
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)LBELDDAPIMD,
                         Method_DJNBJHPDKDP_OBECCOPBADO<KMDOLFBIGNC>__);
      if (!bVar1) {
        Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__LLCEDKDCDCM(__this,LBELDDAPIMD,method);
        return;
      }
      __this_00 = (__this->fields)._simpleScroll;
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
        pSVar5 = (__this->fields).JILLAJIPGFH;
        if (pSVar5 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
          length = (pSVar5->fields)._size;
          (pSVar5->fields)._size = 0;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0
                               );
          }
          pNVar2 = (__this->fields)._lblGoldCount;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                      (pNVar2,StringLiteral_22116,(pNVar2->klass->vtable)._75_set_text.method);
            pNVar2 = (__this->fields)._lblSilverCount;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03639ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                        (pNVar2,StringLiteral_22116,(pNVar2->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_03639b0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

