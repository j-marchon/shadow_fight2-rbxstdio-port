// TypeDefIndex 161
// Namespace: Nekki.SF2.GUI.Glyphs
// public class PrefabGlyph : Glyph
// Fields:
//   private GameObject <CIGDAHHAALG>k__BackingField; // 0x48

// ===== private void CKMFFODCJFJ(GameObject CJNHFNHJHPE)  [RVA 0x3023F30]
// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$CKMFFODCJFJ @ RVA 0x3023F30

void Nekki_SF2_GUI_Glyphs_PrefabGlyph__CKMFFODCJFJ
               (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,UnityEngine_GameObject_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._CIGDAHHAALG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override float get_ContentWidth()  [RVA 0x3023F38]
// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$get_ContentWidth @ RVA 0x3023F38

float Nekki_SF2_GUI_Glyphs_PrefabGlyph__get_ContentWidth
                (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields).super._MPAMHJJKABE_k__BackingField;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.x;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GameObject get_Prefab()  [RVA 0x3023F54]
// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$get_Prefab @ RVA 0x3023F54

UnityEngine_GameObject_o *
Nekki_SF2_GUI_Glyphs_PrefabGlyph__get_Prefab
          (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  return (__this->fields)._CIGDAHHAALG_k__BackingField;
}


// ===== public override float get_Ratio()  [RVA 0x3023F5C]
// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$get_Ratio @ RVA 0x3023F5C

float Nekki_SF2_GUI_Glyphs_PrefabGlyph__get_Ratio
                (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  
  pUVar1 = (__this->fields).super._MPAMHJJKABE_k__BackingField;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super._MPAMHJJKABE_k__BackingField;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
      return UVar2.fields.y / UVar3.fields.x;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Awake()  [RVA 0x3023FA0]
// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$Awake @ RVA 0x3023FA0

void Nekki_SF2_GUI_Glyphs_PrefabGlyph__Awake
               (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UnityEngine_RectTransform_o **ppUVar4;
  
  if ((DAT_04565c7b & 1) == 0) {
    FUN_01bab630(&Method_Util_OHBILOGJCLA<RectTransform>__);
    FUN_01bab630(&StringLiteral_6865/*"GlyphPrefab"*/);
    DAT_04565c7b = 1;
  }
  Nekki_SF2_GUI_Glyphs_Glyph__Awake((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  ppUVar3 = &(__this->fields)._CIGDAHHAALG_k__BackingField;
  *ppUVar3 = pUVar1;
  thunk_FUN_01c20e04(ppUVar3,pUVar1);
  if ((UnityEngine_Object_o *)*ppUVar3 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name
              ((UnityEngine_Object_o *)*ppUVar3,StringLiteral_6865/*"GlyphPrefab"*/,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_RectTransform_o *)
             Util__OHBILOGJCLA<object>
                       ((__this->fields)._CIGDAHHAALG_k__BackingField,
                        Method_Util_OHBILOGJCLA<RectTransform>__);
    ppUVar4 = &(__this->fields).super._MPAMHJJKABE_k__BackingField;
    *ppUVar4 = pUVar2;
    thunk_FUN_01c20e04(ppUVar4,pUVar2);
    pUVar2 = *ppUVar4;
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_Transform__set_localPosition
                ((UnityEngine_Transform_o *)pUVar2,
                 (UnityEngine_Vector3_o)
                 (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,(MethodInfo *)0x0)
      ;
      pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30240BC]
// Nekki.SF2.GUI.Glyphs.PrefabGlyph$$.ctor @ RVA 0x30240BC

void Nekki_SF2_GUI_Glyphs_PrefabGlyph___ctor
               (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c7c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    DAT_04565c7c = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo,method);
  }
  Nekki_SF2_GUI_Glyphs_Glyph___ctor((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this,(MethodInfo *)0x0);
  return;
}

