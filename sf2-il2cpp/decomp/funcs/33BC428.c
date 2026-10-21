// Nekki.SF2.GUI.Fight.FightHintController$$JMOKJIPJKJB @ RVA 0x33BC428

void Nekki_SF2_GUI_Fight_FightHintController__JMOKJIPJKJB
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,int32_t CGLFKKMBHCN,
               MethodInfo *method)

{
  bool BALACEGEDBN;
  FCJBEKHDLAF_o *pFVar1;
  PJKHAJKEHEL_o *pPVar2;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar3;
  
  pFVar1 = (__this->fields).NAKHBIFKBGK;
  if ((pFVar1 != (FCJBEKHDLAF_o *)0x0) &&
     (pPVar2 = (pFVar1->fields).JEDELFOBLEN, pPVar2 != (PJKHAJKEHEL_o *)0x0)) {
    BALACEGEDBN = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (pPVar2->fields).DHGNGIKCDON.fields,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).MBEDNBHNLOH;
    if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupExtraImageActive
                (pNVar3,0x2c0,(bool)(~BALACEGEDBN & 1),(MethodInfo *)0x0);
      pNVar3 = (__this->fields).MBEDNBHNLOH;
      if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHintsActive
                  (pNVar3,0x2c0,BALACEGEDBN,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).MBEDNBHNLOH;
        if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
          Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                    (pNVar3,700,BALACEGEDBN,(MethodInfo *)0x0);
          pNVar3 = (__this->fields).MBEDNBHNLOH;
          if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
            Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                      (pNVar3,0x2bd,BALACEGEDBN,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).MBEDNBHNLOH;
            if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
              Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                        (pNVar3,0x2be,BALACEGEDBN,(MethodInfo *)0x0);
              pNVar3 = (__this->fields).MBEDNBHNLOH;
              if (pNVar3 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
                Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupActive
                          (pNVar3,0x2bf,BALACEGEDBN,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

