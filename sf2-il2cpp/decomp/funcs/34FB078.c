// Nekki.SF2.GUI.Common.Hints.HintGroup$$.ctor @ RVA 0x34FB078

void Nekki_SF2_GUI_Common_Hints_HintGroup___ctor
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  System_Collections_Generic_List_MIBHAJBEMIK__o **ppSVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  System_Collections_Generic_List_HintUI__o *__this_00;
  System_Collections_Generic_List_HintUI__o **ppSVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456881f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintUI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456881f = 1;
    method = extraout_x1;
  }
  (__this->fields)._IsAnimationAvailable = true;
  (__this->fields)._ID = 0x2c1;
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo,method);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  ppSVar2 = &(__this->fields)._DefaultHintIDs;
  *ppSVar2 = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnHintDown;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields)._OnHintUp;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  ppSVar2 = &(__this->fields).KDGCEFEPJHP;
  *ppSVar2 = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_HintUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  ppSVar5 = &(__this->fields).DEDJHBCOMCJ;
  *ppSVar5 = __this_00;
  thunk_FUN_01c20e04(ppSVar5,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

