// Nekki.SF2.GUI.Common.Hints.HintUI$$NDOMIJALNGD @ RVA 0x32FCA64

void Nekki_SF2_GUI_Common_Hints_HintUI__NDOMIJALNGD
               (Nekki_SF2_GUI_Common_Hints_HintUI_o *__this,UnityEngine_UI_Text_o *JLNPKGGFFDD,
               MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  Nekki_SF2_GUI_Common_Hints_HintUI_StaticFields *pNVar7;
  
  if ((DAT_045676ed & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo);
    DAT_045676ed = 1;
  }
  iVar5 = (__this->fields)._Style;
  if ((Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (JLNPKGGFFDD != (UnityEngine_UI_Text_o *)0x0) {
    bVar6 = iVar5 != 0;
    lVar1 = 0x2c;
    if (bVar6) {
      lVar1 = 0x1c;
    }
    lVar2 = 0x28;
    if (bVar6) {
      lVar2 = 0x18;
    }
    lVar3 = 0x24;
    if (bVar6) {
      lVar3 = 0x14;
    }
    pNVar7 = Nekki_SF2_GUI_Common_Hints_HintUI_TypeInfo->static_fields;
    lVar4 = 0x20;
    if (bVar6) {
      lVar4 = 0x10;
    }
                    /* WARNING: Could not recover jumptable at 0x033fcb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JLNPKGGFFDD->klass->vtable)._23_set_color.methodPtr)
              (*(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar4),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar3),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar2),
               *(undefined4 *)((long)&pNVar7->ODBHBCHKHII + lVar1),JLNPKGGFFDD,
               (JLNPKGGFFDD->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

