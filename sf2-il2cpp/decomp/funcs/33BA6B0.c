// Nekki.SF2.GUI.Profile.PerkSubItem$$Awake @ RVA 0x33BA6B0

void Nekki_SF2_GUI_Profile_PerkSubItem__Awake
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  Nekki_SF2_GUI_Profile_SubItem__Awake((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectedPicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    iVar1 = UnityEngine_Transform__GetSiblingIndex(__this_01,(MethodInfo *)0x0);
    (__this->fields).OPMEHEEJPHC = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

