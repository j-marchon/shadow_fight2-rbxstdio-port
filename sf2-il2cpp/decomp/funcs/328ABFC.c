// Nekki.SF2.GUI.Dialogs.LotteryDialog$$NNDNPLLAMFK @ RVA 0x328ABFC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__NNDNPLLAMFK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  KHLGHHMCKAE_c *pKVar3;
  CocosAnimation_o *pCVar4;
  UnityEngine_GameObject_o *__this_00;
  EZCameraShake_CameraShaker_o *__this_01;
  GECKDIFJFDH_o *pGVar5;
  
  if ((DAT_045672d6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CameraShaker>__);
    FUN_01bab630(&KHLGHHMCKAE_TypeInfo);
    DAT_045672d6 = 1;
  }
  pCVar4 = (__this->fields).WinEffect;
  if (pCVar4 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFirstFrame(pCVar4,(MethodInfo *)0x0);
    pCVar4 = (__this->fields).WinEffect;
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      (pCVar4->fields)._FEBBHCOAEMI_k__BackingField = 1;
      (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = true;
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        __this_01 = (EZCameraShake_CameraShaker_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this,
                               Method_UnityEngine_Component_GetComponent<CameraShaker>__);
        pKVar3 = KHLGHHMCKAE_TypeInfo;
        pGVar5 = KHLGHHMCKAE_TypeInfo->static_fields->MEHPFOODDDE;
        if (pGVar5 != (GECKDIFJFDH_o *)0x0) {
          fVar1 = (pGVar5->fields).MECMNBDAIKA.fields.x;
          fVar2 = (pGVar5->fields).MECMNBDAIKA.fields.y;
          if (__this_01 != (EZCameraShake_CameraShaker_o *)0x0) {
            (__this_01->fields).DefaultPosInfluence.fields.z = (pGVar5->fields).MECMNBDAIKA.fields.z
            ;
            (__this_01->fields).DefaultPosInfluence.fields.x = fVar1;
            (__this_01->fields).DefaultPosInfluence.fields.y = fVar2;
            pGVar5 = pKVar3->static_fields->MEHPFOODDDE;
            if (pGVar5 != (GECKDIFJFDH_o *)0x0) {
              EZCameraShake_CameraShaker__ShakeOnce
                        (__this_01,(pGVar5->fields).DFPBOPOKJEF,(pGVar5->fields).ENIBLNOPPGE,0.0,
                         (pGVar5->fields).JAODINPKJLN,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

