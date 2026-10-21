// PKNBJJPHAKI$$.ctor @ RVA 0x30E1030

void PKNBJJPHAKI___ctor(PKNBJJPHAKI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GBJGJEGPHKD__o *__this_00;
  System_Collections_Generic_List_GBJGJEGPHKD__o **ppSVar1;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_045663a1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBJGJEGPHKD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GBJGJEGPHKD>_TypeInfo);
    FUN_01bab630(&StringLiteral_14802);
    DAT_045663a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GBJGJEGPHKD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GBJGJEGPHKD>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GBJGJEGPHKD>__ctor__);
  ppSVar1 = &(__this->fields).DDOAJGPFCNB;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_14802,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  return;
}

