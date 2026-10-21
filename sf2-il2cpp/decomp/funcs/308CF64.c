// ENOJCLHOINK$$.ctor @ RVA 0x308CF64

void ENOJCLHOINK___ctor(ENOJCLHOINK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o **ppSVar1;
  KBFGKFAKGPP_o **ppKVar2;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566067 & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OLKKAIFGGAK>_TypeInfo);
    FUN_01bab630(&StringLiteral_5642);
    DAT_04566067 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OLKKAIFGGAK>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OLKKAIFGGAK>__ctor__);
  ppSVar1 = &(__this->fields).EHJHKEEDKBE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppKVar2 = &(__this->fields).FIFCACFAFPH;
  *ppKVar2 = (KBFGKFAKGPP_o *)0x0;
  thunk_FUN_01c20e04(ppKVar2,0);
  __this_01 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_01,StringLiteral_5642,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  return;
}

