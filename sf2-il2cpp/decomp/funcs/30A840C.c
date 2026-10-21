// Nekki.SF2.GUI.Fight.ScreenFight$$CreateRingOut @ RVA 0x30A840C

void Nekki_SF2_GUI_Fight_ScreenFight__CreateRingOut
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_0456618a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6373);
    DAT_0456618a = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,method);
  (__this->fields).Type = 10;
  pNVar2 = (__this->fields).image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1_00;
  if (bVar1) {
    pNVar2 = (__this->fields).image;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,StringLiteral_6373,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).image;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar2->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._45_SetNativeSize.method);
        pNVar2 = (__this->fields).image;
        if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          method_00 = extraout_x1_01;
          goto LAB_031a84d8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031a84d8:
  Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,method_00);
  return;
}

