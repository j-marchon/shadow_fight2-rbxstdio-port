// Nekki.SF2.GUI.ResolutionButton$$SetNormalSprite @ RVA 0x30F4F4C

void Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
               (Nekki_SF2_GUI_ResolutionButton_o *__this,System_String_o *OOKEKJMFKPE,
               System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  byte bVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
  if ((DAT_04566448 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04566448 = 1;
  }
  ppSVar1 = &(__this->fields)._normalTexturePath;
  (__this->fields)._normalTexturePath = OOKEKJMFKPE;
  thunk_FUN_01c20e04(ppSVar1,OOKEKJMFKPE);
  ppSVar2 = &(__this->fields)._normalSpriteName;
  (__this->fields)._normalSpriteName = HCAAAAMDCNO;
  thunk_FUN_01c20e04(ppSVar2,HCAAAAMDCNO);
  __this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields).super.super.super.m_TargetGraphic;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar3 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((bVar3 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
      *(System_String_o **)&(__this_00->fields).super.m_PixelsPerUnitMultiplier = *ppSVar1;
      thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_00,*ppSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

