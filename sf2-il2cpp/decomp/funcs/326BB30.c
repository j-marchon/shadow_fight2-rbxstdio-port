// Nekki.SF2.GUI.Shop.SidePanel$$GACEMKIBNNE @ RVA 0x326BB30

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_SidePanel__GACEMKIBNNE(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_UI_ScrollRect__get_normalizedPosition(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

