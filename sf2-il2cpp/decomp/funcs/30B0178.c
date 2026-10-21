// CFEANGJDHEE$$.ctor @ RVA 0x30B0178

void CFEANGJDHEE___ctor(CFEANGJDHEE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_string__o **ppSVar1;
  ABMPAOFAAEI_o *__this_01;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *__this_02;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o **ppSVar2;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_List_string__o **ppSVar3;
  System_Collections_Generic_Queue_DBLGMIJFILB__o *__this_04;
  System_Collections_Generic_Queue_DBLGMIJFILB__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045661d3 & 1) == 0) {
    FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Queue<DBLGMIJFILB>_TypeInfo);
    DAT_045661d3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo,method);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar1 = &(__this->fields).CPBGOKDCADG;
  *ppSVar1 = (System_Collections_Generic_HashSet_string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_01 = (ABMPAOFAAEI_o *)thunk_FUN_01bda818(ABMPAOFAAEI_TypeInfo);
  ABMPAOFAAEI___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).MMFAILFMCJC = __this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  __this_02 = (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_TypeInfo);
  System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>___ctor
            (__this_02,Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__ctor__);
  ppSVar2 = &(__this->fields).FAMNALIFEHI;
  *ppSVar2 = __this_02;
  thunk_FUN_01c20e04(ppSVar2,__this_02);
  __this_03 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar3 = &(__this->fields).CDDNOMEDBKF;
  *ppSVar3 = __this_03;
  thunk_FUN_01c20e04(ppSVar3,__this_03);
  __this_04 = (System_Collections_Generic_Queue_DBLGMIJFILB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Queue<DBLGMIJFILB>_TypeInfo);
  System_Collections_Generic_Queue<DBLGMIJFILB>___ctor
            (__this_04,Method_System_Collections_Generic_Queue<DBLGMIJFILB>__ctor__);
  ppSVar4 = &(__this->fields).JBNEIFBJCJN;
  *ppSVar4 = __this_04;
  thunk_FUN_01c20e04(ppSVar4,__this_04);
  CFEANGJDHEE__BJKJIIILNBB(__this,method_00);
  return;
}

