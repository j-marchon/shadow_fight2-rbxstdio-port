// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$DFEBCLGNDBG @ RVA 0x353F6FC

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__DFEBCLGNDBG
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  float value;
  
  __this_00 = (__this->fields).super._content;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    value = 340.0;
    if ((__this->fields).LNIKACBHFOE != 0) {
      value = 0.0;
    }
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

