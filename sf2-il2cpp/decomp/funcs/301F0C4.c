// Nekki.SF2.GUI.CompositeImage$$GOCHBKFOOBM @ RVA 0x301F0C4

void Nekki_SF2_GUI_CompositeImage__GOCHBKFOOBM
               (Nekki_SF2_GUI_CompositeImage_o *__this,Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,
               DCEAMLCCDHH_o *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  
  if ((DAT_04565c38 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    DAT_04565c38 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IEPECMCLKJB->klass->_2).naturalAligment) &&
       ((IEPECMCLKJB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) {
      Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly
                ((Nekki_SF2_GUI_ResolutionImageAvatar_o *)IEPECMCLKJB,(MethodInfo *)0x0);
    }
    if ((IMMNELPBGIF != (DCEAMLCCDHH_o *)0x0) &&
       (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      *(System_String_o **)&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier =
           (IMMNELPBGIF->fields)._MLEPHDNBABJ_k__BackingField;
      thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (IEPECMCLKJB,(IMMNELPBGIF->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      (*(IEPECMCLKJB->klass->vtable)._23_set_color.methodPtr)
                ((IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.r,
                 (IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.g,
                 (IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.b,
                 (IMMNELPBGIF->fields)._BFEKLJGLHEH_k__BackingField.fields.a,IEPECMCLKJB,
                 (IEPECMCLKJB->klass->vtable)._23_set_color.method);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)IEPECMCLKJB,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar2,(UnityEngine_Vector3_o)
                          (IMMNELPBGIF->fields)._ABODODGIMOO_k__BackingField.fields,
                   (MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)IEPECMCLKJB,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalRotationZ
                  (pUVar2,(IMMNELPBGIF->fields)._HBNMFCBCBMD_k__BackingField,(MethodInfo *)0x0);
        (*(IEPECMCLKJB->klass->vtable)._45_SetNativeSize.methodPtr)
                  (IEPECMCLKJB,(IEPECMCLKJB->klass->vtable)._45_SetNativeSize.method);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)IEPECMCLKJB,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale
                    (pUVar2,(UnityEngine_Vector3_o)
                            (IMMNELPBGIF->fields)._POODCHFIIJJ_k__BackingField.fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

