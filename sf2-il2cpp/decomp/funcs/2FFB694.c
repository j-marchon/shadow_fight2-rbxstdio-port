// JMDPBFOCHHP.EJICJNOEGGE$$.ctor @ RVA 0x2FFB694

void JMDPBFOCHHP_EJICJNOEGGE___ctor(JMDPBFOCHHP_EJICJNOEGGE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    DAT_04565ad8 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo,method);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<string>__ctor__);
  (__this->fields).LIBINPPOOGI = (System_Collections_Generic_HashSet_string__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

