// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$.ctor @ RVA 0x3095290

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ControlAction__o *__this_00;
  System_Collections_Generic_List_ControlAction__o **ppSVar1;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_FEEECOADFNH__o **ppSVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  UnityEngine_Events_UnityEvent_o **ppUVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_045660cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlAction>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FEEECOADFNH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ControlAction>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FEEECOADFNH>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_045660cf = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ControlAction__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ControlAction>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ControlAction>__ctor__);
  ppSVar1 = &(__this->fields).controls;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_T__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FEEECOADFNH>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this_01,Method_System_Collections_Generic_List<FEEECOADFNH>__ctor__);
  ppSVar2 = &(__this->fields).hints;
  *ppSVar2 = (System_Collections_Generic_List_FEEECOADFNH__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).BMLJIHKIHNL;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).NFLKCFKIBAD;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).LCJGCOJKLED;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).NPJBAPNBCGD;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  pUVar3 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar3,(MethodInfo *)0x0);
  ppUVar4 = &(__this->fields).OEBMLKJADCA;
  *ppUVar4 = pUVar3;
  thunk_FUN_01c20e04(ppUVar4,pUVar3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

