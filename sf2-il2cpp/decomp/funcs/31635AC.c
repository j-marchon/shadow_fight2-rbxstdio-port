// MCEIBCKPIAD$$OPMMMKCAADB @ RVA 0x31635AC

void MCEIBCKPIAD__OPMMMKCAADB(MCEIBCKPIAD_o *__this,KKLFGJCMPDA_o *IMNBAFCEDMA,MethodInfo *method)

{
  System_Collections_Generic_List_KKLFGJCMPDA__o *__this_00;
  System_Action_FAIJGJCCKJC__o *pSVar1;
  
  if ((DAT_04566896 & 1) == 0) {
                    /* try { // try from 032635c8 to 033635cf has its CatchHandler @ 032635e8 */
                    /* try { // try from 032635d0 to 033635df has its CatchHandler @ 032635ec */
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
                    /* try { // try from 032635e0 to 0336360b has its CatchHandler @ 0326342c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326357c with catch @ 032635e4
                        */
    DAT_04566896 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032635c8 with catch @ 032635e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032635d0 with catch @ 032635ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03263520 with catch @ 032635f0
                        */
  if ((IMNBAFCEDMA != (KKLFGJCMPDA_o *)0x0) &&
     (pSVar1 = (__this->fields).BKKILNPNELM, pSVar1 != (System_Action_FAIJGJCCKJC__o *)0x0)) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(IMNBAFCEDMA->fields).EAAEJJKFKEG,
               (pSVar1->fields).super.super.method);
    __this_00 = (__this->fields).FEOGLGJBJDE;
                    /* try { // try from 0326360c to 0336360f has its CatchHandler @ 03263630 */
    if (__this_00 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* try { // try from 03263610 to 03363637 has its CatchHandler @ 0326342c */
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IMNBAFCEDMA,
                 Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
                    /* catch() { ... } // from try @ 0326360c with catch @ 03263630 */
                    /* try { // try from 03263638 to 0336363f has its CatchHandler @ 03263654 */
                    /* try { // try from 03263640 to 0336364b has its CatchHandler @ 0326342c */
      DJNBJHPDKDP__OFNFOGHFDML<object>
                ((System_Collections_Generic_List_T__o *)(__this->fields).HOIHAFALJIG,
                 (Il2CppObject *)IMNBAFCEDMA,Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

