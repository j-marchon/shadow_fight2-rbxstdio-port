// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$.ctor @ RVA 0x3458BF0

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KBAIDAHOMHA__o *pSVar1;
  System_Collections_Generic_List_KBAIDAHOMHA__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045682dc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
    DAT_045682dc = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_KBAIDAHOMHA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
  ppSVar2 = &(__this->fields).ACCKHLLKADM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KBAIDAHOMHA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
  ppSVar2 = &(__this->fields).LOMGJKLDCGH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KBAIDAHOMHA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
  ppSVar2 = &(__this->fields).DKOKMOCDAJD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

