// Nekki.SF2.GUI.Shop.Forge.RecipePropertiesUI$$.ctor @ RVA 0x3523A74

void Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI___ctor
               (Nekki_SF2_GUI_Shop_Forge_RecipePropertiesUI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RecipePropertyUI__o *__this_00;
  System_Collections_Generic_List_RecipePropertyUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689ed & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RecipePropertyUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RecipePropertyUI>_TypeInfo);
    DAT_045689ed = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_RecipePropertyUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RecipePropertyUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RecipePropertyUI>__ctor__);
  ppSVar1 = &(__this->fields).DPJGAIPHHLG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

