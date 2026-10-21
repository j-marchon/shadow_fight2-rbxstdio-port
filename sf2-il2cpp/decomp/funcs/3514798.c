// Nekki.SF2.GUI.Common.Hints.HintList$$.ctor @ RVA 0x3514798

void Nekki_SF2_GUI_Common_Hints_HintList___ctor
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o **ppNVar1;
  System_Collections_Generic_List_HintGroup__o *__this_01;
  System_Collections_Generic_List_HintGroup__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04568916 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintGroup>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568916 = 1;
    method = extraout_x1;
  }
  (__this->fields)._TrackingDeviceID = -1;
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnHintSchemeChanged;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  (__this->fields).OHENCPAHBDH = StringLiteral_1;
  thunk_FUN_01c20e04();
  __this_01 = (System_Collections_Generic_List_HintGroup__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HintGroup>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HintGroup>__ctor__);
  ppSVar2 = &(__this->fields).DEDJHBCOMCJ;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

