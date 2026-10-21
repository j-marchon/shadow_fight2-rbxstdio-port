// DNICJALNLEB$$.ctor @ RVA 0x343EA38

void DNICJALNLEB___ctor(DNICJALNLEB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ALJBCELIEHC__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568204 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ALJBCELIEHC>_TypeInfo);
    DAT_04568204 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ALJBCELIEHC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ALJBCELIEHC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ALJBCELIEHC>__ctor__);
  (__this->fields).HLEDPFGACOE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 0353eaa8 to 0363eb57 has its CatchHandler @ 0353eaa8
                       catch() { ... } // from try @ 0353eaa8 with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353eb78 with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353ebcc with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353ebf4 with catch @ 0353eaa8
                       catch() { ... } // from try @ 0353ec34 with catch @ 0353eaa8 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

