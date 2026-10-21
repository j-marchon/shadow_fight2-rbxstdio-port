// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$CBMBNAKAFMH @ RVA 0x3100A90

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__CBMBNAKAFMH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  System_String_o *pSVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  int32_t local_24;
  
  if ((DAT_045664be & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045664be = 1;
  }
  pNVar1 = (__this->fields)._leagueDan;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._leagueDan;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                 (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._leagueDan;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        local_24 = EEGDOGKBLNG__IGIHHCEONEM(__this_01,(MethodInfo *)0x0);
        pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                    (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

