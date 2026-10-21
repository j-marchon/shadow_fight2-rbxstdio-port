// EANNACPOJFA$$.ctor @ RVA 0x348B1C4

void EANNACPOJFA___ctor(EANNACPOJFA_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_00;
  System_Collections_Generic_List_JLGNBOILFLN__o **ppSVar1;
  
                    /* try { // try from 0358b1c4 to 0368b2e3 has its CatchHandler @ 0358b1c4
                       catch() { ... } // from try @ 0358b1c4 with catch @ 0358b1c4
                       catch() { ... } // from try @ 0358b334 with catch @ 0358b1c4
                       catch() { ... } // from try @ 0358b384 with catch @ 0358b1c4
                       catch() { ... } // from try @ 0358b3c0 with catch @ 0358b1c4
                       catch() { ... } // from try @ 0358b3f0 with catch @ 0358b1c4 */
  if ((DAT_045683da & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
    DAT_045683da = 1;
  }
  __this_00 = (System_Collections_Generic_List_JLGNBOILFLN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JLGNBOILFLN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JLGNBOILFLN>__ctor__);
  ppSVar1 = &(__this->fields).GJBLBEALOBO;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).NOPGBJNLFHM = JLAFGLDIFOC;
  return;
}

