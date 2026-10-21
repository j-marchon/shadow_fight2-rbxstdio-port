// BackKeyManager$$.ctor @ RVA 0x31AC174

void BackKeyManager___ctor(BackKeyManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_HAFLPBGEGCI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b4a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HAFLPBGEGCI>_TypeInfo);
    DAT_04566b4a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HAFLPBGEGCI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<HAFLPBGEGCI>__ctor__);
  ppSVar1 = &(__this->fields).EEFJHDPNBNG;
  *ppSVar1 = (System_Collections_Generic_List_HAFLPBGEGCI__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

