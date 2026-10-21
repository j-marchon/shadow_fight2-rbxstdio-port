// TypeDefIndex 984
// Namespace: 
// [Serializable]
// private sealed class TextPic.<>c
// Fields:
//   public static readonly TextPic.<>c <>9; // 0x0
//   public static Predicate<Glyph> <>9__51_0; // 0x8
//   public static Action <>9__107_0; // 0x10

// ===== private static void .cctor()  [RVA 0x30BA444]
// Nekki.SF2.GUI.TextPic.<>c$$.cctor @ RVA 0x30BA444

void Nekki_SF2_GUI_TextPic_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456622d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_<>c_TypeInfo);
    DAT_0456622d = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_TextPic_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields->__9 = (Nekki_SF2_GUI_TextPic___c_o *)__this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_TextPic_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool HHPLKKIOCKH(Glyph Glyph)  [RVA 0x30BA4B4]
// Nekki.SF2.GUI.TextPic.<>c$$HHPLKKIOCKH @ RVA 0x30BA4B4

bool Nekki_SF2_GUI_TextPic_<>c__HHPLKKIOCKH
               (Nekki_SF2_GUI_TextPic___c_o *__this,Nekki_SF2_GUI_Glyphs_Glyph_o *Glyph,
               MethodInfo *method)

{
  BOGDEGPCIJI_o *pBVar1;
  
  if ((Glyph != (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) &&
     (pBVar1 = (Glyph->fields)._FAPFIEABBBO_k__BackingField, pBVar1 != (BOGDEGPCIJI_o *)0x0)) {
    return (pBVar1->fields)._HNPLLELOEDH_k__BackingField == false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void AHGBGOCBEAP()  [RVA 0x30BA4DC]
// Nekki.SF2.GUI.TextPic.<>c$$AHGBGOCBEAP @ RVA 0x30BA4DC

void Nekki_SF2_GUI_TextPic_<>c__AHGBGOCBEAP(Nekki_SF2_GUI_TextPic___c_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x30BA4AC]
// Nekki.SF2.GUI.TextPic.<>c$$.ctor @ RVA 0x30BA4AC

void Nekki_SF2_GUI_TextPic_<>c___ctor(Nekki_SF2_GUI_TextPic___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

