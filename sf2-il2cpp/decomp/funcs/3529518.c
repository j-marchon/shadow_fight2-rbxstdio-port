// Nekki.SF2.GUI.DebugModules.ScreenDebug$$.ctor @ RVA 0x3529518

void Nekki_SF2_GUI_DebugModules_ScreenDebug___ctor
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Stack_Text__o *__this_00;
  System_Collections_Generic_Stack_Text__o **ppSVar1;
  System_Text_StringBuilder_o *__this_01;
  System_Text_StringBuilder_o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Stack<Text>_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04568a0d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Stack_Text__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Stack<Text>_TypeInfo,method);
  System_Collections_Generic_Stack<object>___ctor
            ((System_Collections_Generic_Stack_T__o *)__this_00,
             Method_System_Collections_Generic_Stack<Text>__ctor__);
  ppSVar1 = &(__this->fields).KAABNEFOJHJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).LJLADKMLDEF;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_DebugUIModule___ctor((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

