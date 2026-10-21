// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$CompareTo @ RVA 0x312F1F4

int32_t Nekki_SF2_GUI_Shop_Forge_RecipeUI__CompareTo
                  (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,
                  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *JJMOKKDDOEM,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *__this_00;
  GGLKHCAIGDI_o *pGVar2;
  GGLKHCAIGDI_o *pGVar3;
  
  pGVar2 = (__this->fields).PHAGOJCOMPN;
  if ((((pGVar2 != (GGLKHCAIGDI_o *)0x0) &&
       (JJMOKKDDOEM != (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0)) &&
      (pGVar3 = (JJMOKKDDOEM->fields).PHAGOJCOMPN, pGVar3 != (GGLKHCAIGDI_o *)0x0)) &&
     (__this_00 = (pGVar2->fields)._COIPKAKHDFP_k__BackingField, __this_00 != (System_String_o *)0x0
     )) {
    iVar1 = System_String__CompareTo
                      (__this_00,(pGVar3->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

