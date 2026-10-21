// Nekki.SF2.GUI.Profile.SubItem$$ACCLNHDNBEI @ RVA 0x359BC0C

void Nekki_SF2_GUI_Profile_SubItem__ACCLNHDNBEI
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,bool AHBKHGFDGHN,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._backPicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,AHBKHGFDGHN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

