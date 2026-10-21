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
    FUN_01bab630(&StringLiteral_6865);
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
              ((UnityEngine_Object_o *)*ppUVar3,StringLiteral_6865,(MethodInfo *)0x0);
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

