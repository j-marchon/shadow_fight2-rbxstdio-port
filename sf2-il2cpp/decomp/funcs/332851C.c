// PCEDNFLCPPF$$GAIEEOLGFKA @ RVA 0x332851C

SimpleJSON_JSONNode_o * PCEDNFLCPPF__GAIEEOLGFKA(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSON_JSONArray_o *pSVar2;
  SimpleJSON_JSONObject_o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045678bf & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_LastOrDefault<JSONNode>__);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    DAT_045678bf = 1;
    method = extraout_x1;
  }
  pSVar2 = PCEDNFLCPPF__DNLODALMDGM(__this,method);
  if (pSVar2 != (SimpleJSON_JSONArray_o *)0x0) {
    iVar1 = (*(pSVar2->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable)._11_get_Count.method);
    if (iVar1 == 0) {
      __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
      SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      (*(pSVar2->klass->vtable)._21_Add.methodPtr)
                (pSVar2,__this_00,(pSVar2->klass->vtable)._21_Add.method);
    }
    source = (System_Collections_Generic_IEnumerable_TSource__o *)
             (*(pSVar2->klass->vtable)._25_get_Children.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._25_get_Children.method);
    pIVar3 = System_Linq_Enumerable__LastOrDefault<object>
                       (source,Method_System_Linq_Enumerable_LastOrDefault<JSONNode>__);
    return (SimpleJSON_JSONNode_o *)pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

