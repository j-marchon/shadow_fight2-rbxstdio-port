// Nekki.SF2.GUI.Shop.ParameterScrollItem$$Init @ RVA 0x3030858

void Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,System_String_o *KGLJICLJHEL,
               System_String_o *NEJHIEOHMCF,int32_t CJNHFNHJHPE,int32_t NBHHBBOJJME,bool DCJABCJDDDL
               ,System_String_o *MHHLKEOKCOB,float AIOABLFEKGN,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ParameterProgressBar_o *pNVar1;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  System_String_o *JPPLEGNJFMJ;
  
  pMVar2 = (MethodInfo *)(ulong)(uint)NBHHBBOJJME;
  if ((DAT_04565cfa & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565cfa = 1;
  }
  Nekki_SF2_GUI_Shop_ParameterScrollItem__PKNFJBEGCOK
            (__this,KGLJICLJHEL,DCJABCJDDDL,MHHLKEOKCOB,pMVar2);
  pNVar1 = (__this->fields)._progressBar;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *)0x0) {
    (*(pNVar1->klass->vtable)._4_Init.methodPtr)(pNVar1,(pNVar1->klass->vtable)._4_Init.method);
    pNVar3 = (__this->fields)._icon;
    JPPLEGNJFMJ = (__this->fields).ONONPELCDGE;
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = (MethodInfo *)0x0;
    KKCBGIBKOCP__PFJIHMIKHNL(pNVar3,JPPLEGNJFMJ,NEJHIEOHMCF,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._icon;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_Alpha(pNVar3,AIOABLFEKGN,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ParameterScrollItem__SetTextValue
                (__this,CJNHFNHJHPE,NBHHBBOJJME,0.0,pMVar2);
      Nekki_SF2_GUI_Shop_ParameterScrollItem__SetProgressBarValue
                (__this,CJNHFNHJHPE,NBHHBBOJJME,0.0,pMVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

