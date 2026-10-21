// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$EKLNAPJNGEA @ RVA 0x342877C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__EKLNAPJNGEA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  CocosAnimation_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  float fVar3;
  UnityEngine_Quaternion_o value;
  
  if ((DAT_04568121 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04568121 = 1;
    method = extraout_x1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
  fVar3 = LIIFLGALGNK__GFHNCCOMPAJ(-90.0,90.0,(MethodInfo *)0x0);
  pCVar2 = (__this->fields)._animationSlashEffect;
  if (pCVar2 != (CocosAnimation_o *)0x0) {
    (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
    CocosAnimation__SetFirstFrame(pCVar2,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._animationSlashEffect;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      (pCVar2->fields)._NOAJIBNJKPE_k__BackingField = true;
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      auVar1._4_8_ = 0;
      auVar1._0_4_ = fVar3 * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation(__this_00,value,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._animationSlashEffect;
        if ((pCVar2 != (CocosAnimation_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

