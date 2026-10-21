// Nekki.SF2.GUI.Shop.Forge.RecipePriceUI$$.ctor @ RVA 0x3151C04

void Nekki_SF2_GUI_Shop_Forge_RecipePriceUI___ctor
               (Nekki_SF2_GUI_Shop_Forge_RecipePriceUI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MaterialPriceUI__o *__this_00;
  System_Collections_Generic_List_MaterialPriceUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566810 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MaterialPriceUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MaterialPriceUI>_TypeInfo);
    DAT_04566810 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MaterialPriceUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MaterialPriceUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MaterialPriceUI>__ctor__);
  ppSVar1 = &(__this->fields).MIOLFPIJMDH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

