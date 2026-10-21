// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$.ctor @ RVA 0x33DB4CC

void Nekki_SF2_GUI_Shop_Forge_ForgePanel___ctor
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o **ppNVar1;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o **ppNVar2;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_02;
  System_Collections_Generic_List_GGLKHCAIGDI__o **ppSVar3;
  MethodInfo *extraout_x1;
  undefined1 auVar4 [16];
  
  if ((DAT_04567e6c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
    DAT_04567e6c = 1;
    method = extraout_x1;
  }
  (__this->fields)._OpenX = -2036.0;
  (__this->fields)._InactiveTableViewCellOpacity = 0.5;
  (__this->fields)._ActiveTableViewCellOpacity = 1.0;
  (__this->fields)._MoveDuration = 1.0;
  (__this->fields)._ScrollDuration = 0.5;
  (__this->fields)._HintOffset.fields = (UnityEngine_Vector2_Fields)0x0;
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_TypeInfo,method);
  __this_00 = auVar4._0_8_;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF___ctor(__this_00,auVar4._8_8_);
  ppNVar1 = &(__this->fields)._OnStateChange;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  auVar4 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_TypeInfo);
  __this_01 = auVar4._0_8_;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE___ctor(__this_01,auVar4._8_8_);
  ppNVar2 = &(__this->fields)._OnRecipeSelected;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  (__this->fields).LKOBHGOBICA = -1.0;
  __this_02 = (System_Collections_Generic_List_GGLKHCAIGDI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
  ppSVar3 = &(__this->fields).OKIANCELJJF;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  (__this->fields).NBAADNACNDJ = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

