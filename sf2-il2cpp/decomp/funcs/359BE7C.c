// Nekki.SF2.GUI.Profile.SubItem$$UpdateIcon @ RVA 0x359BE7C

void Nekki_SF2_GUI_Profile_SubItem__UpdateIcon
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  pNVar2 = (__this->fields)._icon;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    *(System_String_o **)&(pNVar2->fields).super.m_PixelsPerUnitMultiplier =
         (__this->fields).CNMMJHJNNAJ;
    thunk_FUN_01c20e04(&(pNVar2->fields).super.m_PixelsPerUnitMultiplier);
    pNVar2 = (__this->fields)._icon;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar2,(__this->fields).COCAGDPOPLL,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._selectedPicture;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._lockPicture;
        if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._inactivePicture;
          if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0369bf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(__this->klass->vtable)._64_MEPNOKOKPIA.methodPtr)
                      (__this,(__this->klass->vtable)._64_MEPNOKOKPIA.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

