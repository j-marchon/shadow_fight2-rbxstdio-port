// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$MIHNIBCCKAA @ RVA 0x34289AC

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__MIHNIBCCKAA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o UVar3;
  
  if ((DAT_04568123 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12913);
    FUN_01bab630(&StringLiteral_12914);
    DAT_04568123 = 1;
  }
  pCVar1 = (__this->fields)._animationHitEffect;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    CocosAnimation__Init(pCVar1,StringLiteral_12913,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._animationHitEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 0;
      (pCVar1->fields)._PPEGDOHGLJJ_k__BackingField = 0.02;
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = false;
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._animationHitEffect;
        if ((pCVar1 != (CocosAnimation_o *)0x0) &&
           (__this_00 = (pCVar1->fields)._MPAMHJJKABE_k__BackingField,
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar3 = UnityEngine_Transform__get_localPosition
                            ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
          pCVar1 = (__this->fields)._animationSlashEffect;
          (__this->fields).BADCMPECIPC.fields.x = UVar3.fields.x;
          (__this->fields).BADCMPECIPC.fields.y = UVar3.fields.y;
          (__this->fields).BADCMPECIPC.fields.z = UVar3.fields.z;
          if (pCVar1 != (CocosAnimation_o *)0x0) {
            CocosAnimation__Init
                      (pCVar1,StringLiteral_12914,0,(System_String_o *)0x0,(MethodInfo *)0x0);
            pCVar1 = (__this->fields)._animationSlashEffect;
            if (pCVar1 != (CocosAnimation_o *)0x0) {
              (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 0;
              (pCVar1->fields)._PPEGDOHGLJJ_k__BackingField = 0.02;
              (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = false;
              pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

