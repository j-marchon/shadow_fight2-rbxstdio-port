// Nekki.SF2.GUI.Shop.PerksPanel$$.ctor @ RVA 0x336FC68

void Nekki_SF2_GUI_Shop_PerksPanel___ctor
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *__this_00;
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o **ppNVar1;
  System_Collections_Generic_List_PerkUI__o *__this_01;
  System_Collections_Generic_List_PerkUI__o **ppSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04567b0d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PerkUI>_TypeInfo);
    FUN_01bab630(&StringLiteral_5704);
    DAT_04567b0d = 1;
  }
  (__this->fields)._HintOffset.fields = (UnityEngine_Vector2_Fields)0xc1c8000000000000;
  (__this->fields)._Atlas = StringLiteral_5704;
  thunk_FUN_01c20e04();
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_TypeInfo);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnPerkHintShowed;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_PerkUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PerkUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<PerkUI>__ctor__);
  ppSVar2 = &(__this->fields).LLMOAIMNMHM;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

