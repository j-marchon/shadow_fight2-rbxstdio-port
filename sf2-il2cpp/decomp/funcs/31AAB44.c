// FNGHHNDKDJB$$PGPBJFKFGPD @ RVA 0x31AAB44

void FNGHHNDKDJB__PGPBJFKFGPD
               (FNGHHNDKDJB_o *__this,
               System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *GDKJAFIDNGF,
               MethodInfo *method)

{
  bool bVar1;
  FNGHHNDKDJB_GPIPBKLFMOI_o *pFVar2;
  int index;
  
  if ((DAT_04566b31 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_AELBAPFOKHK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<FNGHHNDKDJB_GPIPBKLFMOI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Count__);
                    /* try { // try from 032aab84 to 033aab87 has its CatchHandler @ 032aafb0 */
                    /* try { // try from 032aab88 to 033aabaf has its CatchHandler @ 032aafa8 */
    __this = (FNGHHNDKDJB_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                         );
    DAT_04566b31 = 1;
  }
  if (GDKJAFIDNGF != (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0) {
    if (0 < (GDKJAFIDNGF->fields)._size + -1) {
      index = 0;
      do {
        method = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__;
                    /* try { // try from 032aabbc to 033aabdf has its CatchHandler @ 032aaf8c */
        pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                           );
        __this = (FNGHHNDKDJB_o *)0x0;
        if (pFVar2 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) goto LAB_032aac30;
        FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,false,method);
        index = index + 1;
      } while (index < (GDKJAFIDNGF->fields)._size + -1);
    }
                    /* try { // try from 032aabe8 to 033aabf7 has its CatchHandler @ 032aaf50 */
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)GDKJAFIDNGF,
                       Method_DJNBJHPDKDP_OBECCOPBADO<FNGHHNDKDJB_GPIPBKLFMOI>__);
    if (bVar1) {
      return;
    }
                    /* try { // try from 032aac14 to 033aac17 has its CatchHandler @ 032aaf48 */
                    /* try { // try from 032aac18 to 033aac27 has its CatchHandler @ 032aaf80 */
    pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
             DJNBJHPDKDP__AELBAPFOKHK<object>
                       ((System_Collections_Generic_List_T__o *)GDKJAFIDNGF,
                        Method_DJNBJHPDKDP_AELBAPFOKHK<FNGHHNDKDJB_GPIPBKLFMOI>__);
    __this = (FNGHHNDKDJB_o *)0x0;
    if (pFVar2 != (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) {
                    /* try { // try from 032aac28 to 033aac33 has its CatchHandler @ 032aaf40 */
      FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,true,method);
      return;
    }
  }
LAB_032aac30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

