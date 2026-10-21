// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$HKFPJNNOBMH @ RVA 0x31752D0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__HKFPJNNOBMH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  KHLGHHMCKAE_c *pKVar1;
  EZCameraShake_CameraShaker_o *__this_00;
  MethodInfo *method_00;
  GECKDIFJFDH_o *pGVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_0456694f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CameraShaker>__);
    FUN_01bab630(&KHLGHHMCKAE_TypeInfo);
    DAT_0456694f = 1;
  }
  fVar4 = (__this->fields).LBKIBHCEOAI;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if (fVar4 < fVar3) {
    EDFDANKEBGF__MGBMHCHNDFI((MethodInfo *)0x0);
    fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    (__this->fields).LBKIBHCEOAI = fVar3 + 10.0;
  }
  __this_00 = (EZCameraShake_CameraShaker_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,
                         Method_UnityEngine_Component_GetComponent<CameraShaker>__);
  pKVar1 = KHLGHHMCKAE_TypeInfo;
  pGVar2 = KHLGHHMCKAE_TypeInfo->static_fields->MEHPFOODDDE;
  if (pGVar2 != (GECKDIFJFDH_o *)0x0) {
    fVar3 = (pGVar2->fields).MECMNBDAIKA.fields.x;
    fVar4 = (pGVar2->fields).MECMNBDAIKA.fields.y;
    if (__this_00 != (EZCameraShake_CameraShaker_o *)0x0) {
      (__this_00->fields).DefaultPosInfluence.fields.z = (pGVar2->fields).MECMNBDAIKA.fields.z;
      (__this_00->fields).DefaultPosInfluence.fields.x = fVar3;
      (__this_00->fields).DefaultPosInfluence.fields.y = fVar4;
      pGVar2 = pKVar1->static_fields->MEHPFOODDDE;
      if (pGVar2 != (GECKDIFJFDH_o *)0x0) {
        EZCameraShake_CameraShaker__ShakeOnce
                  (__this_00,(pGVar2->fields).DFPBOPOKJEF / 1.8,(pGVar2->fields).ENIBLNOPPGE / 1.3,
                   0.0,(pGVar2->fields).JAODINPKJLN,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__DNHHEMBFGFJ(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

