// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$EBPPNDEIPHE @ RVA 0x344DFC8

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__EBPPNDEIPHE
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  CHDGOFBHAFI_o *pCVar2;
  EEGDOGKBLNG_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_14;
  
  if ((DAT_04568289 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_20752);
    DAT_04568289 = 1;
  }
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 != (KKLJIDJBFEI_o *)0x0) {
    if ((pKVar1->fields).super._MGGBEPKMPCF_k__BackingField == false) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
      if ((pCVar2->fields).BLELLCNDBHN == false) {
        return;
      }
      pNVar4 = (__this->fields)._infoServerBonus;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        local_14 = EEGDOGKBLNG__GNIBFOOLMHK(__this_00,(MethodInfo *)0x0);
        arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_14);
        pSVar3 = System_String__Format(StringLiteral_20752,arg0,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                    (pNVar4,pSVar3,(pNVar4->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

