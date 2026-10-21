// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$get_CurrentRecipe @ RVA 0x33DB784

GGLKHCAIGDI_o *
Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
          (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGLKHCAIGDI_o *pGVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *pNVar3;
  
  if ((DAT_04567e6f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567e6f = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 034db7cc to 035db973 has its CatchHandler @ 034db7cc
                       catch() { ... } // from try @ 034db7cc with catch @ 034db7cc
                       catch() { ... } // from try @ 034dba54 with catch @ 034db7cc
                       catch() { ... } // from try @ 034dba7c with catch @ 034db7cc
                       catch() { ... } // from try @ 034dbb80 with catch @ 034db7cc
                       catch() { ... } // from try @ 034dbbc0 with catch @ 034db7cc
                       catch() { ... } // from try @ 034dbc04 with catch @ 034db7cc */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar2 = (GGLKHCAIGDI_o *)0x0;
  if (bVar1) {
    pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar2 = (pNVar3->fields).PHAGOJCOMPN;
  }
  return pGVar2;
}

