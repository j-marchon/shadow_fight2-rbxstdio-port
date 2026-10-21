// CNKPEGNHNGO$$.ctor @ RVA 0x33084C0

void CNKPEGNHNGO___ctor(CNKPEGNHNGO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567772 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_TypeInfo);
    DAT_04567772 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>__ctor__);
  (__this->fields).HLIELGNFGLF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

