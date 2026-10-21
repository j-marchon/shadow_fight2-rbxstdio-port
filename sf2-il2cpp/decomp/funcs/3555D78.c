// NFEOGKEAFHL$$.ctor @ RVA 0x3555D78

void NFEOGKEAFHL___ctor(NFEOGKEAFHL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b65 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_04568b65 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  (__this->fields).GPNNHMIJLGL = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 03655df8 to 03755e8b has its CatchHandler @ 03655df8
                       catch() { ... } // from try @ 03655df8 with catch @ 03655df8
                       catch() { ... } // from try @ 03655f2c with catch @ 03655df8
                       catch() { ... } // from try @ 03655f64 with catch @ 03655df8
                       catch() { ... } // from try @ 03655f78 with catch @ 03655df8
                       catch() { ... } // from try @ 03655fcc with catch @ 03655df8
                       catch() { ... } // from try @ 03656020 with catch @ 03655df8 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

