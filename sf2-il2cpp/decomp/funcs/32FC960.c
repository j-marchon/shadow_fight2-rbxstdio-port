// Nekki.SF2.GUI.Common.Hints.HintUI$$DNIJFEPCHFA @ RVA 0x32FC960

void Nekki_SF2_GUI_Common_Hints_HintUI__DNIJFEPCHFA
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *DFMPBHNIPLA,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *pNVar1;
  int iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_045676ef & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045676ef = 1;
  }
  if (DFMPBHNIPLA != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pSVar3 = (DFMPBHNIPLA->fields)._TexturePath;
    if ((Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace
                         (pSVar3,Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->
                                 ODBHBCHKHII,StringLiteral_1,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__Replace
                           (pSVar3,Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->
                                   LCFAOLOGNAN,StringLiteral_1,(MethodInfo *)0x0);
        iVar2 = (__this->fields)._Style;
        if ((Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
        }
        pNVar1 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields;
        if (iVar2 != 0) {
          pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *)
                   &Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields->LCFAOLOGNAN;
        }
        pSVar3 = PCOEHCPGBBG__OIOFKEFFDPO(pSVar3,pNVar1->ODBHBCHKHII,(MethodInfo *)0x0);
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(DFMPBHNIPLA,pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

