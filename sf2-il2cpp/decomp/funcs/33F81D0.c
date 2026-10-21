// CocosAnimation$$.ctor @ RVA 0x33F81D0

void CocosAnimation___ctor(CocosAnimation_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  System_Collections_Generic_List_Sprite__o *__this_01;
  System_Collections_Generic_List_Sprite__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567f9c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Sprite>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04567f9c = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).OnAnimationComplete;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  (__this->fields)._autoSize = true;
  __this_01 = (System_Collections_Generic_List_Sprite__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Sprite>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<Sprite>__ctor__);
  ppSVar2 = &(__this->fields).HKCNDNBLAHI;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).FIGKMEJEHGE = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

