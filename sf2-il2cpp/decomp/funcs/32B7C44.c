// Nekki.SF2.GUI.Map.IRaidKeysView$$.ctor @ RVA 0x32B7C44

void Nekki_SF2_GUI_Map_IRaidKeysView___ctor
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NPKKNCCEIND__o *__this_00;
  System_Collections_Generic_List_NPKKNCCEIND__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567464 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NPKKNCCEIND>_TypeInfo);
    DAT_04567464 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_NPKKNCCEIND__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NPKKNCCEIND>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NPKKNCCEIND>__ctor__);
  ppSVar1 = &(__this->fields).ADHBPAAHOKK;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

