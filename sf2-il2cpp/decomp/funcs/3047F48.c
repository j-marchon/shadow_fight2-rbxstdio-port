// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$Update @ RVA 0x3047F48

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__Update
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  
  pNVar1 = (__this->fields)._bottomStar1;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UnityEngine_TransformExtensions__AddLocalRotationZ(pUVar2,fVar3 * 15.0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._bottomStar2;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UnityEngine_TransformExtensions__AddLocalRotationZ(pUVar2,fVar3 * 15.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

