// IPPEHAJADOO$$HMDJFLDLPMN @ RVA 0x31433C0

void IPPEHAJADOO__HMDJFLDLPMN(IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  OLKKAIFGGAK_o *pOVar3;
  IPPEHAJADOO_o *__this_00;
  MethodInfo *in_x3;
  int index;
  
                    /* try { // try from 032433c4 to 033433c7 has its CatchHandler @ 032433f0 */
                    /* try { // try from 032433c8 to 033433cb has its CatchHandler @ 032433ec */
                    /* try { // try from 032433cc to 033433cf has its CatchHandler @ 032433e4 */
                    /* try { // try from 032433d0 to 033433d3 has its CatchHandler @ 032433e0 */
                    /* catch() { ... } // from try @ 0324334c with catch @ 032433d4
                       try { // try from 032433d4 to 03343417 has its CatchHandler @ 032430a0 */
  if ((DAT_04566764 & 1) == 0) {
                    /* catch() { ... } // from try @ 032433d0 with catch @ 032433e0 */
                    /* catch() { ... } // from try @ 032433cc with catch @ 032433e4 */
                    /* catch() { ... } // from try @ 032431c4 with catch @ 032433e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
                    /* catch() { ... } // from try @ 032433c8 with catch @ 032433ec */
                    /* catch() { ... } // from try @ 032433c4 with catch @ 032433f0 */
                    /* catch() { ... } // from try @ 032431f8 with catch @ 032433f4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
                    /* catch() { ... } // from try @ 032432cc with catch @ 032433f8 */
                    /* catch() { ... } // from try @ 03243214 with catch @ 032433fc */
                    /* catch() { ... } // from try @ 032433bc with catch @ 03243400 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04566764 = 1;
  }
  pSVar2 = (__this->fields).MBPELMMKGMB;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* try { // try from 03243418 to 0334341b has its CatchHandler @ 03243444 */
    index = (pSVar2->fields)._size + -1;
                    /* try { // try from 0324341c to 03343453 has its CatchHandler @ 032430a0 */
    if (index < 0) {
      return;
    }
    do {
      pOVar3 = (OLKKAIFGGAK_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
      if (pOVar3 == BCKBBGCOMJD) {
                    /* catch() { ... } // from try @ 03243418 with catch @ 03243444 */
        pSVar2 = (__this->fields).MBPELMMKGMB;
        if (pSVar2 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) break;
                    /* try { // try from 03243454 to 0334345b has its CatchHandler @ 03243470 */
        bVar1 = System_Collections_Generic_List<object>__Remove
                          ((System_Collections_Generic_List_object__o *)pSVar2,
                           (Il2CppObject *)BCKBBGCOMJD,
                           Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
                    /* try { // try from 0324345c to 03343467 has its CatchHandler @ 032430a0 */
        IPPEHAJADOO__NLKNPPBOFAI
                  ((IPPEHAJADOO_o *)(ulong)bVar1,BCKBBGCOMJD,(__this->fields).KBOMJBFAKKA,in_x3);
                    /* try { // try from 03243468 to 0334346f has its CatchHandler @ 03243470 */
        IPPEHAJADOO__NLKNPPBOFAI(__this_00,BCKBBGCOMJD,(__this->fields).FNMHCOJPGMJ,in_x3);
      }
                    /* catch() { ... } // from try @ 032433a4 with catch @ 03243470
                       catch() { ... } // from try @ 03243454 with catch @ 03243470
                       catch() { ... } // from try @ 03243468 with catch @ 03243470 */
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar2 = (__this->fields).MBPELMMKGMB;
    } while (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

