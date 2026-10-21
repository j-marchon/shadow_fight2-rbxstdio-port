// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$KJBGMCODLFB @ RVA 0x35AEE94

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__KJBGMCODLFB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  PLIIGOCLJDL_o *__this_00;
  System_String_o *pSVar1;
  HCKCBFOGMMJ_o *__this_01;
  GKLPDMLELJF_o *pGVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  int32_t local_24;
  
  if ((DAT_04568e77 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568e77 = 1;
  }
  __this_02 = (__this->fields)._danBg;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  if (((HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) && (__this_00 != (PLIIGOCLJDL_o *)0x0)) &&
     (pSVar1 = PLIIGOCLJDL__PAHKCILGFIK
                         (__this_00,(HEHMPFLAEGE->fields).ANAJGHJEEOC,(MethodInfo *)0x0),
     __this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_02,pSVar1,(MethodInfo *)0x0);
    local_24 = (HEHMPFLAEGE->fields).PEBHLKLGDBM;
    __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (__this_01 != (HCKCBFOGMMJ_o *)0x0) {
      pGVar2 = HCKCBFOGMMJ__LLEJFHJIBHC
                         (__this_01,(HEHMPFLAEGE->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
      if (pGVar2 != (GKLPDMLELJF_o *)0x0) {
        local_24 = (pGVar2->fields).PEBHLKLGDBM;
      }
      pNVar4 = (__this->fields)._danLbl;
      pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,pSVar1,(pNVar4->klass->vtable)._75_set_text.method);
        pNVar4 = (__this->fields)._danLbl;
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                     (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar4,
                     (pNVar4->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

