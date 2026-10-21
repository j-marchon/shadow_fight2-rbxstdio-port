// Nekki.SF2.GUI.ResolutionImageAvatar$$RefreshSprite @ RVA 0x3227F60

void Nekki_SF2_GUI_ResolutionImageAvatar__RefreshSprite
               (Nekki_SF2_GUI_ResolutionImageAvatar_o *__this,MethodInfo *method)

{
  System_String_o *OOKEKJMFKPE;
  System_String_o *HCAAAAMDCNO;
  UnityEngine_Sprite_o *value;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f83 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04566f83 = 1;
    method = extraout_x1;
  }
  if (*(char *)((long)&(__this->fields).super._SpriteName + 2) != '\0') {
    *(undefined1 *)((long)&(__this->fields).super._SpriteName + 1) = 1;
    OOKEKJMFKPE = *(System_String_o **)&(__this->fields).super.super.m_PixelsPerUnitMultiplier;
    HCAAAAMDCNO = (__this->fields).super._TexturePath;
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo,method);
    }
    value = KKCBGIBKOCP__AABNIJJLJLP(OOKEKJMFKPE,HCAAAAMDCNO,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_ResolutionImage__RefreshSprite
            ((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
  return;
}

