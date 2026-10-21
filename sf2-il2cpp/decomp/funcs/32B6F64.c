// Nekki.SF2.GUI.Map.ProgressBricksPanel$$.ctor @ RVA 0x32B6F64

void Nekki_SF2_GUI_Map_ProgressBricksPanel___ctor
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *__this_00;
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456745b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
    DAT_0456745b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>__ctor__);
  ppSVar1 = &(__this->fields).FBAIPCAJMEN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

