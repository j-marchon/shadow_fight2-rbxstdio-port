// Nekki.SF2.GUI.Fight.StyleBar$$.ctor @ RVA 0x34CA990

void Nekki_SF2_GUI_Fight_StyleBar___ctor(Nekki_SF2_GUI_Fight_StyleBar_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  System_Collections_Generic_List_StyleBarStrip__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568663 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<StyleBarStrip>_TypeInfo);
    DAT_04568663 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_StyleBarStrip__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<StyleBarStrip>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<StyleBarStrip>__ctor__);
  ppSVar1 = &(__this->fields).CIKMDLPKCCF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

