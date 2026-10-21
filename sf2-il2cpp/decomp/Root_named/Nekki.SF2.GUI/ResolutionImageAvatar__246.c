// TypeDefIndex 246
// Namespace: Nekki.SF2.GUI
// public class ResolutionImageAvatar : ResolutionImage
// Fields:
//   private bool ICBEKJECMFO; // 0x122

// ===== protected override void GPCBFKCHEOB()  [RVA 0x3227F00]
// Nekki.SF2.GUI.ResolutionImageAvatar$$GPCBFKCHEOB @ RVA 0x3227F00

void Nekki_SF2_GUI_ResolutionImageAvatar__GPCBFKCHEOB
               (Nekki_SF2_GUI_ResolutionImageAvatar_o *__this,MethodInfo *method)

{
  if (*(char *)((long)&(__this->fields).super._SpriteName + 2) != '\0') {
    return;
  }
  Nekki_SF2_GUI_ResolutionImage__GPCBFKCHEOB
            ((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetHighModeScale(float JKOJPEKLBCI)  [RVA 0x3227F14]
// Nekki.SF2.GUI.ResolutionImageAvatar$$SetHighModeScale @ RVA 0x3227F14

void Nekki_SF2_GUI_ResolutionImageAvatar__SetHighModeScale
               (Nekki_SF2_GUI_ResolutionImageAvatar_o *__this,float JKOJPEKLBCI,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o value;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    value.fields.y = JKOJPEKLBCI;
    value.fields.x = JKOJPEKLBCI;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3227F4C]
// Nekki.SF2.GUI.ResolutionImageAvatar$$.ctor @ RVA 0x3227F4C

void Nekki_SF2_GUI_ResolutionImageAvatar___ctor
               (Nekki_SF2_GUI_ResolutionImageAvatar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage___ctor((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void UseHighModeOnly()  [RVA 0x3227F54]
// Nekki.SF2.GUI.ResolutionImageAvatar$$UseHighModeOnly @ RVA 0x3227F54

void Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly
               (Nekki_SF2_GUI_ResolutionImageAvatar_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).super._SpriteName + 2) = 1;
  return;
}


// ===== public override void RefreshSprite()  [RVA 0x3227F60]
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

