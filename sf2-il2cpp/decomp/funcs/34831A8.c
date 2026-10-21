// Nekki.SF2.GUI.Dialogs.SettingsDialog$$KHHGMEABDML @ RVA 0x34831A8

void Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,
               Nekki_SF2_GUI_LabelAlias_o *BHLFJNNLJBF,System_String_o *JCLPIKHEKBB,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar2;
  
  if ((DAT_04568390 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568390 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)BHLFJNNLJBF,(MethodInfo *)0x0);
  if (bVar1) {
    if ((BHLFJNNLJBF != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)BHLFJNNLJBF,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      Nekki_SF2_GUI_LabelAlias__set_Alias(BHLFJNNLJBF,JCLPIKHEKBB,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)BHLFJNNLJBF,3,(MethodInfo *)0x0);
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(BHLFJNNLJBF,0x65,(MethodInfo *)0x0);
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pBVar2 = BHEDGAKGKPO_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x035832a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(BHLFJNNLJBF->klass->vtable)._23_set_color.methodPtr)
                ((pBVar2->FHIAKPJBBCB).fields.r,(pBVar2->FHIAKPJBBCB).fields.g,
                 (pBVar2->FHIAKPJBBCB).fields.b,(pBVar2->FHIAKPJBBCB).fields.a,BHLFJNNLJBF,
                 (BHLFJNNLJBF->klass->vtable)._23_set_color.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

