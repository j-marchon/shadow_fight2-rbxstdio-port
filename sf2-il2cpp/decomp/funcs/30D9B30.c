// Nekki.SF2.GUI.TableView$$NAOPHLEJGGL @ RVA 0x30D9B30

void Nekki_SF2_GUI_TableView__NAOPHLEJGGL(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KELJDKIIHMM_o *pKVar2;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar3;
  UnityEngine_SocialPlatforms_Range_Fields local_18;
  
  pKVar2 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  do {
    if (pKVar2 == (KELJDKIIHMM_o *)0x0) {
LAB_031d9b68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = KELJDKIIHMM__LDJLMEFOMLG(pKVar2,(MethodInfo *)0x0);
    if (iVar1 < 1) {
      pKVar2 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      local_18.from = 0;
      local_18.count = 0;
      UnityEngine_SocialPlatforms_Range___ctor
                ((UnityEngine_SocialPlatforms_Range_o)&local_18,0,0,(MethodInfo *)0x0);
      if (pKVar2 != (KELJDKIIHMM_o *)0x0) {
        (pKVar2->fields).CIMDIANAHIM.fields = local_18;
        ppNVar3 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
        *ppNVar3 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
        thunk_FUN_01c20e04(ppNVar3,0);
        return;
      }
      goto LAB_031d9b68;
    }
    Nekki_SF2_GUI_TableView__IGJGHJDHOKD(__this,false,in_x2);
    pKVar2 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  } while( true );
}

