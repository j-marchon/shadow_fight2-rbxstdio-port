// AFFHKININGD$$GMPJALMLLCG @ RVA 0x333FEC0

void AFFHKININGD__GMPJALMLLCG(AFFHKININGD_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
                    /* catch() { ... } // from try @ 0343fea8 with catch @ 0343fecc */
                    /* try { // try from 0343fed4 to 0353fedb has its CatchHandler @ 0343fef0 */
  if ((DAT_0456798c & 1) == 0) {
                    /* try { // try from 0343fedc to 0353fee7 has its CatchHandler @ 0343fc9c */
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Clear__);
                    /* try { // try from 0343fee8 to 0353feef has its CatchHandler @ 0343fef0 */
    DAT_0456798c = 1;
  }
  pSVar1 = (__this->fields).MECHOBPGHFJ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0343fed4 with catch @ 0343fef0
                       catch(type#2 @ 00000000) { ... } // from try @ 0343fee8 with catch @ 0343fef0
                        */
  if (pSVar1 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

