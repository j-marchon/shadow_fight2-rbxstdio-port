// Nekki.SF2.GUI.Profile.TrickContent$$.ctor @ RVA 0x31B1DB0

void Nekki_SF2_GUI_Profile_TrickContent___ctor
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_float__o *__this_00;
  System_Collections_Generic_List_float__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b82 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<float>_TypeInfo);
    DAT_04566b82 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_float__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<float>_TypeInfo,method);
  System_Collections_Generic_List<float>___ctor
            (__this_00,Method_System_Collections_Generic_List<float>__ctor__);
  ppSVar1 = &(__this->fields).LHBGKMGNOEP;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

