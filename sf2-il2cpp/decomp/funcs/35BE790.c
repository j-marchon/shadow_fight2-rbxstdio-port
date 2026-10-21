// Nekki.SF2.GUI.Fight.ViewerFight$$ILGAFEJCKBD @ RVA 0x35BE790

void Nekki_SF2_GUI_Fight_ViewerFight__ILGAFEJCKBD
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,
               Nekki_SF2_GUI_Fight_ScreenModel_o *BCKBBGCOMJD,PJKHAJKEHEL_o *JMCEAKJCJLH,
               bool BFANHMIHMGA,UnityEngine_Vector2_o EMPKHNEPHPO,System_String_o *KGLJICLJHEL,
               MethodInfo *method)

{
  JIMKCICMMIL_o *pJVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  pJVar1 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if (((pJVar1 != (JIMKCICMMIL_o *)0x0) &&
      (CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((pJVar1->fields).JLGJOLIMJKB,(MethodInfo *)0x0),
      JMCEAKJCJLH != (PJKHAJKEHEL_o *)0x0)) &&
     ((JMCEAKJCJLH->fields).AGFNMOMJCGB.fields = CVar2,
     BCKBBGCOMJD != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0)) {
    Nekki_SF2_GUI_Fight_ScreenModel__Init(BCKBBGCOMJD,JMCEAKJCJLH,BFANHMIHMGA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

