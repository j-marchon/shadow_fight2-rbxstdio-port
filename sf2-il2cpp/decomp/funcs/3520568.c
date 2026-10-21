// Nekki.SF2.GUI.Fight.PlayerLifeBar$$.ctor @ RVA 0x3520568

void Nekki_SF2_GUI_Fight_PlayerLifeBar___ctor
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImageSkew__o *__this_00;
  System_Collections_Generic_List_ResolutionImageSkew__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689b4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImageSkew>_TypeInfo);
    DAT_045689b4 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ResolutionImageSkew__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImageSkew>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ResolutionImageSkew>__ctor__);
  ppSVar1 = &(__this->fields).HONNHINBNAJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).AIGDHMHBAFN = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

