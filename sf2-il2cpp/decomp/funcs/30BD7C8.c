// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$GIKEAMOJDEE @ RVA 0x30BD7C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__GIKEAMOJDEE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_FNILDHLJBBJ_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *pNVar1;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456625c & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_FNILDHLJBBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_10855);
    FUN_01bab630(&StringLiteral_10924);
    FUN_01bab630(&StringLiteral_18661);
    FUN_01bab630(&StringLiteral_16989);
    DAT_0456625c = 1;
    method = extraout_x1;
  }
  __this_00 = (JMDPBFOCHHP_FNILDHLJBBJ_o *)
              thunk_FUN_01bda818(JMDPBFOCHHP_FNILDHLJBBJ_TypeInfo,method);
  JMDPBFOCHHP_FNILDHLJBBJ___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
    (__this_00->fields).ICGHMKGHKEH = StringLiteral_18661;
    thunk_FUN_01c20e04();
    (__this_00->fields).HILNENCJHMI = StringLiteral_16989;
    thunk_FUN_01c20e04();
    (__this_00->fields).KDHKFELBFJN = StringLiteral_10855;
    thunk_FUN_01c20e04();
    (__this_00->fields).MOPLJNDDFGC = StringLiteral_10924;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._seasFinChestContent;
    if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._seasFinChestContent;
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__Init(pNVar1,__this_00,(MethodInfo *)0x0);
        (__this->fields).GHNIJFGJPKJ =
             (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)
             (__this->fields)._seasFinChestContent;
        thunk_FUN_01c20e04(&(__this->fields).GHNIJFGJPKJ);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

