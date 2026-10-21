// PEEIMHCMDND$$ELHLAJNJAKD @ RVA 0x3424D8C

bool PEEIMHCMDND__ELHLAJNJAKD
               (PEEIMHCMDND_o *__this,int64_t JBFDEJOPCDC,System_Action_EOLFEKNCPLM__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  bool_conflict bVar1;
  KBLFOOJFIIG_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF_00;
  
  if ((DAT_045680fc & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    FUN_01bab630(&Method_PEEIMHCMDND_LHIJEFDKJPC__);
    FUN_01bab630(&StringLiteral_18644);
    DAT_045680fc = 1;
  }
  bVar1 = (__this->fields).CKBPCAHHDEN;
  if (bVar1 == false) {
    (__this->fields).CKBPCAHHDEN = true;
    __this_00 = (KBLFOOJFIIG_o *)thunk_FUN_01bda818(KBLFOOJFIIG_TypeInfo);
    KBLFOOJFIIG___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (KBLFOOJFIIG_o *)0x0) {
      (__this_00->fields).GDKPGIBMFPA = JBFDEJOPCDC;
      __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF_00 =
           (System_Action_KEFHDOHHHML__o *)thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_01,StringLiteral_18644,
                   (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF_00,0.0,
                   (Il2CppObject *)BLMFLPJJMPF,(MethodInfo *)0x0);
        goto LAB_03524e88;
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03524ea4 to 03624f47 has its CatchHandler @ 03524ea4
                       catch() { ... } // from try @ 03524ea4 with catch @ 03524ea4
                       catch() { ... } // from try @ 03524f70 with catch @ 03524ea4
                       catch() { ... } // from try @ 03524fbc with catch @ 03524ea4
                       catch() { ... } // from try @ 03524ffc with catch @ 03524ea4 */
    FUN_01bab8c8();
  }
LAB_03524e88:
  return bVar1 == false;
}

