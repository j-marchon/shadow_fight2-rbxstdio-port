// JIBAEMHNBOF$$.ctor @ RVA 0x30CA46C

void JIBAEMHNBOF___ctor(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662d0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo);
    DAT_045662d0 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>__ctor__);
  (__this->fields).LIDLGDLCMEE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

