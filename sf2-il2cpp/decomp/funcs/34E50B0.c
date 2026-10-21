// Nekki.SF2.GUI.ResolutionImage$$RefreshSprite @ RVA 0x34E50B0

void Nekki_SF2_GUI_ResolutionImage__RefreshSprite
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  System_String_o *OOKEKJMFKPE;
  System_String_o *HCAAAAMDCNO;
  char cVar1;
  UnityEngine_Sprite_o *value;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568755 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04568755 = 1;
    method = extraout_x1;
  }
  *(undefined1 *)((long)&(__this->fields)._SpriteName + 1) = 1;
  OOKEKJMFKPE = *(System_String_o **)&(__this->fields).super.m_PixelsPerUnitMultiplier;
  HCAAAAMDCNO = (__this->fields)._TexturePath;
  cVar1 = *(char *)&(__this->fields)._SpriteName;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo,method);
  }
  value = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,HCAAAAMDCNO,cVar1 != '\0',(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)__this,value,(MethodInfo *)0x0);
  return;
}

