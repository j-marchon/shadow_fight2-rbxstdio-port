// Nekki.SF2.GUI.Profile.PerkSubItem$$IAPFLEBPOJL @ RVA 0x33BA3D0

void Nekki_SF2_GUI_Profile_PerkSubItem__IAPFLEBPOJL
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  Nekki_SF2_GUI_Profile_SubItem__IAPFLEBPOJL
            ((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectedPicture;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = (__this->fields).super.GMEDAKHGMME;
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (bVar1 == false) {
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetSiblingIndex
                  (__this_01,(__this->fields).OPMEHEEJPHC,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

