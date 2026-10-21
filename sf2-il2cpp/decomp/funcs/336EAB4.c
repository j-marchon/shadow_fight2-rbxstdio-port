// Nekki.SF2.GUI.Glyphs.Glyph$$LDOABBLILEB @ RVA 0x336EAB4

Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *
Nekki_SF2_GUI_Glyphs_Glyph__LDOABBLILEB
          (UnityEngine_GameObject_o *HMBLEHNKDIH,UnityEngine_Transform_o *JJHEGPBBMLG,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *pNVar1;
  
  if ((DAT_04567b06 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<PrefabGlyph>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567b06 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)HMBLEHNKDIH,JJHEGPBBMLG,
                      Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pNVar1 = (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<PrefabGlyph>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

