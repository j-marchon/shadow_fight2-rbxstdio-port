// Nekki.SF2.GUI.CompositeImage$$.ctor @ RVA 0x301F540

void Nekki_SF2_GUI_CompositeImage___ctor(Nekki_SF2_GUI_CompositeImage_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  System_Collections_Generic_List_ResolutionImage__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c3b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImage>_TypeInfo);
    DAT_04565c3b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ResolutionImage__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImage>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ResolutionImage>__ctor__);
  ppSVar1 = &(__this->fields).OGFIAFLMLKI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

