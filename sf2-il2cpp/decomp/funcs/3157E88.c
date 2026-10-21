// HPEENDCCJND$$.ctor @ RVA 0x3157E88

void HPEENDCCJND___ctor(HPEENDCCJND_o *__this,MethodInfo *method)

{
  System_Random_o *__this_00;
  System_Random_o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_object__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456684e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<object>_TypeInfo);
    FUN_01bab630(&System_Random_TypeInfo);
    DAT_0456684e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Random_o *)thunk_FUN_01bda818(System_Random_TypeInfo,method);
  System_Random___ctor(__this_00,0x2a,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).NBAAKDGJIEI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<object>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<object>__ctor__);
  ppSVar2 = &(__this->fields).EIHCMKCJPJO;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

