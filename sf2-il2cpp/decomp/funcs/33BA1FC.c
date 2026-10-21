// Nekki.SF2.GUI.Profile.PerkSubItem$$DPCOKFFHLCH @ RVA 0x33BA1FC

void Nekki_SF2_GUI_Profile_PerkSubItem__DPCOKFFHLCH
               (Nekki_SF2_GUI_Profile_PerkSubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  JLGNBOILFLN_o *pJVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *method_00;
  
  pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar5 == (JLGNBOILFLN_o *)0x0) {
    return;
  }
  iVar3 = JLGNBOILFLN__BCLMIPIBLLB(pJVar5,(MethodInfo *)0x0);
  pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
  if (pJVar5 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba300;
  iVar4 = JLGNBOILFLN__BCLMIPIBLLB(pJVar5,(MethodInfo *)0x0);
  if (iVar4 == 1) {
    pJVar5 = (__this->fields)._CGEGGOPIPHH_k__BackingField;
    if (pJVar5 == (JLGNBOILFLN_o *)0x0) goto LAB_034ba300;
    iVar1 = (pJVar5->fields).JDNKKGPNHPB;
    if (iVar1 == 2) goto LAB_034ba254;
    bVar2 = iVar1 != 3;
  }
  else {
LAB_034ba254:
    bVar2 = false;
  }
  if (bVar2 || iVar3 < 1) {
    return;
  }
  pNVar6 = (__this->fields)._upgradeLevelIcon;
  if ((pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    CJNHFNHJHPE = Nekki_SF2_GUI_Profile_PerkSubItem__JFJLPBPNIHI(__this,method_00);
    pNVar6 = (__this->fields)._upgradeLevelIcon;
    if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._upgradeLevelIcon;
      if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionX(pUVar7,61.0,(MethodInfo *)0x0);
        pNVar6 = (__this->fields)._upgradeLevelIcon;
        if (pNVar6 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar7,-61.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034ba300:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

