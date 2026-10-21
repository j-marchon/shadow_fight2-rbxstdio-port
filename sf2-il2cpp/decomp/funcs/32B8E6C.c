// Nekki.SF2.GUI.Common.Hints.HintCache$$.ctor @ RVA 0x32B8E6C

void Nekki_SF2_GUI_Common_Hints_HintCache___ctor
               (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HintUI__o *pSVar1;
  System_Collections_Generic_List_HintUI__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567470 & 1) == 0) {
                    /* try { // try from 033b8ea0 to 034b9107 has its CatchHandler @ 033b8ea0
                       catch() { ... } // from try @ 033b8ea0 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b9218 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b9318 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b9320 with catch @ 033b8ea0
                       catch() { ... } // from try @ 033b93d4 with catch @ 033b8ea0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintUI>_TypeInfo);
    DAT_04567470 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_HintUI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  ppSVar2 = &(__this->fields).AINKHCILFAC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HintUI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  ppSVar2 = &(__this->fields).HJBLBMEDIMJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

