// Nekki.SF2.GUI.Profile.SubItem$$MEPNOKOKPIA @ RVA 0x359C190

void Nekki_SF2_GUI_Profile_SubItem__MEPNOKOKPIA
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._inactivePicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive
              (__this_01,(__this->fields).NBGPKFHLCOG == false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

