// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$Refresh @ RVA 0x35233BC

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__Refresh
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,int32_t HLKBCKLJHHI,
               MDLDFLDGLND_o *LIMHKIDICNM,bool CHGIJNBBJLN,System_Action_GameObject__o *ACOFKBGCMHA,
               MethodInfo *method)

{
  MDLDFLDGLND_o **ppMVar1;
  MethodInfo *method_00;
  
  (__this->fields).EMPBBAGMIFD = HLKBCKLJHHI;
  ppMVar1 = &(__this->fields).CJBEIFPMJMH;
  *ppMVar1 = LIMHKIDICNM;
  thunk_FUN_01c20e04(ppMVar1,LIMHKIDICNM);
  (__this->fields).GMIJIENAFJM = CHGIJNBBJLN;
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__FAJIKJIFBOO(__this,method_00);
  Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI__NCMIHHJLDPG
            (__this,ACOFKBGCMHA,(MethodInfo *)LIMHKIDICNM);
  return;
}

