// Nekki.SF2.GUI.TableView$$get_EndOffset @ RVA 0x30DAC64

float Nekki_SF2_GUI_TableView__get_EndOffset(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectOffset_o *__this_00;
  
  __this_00 = (__this->fields).padding;
  if (__this_00 != (UnityEngine_RectOffset_o *)0x0) {
    if ((__this->fields).tableViewOrientation == 0) {
      iVar1 = UnityEngine_RectOffset__get_bottom(__this_00,(MethodInfo *)0x0);
    }
    else {
      iVar1 = UnityEngine_RectOffset__get_right(__this_00,(MethodInfo *)0x0);
    }
    return (float)iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

