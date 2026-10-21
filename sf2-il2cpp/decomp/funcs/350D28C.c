// Nekki.SF2.GUI.Dialogs.NewsDialog$$Update @ RVA 0x350D28C

void Nekki_SF2_GUI_Dialogs_NewsDialog__Update
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  float fVar1;
  
  if ((__this->fields).IKKPHIEKOEL == false) {
    return;
  }
  __this_00 = (__this->fields)._loadingPicture;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__Rotate(__this_01,0.0,fVar1 * 20.0,0.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

