// Nekki.SF2.GUI.Dialogs.Raids.ChatMessageView$$Init @ RVA 0x358F7A4

void Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  int32_t BOFAKAEIMME;
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o **ppNVar2;
  KPBOJBLLKPJ_o *__this_00;
  UnityEngine_Color32_Fields __this_01;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  
  if ((DAT_04568d69 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10812);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04568d69 = 1;
  }
  pNVar3 = (__this->fields)._messagesScroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._messagesScroll;
    if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0368f894;
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar3,(MethodInfo *)0x0);
  }
  ppNVar2 = &(__this->fields).super.FLLHHEODKPH;
  *ppNVar2 = ELHFHAPBFMI;
  thunk_FUN_01c20e04(ppNVar2,ELHFHAPBFMI);
  if (ELHFHAPBFMI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    BOFAKAEIMME = (ELHFHAPBFMI->fields).FIACGKGFFJP;
    *(int32_t *)&(__this->fields)._SendTextButton = BOFAKAEIMME;
    __this_00 = (ELHFHAPBFMI->fields).EBBJNLDAMCC;
    if (__this_00 != (KPBOJBLLKPJ_o *)0x0) {
      KPBOJBLLKPJ__DCLLOBOHLME(__this_00,BOFAKAEIMME,(KOPGBBHMPDP_o *)__this,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._unevenMessageColor.fields;
      if (__this_01 != (UnityEngine_Color32_Fields)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                  ((Nekki_SF2_GUI_ResolutionButton_o *)__this_01,StringLiteral_14092,
                   StringLiteral_10812,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0368f894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

