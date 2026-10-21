// Nekki.SF2.GUI.Fight.EndPvpFightContent$$.ctor @ RVA 0x3130DB0

void Nekki_SF2_GUI_Fight_EndPvpFightContent___ctor
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_MCNGELCOMNG__o **ppSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  
  if ((DAT_045666c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MCNGELCOMNG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MCNGELCOMNG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    FUN_01bab630(&StringLiteral_19371);
    FUN_01bab630(&StringLiteral_19377);
    FUN_01bab630(&StringLiteral_19374);
    FUN_01bab630(&StringLiteral_19369);
    FUN_01bab630(&StringLiteral_19372);
    DAT_045666c6 = 1;
  }
  (__this->fields).fightTimeAlias = StringLiteral_19371;
  thunk_FUN_01c20e04();
  (__this->fields).headHitsAlias = StringLiteral_19372;
  thunk_FUN_01c20e04();
  (__this->fields).criticalHitsAlias = StringLiteral_19369;
  thunk_FUN_01c20e04();
  (__this->fields).maxComboAlias = StringLiteral_19374;
  thunk_FUN_01c20e04();
  (__this->fields).styleAlias = StringLiteral_19377;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MCNGELCOMNG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<MCNGELCOMNG>__ctor__);
  ppSVar1 = &(__this->fields).NDEECPOPNFM;
  *ppSVar1 = (System_Collections_Generic_List_MCNGELCOMNG__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar2 = &(__this->fields).DPOPJKJLDEE;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).AnimationEndEvent;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).CloseEvent;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).ReplayEvent;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

