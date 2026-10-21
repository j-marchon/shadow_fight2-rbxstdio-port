// BMBFOPNOLCF$$.ctor @ RVA 0x32516C8

void BMBFOPNOLCF___ctor(BMBFOPNOLCF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  KFHIPIPCOHK_o *__this_01;
  HIMHPFNABJN_o **ppHVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033516ac with catch @ 033516d8 */
                    /* try { // try from 033516e8 to 034516ef has its CatchHandler @ 03351704 */
                    /* try { // try from 033516f0 to 034516fb has its CatchHandler @ 033515b0 */
  if ((DAT_04567139 & 1) == 0) {
                    /* try { // try from 033516fc to 03451703 has its CatchHandler @ 03351704 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033516e8 with catch @ 03351704
                       catch(type#2 @ 00000000) { ... } // from try @ 033516fc with catch @ 03351704
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>__ctor__);
                    /* try { // try from 03351710 to 034517ff has its CatchHandler @ 03351710
                       catch() { ... } // from try @ 03351710 with catch @ 03351710
                       catch() { ... } // from try @ 03351880 with catch @ 03351710
                       catch() { ... } // from try @ 033518b8 with catch @ 03351710
                       catch() { ... } // from try @ 033518e0 with catch @ 03351710
                       catch() { ... } // from try @ 03351914 with catch @ 03351710 */
    FUN_01bab630(&System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_TypeInfo);
    FUN_01bab630(&KFHIPIPCOHK_TypeInfo);
    DAT_04567139 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<Type,_HIMHPFNABJN>__ctor__);
  (__this->fields).NOPAPOLFKLJ =
       (System_Collections_Generic_Dictionary_Type__HIMHPFNABJN__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (KFHIPIPCOHK_o *)thunk_FUN_01bda818(KFHIPIPCOHK_TypeInfo);
  KFHIPIPCOHK___ctor(__this_01,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).FFOLFLCMFCH;
  *ppHVar1 = (HIMHPFNABJN_o *)__this_01;
  thunk_FUN_01c20e04(ppHVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

