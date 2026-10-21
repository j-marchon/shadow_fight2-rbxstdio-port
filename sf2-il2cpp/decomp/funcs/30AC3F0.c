// PPJGIFEJMHP$$KEGLPIKPCOJ @ RVA 0x30AC3F0

void PPJGIFEJMHP__KEGLPIKPCOJ(PPJGIFEJMHP_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *pSVar1;
  Il2CppObject *pIVar2;
  LHOMEBJDFLD_o *__this_00;
  PGICCMFLDPI_o *pPVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  void *pvVar4;
  int index;
  
                    /* try { // try from 031ac3f0 to 032ac3ff has its CatchHandler @ 031ac528 */
  method_00 = (MethodInfo *)(ulong)IBEBJHMKFGE;
  if ((DAT_045661ac & 1) == 0) {
                    /* try { // try from 031ac410 to 032ac41b has its CatchHandler @ 031ac524 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
    DAT_045661ac = 1;
    method_00 = extraout_x1;
  }
  pSVar1 = (__this->fields).JGMOJNCMKAG;
  (__this->fields).JMILCMNCCOM = true;
  if (pSVar1 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
                    /* try { // try from 031ac454 to 032ac457 has its CatchHandler @ 031ac554 */
                    /* try { // try from 031ac458 to 032ac46b has its CatchHandler @ 031ac568 */
    index = 0;
    do {
      if ((pSVar1->fields)._size <= index) {
        (__this->fields).JMILCMNCCOM = false;
                    /* try { // try from 031ac50c to 032ac513 has its CatchHandler @ 031ac57c */
        PPJGIFEJMHP__GILDFJMBFIA(__this,method_00);
        return;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__
                         );
      method_00 = extraout_x1_00;
      if (pIVar2 != (Il2CppObject *)0x0) {
        __this_00 = (__this->fields).KLBBHFPOLKF;
                    /* try { // try from 031ac488 to 032ac48b has its CatchHandler @ 031ac538 */
                    /* try { // try from 031ac48c to 032ac4a3 has its CatchHandler @ 031ac550 */
        if ((__this_00 == (LHOMEBJDFLD_o *)0x0) ||
           (pPVar3 = LHOMEBJDFLD__CFGBGFEIMEK(__this_00,(MethodInfo *)0x0),
           pPVar3 == (PGICCMFLDPI_o *)0x0)) break;
        method_00 = extraout_x1_01;
        if ((long)pIVar2[1].klass <= (pPVar3->fields).GDKPGIBMFPA) {
                    /* try { // try from 031ac4a8 to 032ac4af has its CatchHandler @ 031ac548 */
          pvVar4 = pIVar2[1].monitor;
          if (pvVar4 != (void *)0x0) {
            if (pvVar4 == (void *)0x0) break;
            (**(code **)((long)pvVar4 + 0x18))
                      (*(undefined8 *)((long)pvVar4 + 0x40),*(undefined8 *)((long)pvVar4 + 0x28));
          }
                    /* try { // try from 031ac4cc to 032ac4d3 has its CatchHandler @ 031ac534 */
          pSVar1 = (__this->fields).JGMOJNCMKAG;
          if (pSVar1 == (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) break;
                    /* try { // try from 031ac4d4 to 032ac4e7 has its CatchHandler @ 031ac544 */
          System_Collections_Generic_List<object>__set_Item
                    ((System_Collections_Generic_List_object__o *)pSVar1,index,(Il2CppObject *)0x0,
                     Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
          method_00 = extraout_x1_02;
        }
      }
      pSVar1 = (__this->fields).JGMOJNCMKAG;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

