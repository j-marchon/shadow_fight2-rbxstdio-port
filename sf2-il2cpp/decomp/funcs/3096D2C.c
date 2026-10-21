// Sf2.Timers$$.ctor @ RVA 0x3096D2C

void Sf2_Timers___ctor(Sf2_Timers_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_HDNONCJLIHI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045660df & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HDNONCJLIHI>_TypeInfo);
    DAT_045660df = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HDNONCJLIHI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<HDNONCJLIHI>__ctor__);
  ppSVar1 = &(__this->fields).DIKHJEINHID;
  *ppSVar1 = (System_Collections_Generic_List_HDNONCJLIHI__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

