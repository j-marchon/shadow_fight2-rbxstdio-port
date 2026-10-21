// Nekki.SF2.GUI.DebugModules.ConsoleUI$$.cctor @ RVA 0x353D8B8

void Nekki_SF2_GUI_DebugModules_ConsoleUI___cctor(MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Action_o **ppSVar2;
  System_Action_bool__o *pSVar3;
  System_Action_bool__o **ppSVar4;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o **ppSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar6;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar7;
  
  if ((DAT_04568ad1 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_AINAIFEFEMF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_FMFEHBMDFNB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_LMBMLBOHENF__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_TypeInfo);
    DAT_04568ad1 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  ppSVar2 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  ppSVar2 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BOGNOKPMNAK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar3 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  ppSVar4 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CPJFNBEJDON;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  ppSVar5 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BFKHNDJDKCA;
  *ppSVar5 = __this;
  thunk_FUN_01c20e04(ppSVar5,__this);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar6 = &Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  *ppSVar6 = __this_00;
  thunk_FUN_01c20e04(ppSVar6,__this_00);
  pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
  pNVar7->BBGKBAMBOGA = -1;
  pNVar7->CAHAKKCIBIB = -0x80000000;
  return;
}

