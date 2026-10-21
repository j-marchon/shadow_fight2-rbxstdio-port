// ECENNHNBAME.HJPFANEPGJF$$CLCPHDKKDPM @ RVA 0x3015CAC

void ECENNHNBAME_HJPFANEPGJF__CLCPHDKKDPM(ECENNHNBAME_HJPFANEPGJF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  Il2CppObject *pIVar1;
  int index;
  
  if ((DAT_04565c02 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    DAT_04565c02 = 1;
  }
  __this_00 = (__this->fields).GLFJDDHEMNO;
  if (__this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03115d24 with catch @ 03115d30
                        */
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
                    /* try { // try from 03115d10 to 03215d1f has its CatchHandler @ 03115d20 */
      if (pIVar1 == (Il2CppObject *)0x0) break;
      (*pIVar1->klass->vtable[6].methodPtr)(pIVar1,pIVar1->klass->vtable[6].method);
                    /* catch() { ... } // from try @ 03115c70 with catch @ 03115d20
                       catch() { ... } // from try @ 03115d10 with catch @ 03115d20 */
      __this_00 = (__this->fields).GLFJDDHEMNO;
                    /* try { // try from 03115d24 to 03215d27 has its CatchHandler @ 03115d30 */
      index = index + 1;
                    /* try { // try from 03115d28 to 03215d33 has its CatchHandler @ 03115a84 */
    } while (__this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

