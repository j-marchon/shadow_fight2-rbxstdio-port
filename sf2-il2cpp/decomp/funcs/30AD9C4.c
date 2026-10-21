// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$EJHAPHAHMHG @ RVA 0x30AD9C4

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).super._header;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

