// FNGHHNDKDJB$$GOOCGBAMIOG @ RVA 0x31AA560

void FNGHHNDKDJB__GOOCGBAMIOG
               (FNGHHNDKDJB_o *__this,
               System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *GDKJAFIDNGF,
               MethodInfo *method)

{
  int32_t iVar1;
  FNGHHNDKDJB_GPIPBKLFMOI_o *pFVar2;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar3;
  int iVar4;
  uint index;
  uint uVar5;
  
  pMVar3 = (MethodInfo *)GDKJAFIDNGF;
  if ((DAT_04566b2f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__);
    DAT_04566b2f = 1;
    pMVar3 = extraout_x1;
  }
  iVar1 = FNGHHNDKDJB__EPJKPLIOAKN(GDKJAFIDNGF,pMVar3);
                    /* try { // try from 032aa5a4 to 033aa5af has its CatchHandler @ 032aaa0c */
  if (GDKJAFIDNGF != (System_Collections_Generic_List_FNGHHNDKDJB_GPIPBKLFMOI__o *)0x0) {
    iVar4 = (GDKJAFIDNGF->fields)._size;
                    /* try { // try from 032aa5b0 to 033aa5c3 has its CatchHandler @ 032aa15c */
                    /* catch() { ... } // from try @ 032aa558 with catch @ 032aa5b4 */
    uVar5 = iVar4 - iVar1;
    index = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    if (0 < (int)uVar5) {
                    /* try { // try from 032aa5c4 to 033aa5db has its CatchHandler @ 032ab0b4 */
      uVar5 = 0;
      do {
        pMVar3 = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__;
        pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,uVar5,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                           );
        if (pFVar2 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) goto LAB_032aa634;
        FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,false,pMVar3);
        uVar5 = uVar5 + 1;
      } while (index != uVar5);
                    /* try { // try from 032aa5f0 to 033aa5f3 has its CatchHandler @ 032ab07c */
      iVar4 = (GDKJAFIDNGF->fields)._size;
    }
    while( true ) {
      if (iVar4 <= (int)index) {
        return;
      }
      pMVar3 = Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__;
      pFVar2 = (FNGHHNDKDJB_GPIPBKLFMOI_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)GDKJAFIDNGF,index,
                          (MethodInfo_26E4ADC *)
                          Method_System_Collections_Generic_List<FNGHHNDKDJB_GPIPBKLFMOI>_get_Item__
                         );
      if (pFVar2 == (FNGHHNDKDJB_GPIPBKLFMOI_o *)0x0) break;
                    /* try { // try from 032aa60c to 033aa627 has its CatchHandler @ 032ab068 */
      FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE(pFVar2,true,pMVar3);
      iVar4 = (GDKJAFIDNGF->fields)._size;
      index = index + 1;
    }
  }
LAB_032aa634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

