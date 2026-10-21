// LCOODJKAICL$$.ctor @ RVA 0x34A2C1C

void LCOODJKAICL___ctor(LCOODJKAICL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045684b6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045684b6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).PKENPPJGGHL = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  LCOODJKAICL__CKHDCCFGNEN(__this,method_00);
  return;
}

