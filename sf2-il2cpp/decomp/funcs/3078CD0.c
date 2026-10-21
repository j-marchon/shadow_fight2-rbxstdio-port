// CPNHNIKFGFB$$DIGPCFKCCBK @ RVA 0x3078CD0

void CPNHNIKFGFB__DIGPCFKCCBK
               (CPNHNIKFGFB_o *__this,int32_t CEOLOKFCKIG,System_Action_object__o *CPECAEHDDDB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Action_object__o *method_00;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_04565fc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Action<object>>_set_Item__);
    DAT_04565fc4 = 1;
  }
  bVar1 = CPNHNIKFGFB__KNNDANLJOEB(__this,CEOLOKFCKIG,(MethodInfo *)method_00);
  if (bVar1) {
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                        (pSVar2,CEOLOKFCKIG,
                         Method_System_Collections_Generic_Dictionary<int,_Action<object>>_ContainsKey__
                        );
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).JGMOJNCMKAG;
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        if (bVar1) {
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (pSVar2,CEOLOKFCKIG,(Il2CppObject *)CPECAEHDDDB,
                     Method_System_Collections_Generic_Dictionary<int,_Action<object>>_set_Item__);
        }
        else {
          System_Collections_Generic_Dictionary<int,_object>__Add
                    (pSVar2,CEOLOKFCKIG,(Il2CppObject *)CPECAEHDDDB,
                     Method_System_Collections_Generic_Dictionary<int,_Action<object>>_Add__);
        }
        CPNHNIKFGFB__BENGKDEEPGK(__this,CEOLOKFCKIG,(MethodInfo *)CPECAEHDDDB);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

