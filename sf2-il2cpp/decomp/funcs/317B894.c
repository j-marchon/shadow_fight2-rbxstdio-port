// Nekki.SF2.GUI.Dialogs.StrangerDialog$$ACICKHKFILK @ RVA 0x317B894

void Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,LabelButton_o *LGHOMHOPNEP,
               int32_t EFJKPCADGJH,System_String_o *JCLPIKHEKBB,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if ((LGHOMHOPNEP != (LabelButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)LGHOMHOPNEP,(MethodInfo *)0x0),
     __this = (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)0x0,
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    LabelButton__set_ButtonColor(LGHOMHOPNEP,EFJKPCADGJH,(MethodInfo *)0x0);
    LabelButton__set_Alias(LGHOMHOPNEP,JCLPIKHEKBB,(MethodInfo *)0x0);
    (LGHOMHOPNEP->fields).super.super.ButtonId = OGPGLGPMEPD;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

