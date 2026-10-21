// Nekki.SF2.GUI.ModuleHolder$$.ctor @ RVA 0x314DE28

void Nekki_SF2_GUI_ModuleHolder___ctor(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIModule__o *pSVar1;
  System_Collections_Generic_List_UIModule__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIModule>_TypeInfo);
    DAT_045667e2 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart_Mobiles;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart_Steam;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnStart_Switch;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater_Mobiles;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater_Steam;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields)._MountOnLater_Switch;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields).LPIPKHINEJH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
  ppSVar2 = &(__this->fields).FAGFCHOFHPG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

