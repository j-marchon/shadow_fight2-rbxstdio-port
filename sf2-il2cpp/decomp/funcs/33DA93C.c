// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$MNHNMCEFCNI @ RVA 0x33DA93C

float Nekki_SF2_GUI_Shop_Forge_ForgePanel__MNHNMCEFCNI
                (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  if ((DAT_04567e65 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    DAT_04567e65 = 1;
  }
  fVar1 = (__this->fields).LKOBHGOBICA;
  if (fVar1 == -1.0) {
    __this_00 = (__this->fields)._CellPrefab;
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_00,Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                              ), __this_01 == (UnityEngine_RectTransform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.y;
    (__this->fields).LKOBHGOBICA = fVar1;
  }
  return fVar1;
}

