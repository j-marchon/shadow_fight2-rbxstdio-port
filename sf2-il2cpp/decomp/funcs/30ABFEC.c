// PPJGIFEJMHP$$HKBJKGJHLNJ @ RVA 0x30ABFEC

void PPJGIFEJMHP__HKBJKGJHLNJ(PPJGIFEJMHP_o *__this,System_Action_o *KCPFFLHCCIN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *pSVar2;
  Il2CppObject *pIVar3;
  System_Action_o *extraout_x1;
  System_Action_o *extraout_x1_00;
  System_Action_o *extraout_x1_01;
  System_Action_o *method_00;
  int index;
  
  method_00 = KCPFFLHCCIN;
  if ((DAT_045661a8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
    DAT_045661a8 = 1;
    method_00 = extraout_x1;
  }
  pSVar2 = (__this->fields).JGMOJNCMKAG;
  if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        PPJGIFEJMHP__GILDFJMBFIA(__this,(MethodInfo *)method_00);
        return;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__
                         );
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_Delegate__op_Equality
                        (pIVar3[1].monitor,(System_Delegate_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
      if (bVar1) {
        pSVar2 = (__this->fields).JGMOJNCMKAG;
        if (pSVar2 == (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) break;
        System_Collections_Generic_List<object>__set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,(Il2CppObject *)0x0,
                   Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
        method_00 = extraout_x1_01;
      }
      pSVar2 = (__this->fields).JGMOJNCMKAG;
      index = index + 1;
                    /* try { // try from 031ac0a4 to 032ac27b has its CatchHandler @ 031ac0a4
                       catch() { ... } // from try @ 031ac0a4 with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac518 with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac520 with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac5ac with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac65c with catch @ 031ac0a4 */
    } while (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

