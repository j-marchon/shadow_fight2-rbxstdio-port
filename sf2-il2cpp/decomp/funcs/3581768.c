// Nekki.SF2.GUI.Dialogs.EventDialog$$OFAKFHHDEKO @ RVA 0x3581768

void Nekki_SF2_GUI_Dialogs_EventDialog__OFAKFHHDEKO
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,UnityEngine_RectTransform_o *JDEFJPHCNMM
               ,float GCDIOJKMKIN,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  
  if ((DAT_04568cd4 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
    __this = (Nekki_SF2_GUI_Dialogs_EventDialog_o *)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cd4 = 1;
  }
  if (JDEFJPHCNMM != (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)JDEFJPHCNMM,
                           Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this = (Nekki_SF2_GUI_Dialogs_EventDialog_o *)0x0;
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,GCDIOJKMKIN,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

