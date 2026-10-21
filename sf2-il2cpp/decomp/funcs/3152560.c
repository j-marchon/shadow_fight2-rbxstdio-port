// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$UpdateHeaderPosition @ RVA 0x3152560

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *transform;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__UpdateHeaderPosition
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.super.super._header;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__AddLocalPositionY(transform,-30.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

