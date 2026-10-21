// LJNJDFEAIOH$$OAPADFFJJCH @ RVA 0x3038CC4

void LJNJDFEAIOH__OAPADFFJJCH(LJNJDFEAIOH_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  bool bVar1;
  NODLJPNGNBG_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  GCIFMNHADDF_o *__this_01;
  UnityEngine_Object_o *x;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  
  if ((DAT_04565d7a & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d7a = 1;
  }
  bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IIPPMAOIKHB,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
      (pNVar2 = CHDGOFBHAFI__AFHLHFMLNEO
                          ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                           (IIPPMAOIKHB->fields).MPAIPMANDEO,(MethodInfo *)0x0),
      pNVar2 != (NODLJPNGNBG_o *)0x0)) &&
     (__this_00 = (__this->fields).PDEAGAFHDFI,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)) {
                    /* try { // try from 03138d40 to 03238d4f has its CatchHandler @ 03138d7c */
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetRaidEndedState
              (__this_00,(pNVar2->fields).PMMFPJJOPKE != (ICBMOMGINFH_o *)0x0,(MethodInfo *)0x0);
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
                    /* try { // try from 03138d50 to 03238d93 has its CatchHandler @ 03138c34 */
      x = (UnityEngine_Object_o *)
          GCIFMNHADDF__BFJGHKKGOJC<object>
                    (__this_01,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03138d40 with catch @ 03138d7c
                        */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
                    /* try { // try from 03138d94 to 03238dab has its CatchHandler @ 03138de8 */
      if (x != (UnityEngine_Object_o *)0x0) {
        pUVar4 = x->klass;
        uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
        uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
                    /* try { // try from 03138dac to 03238dd7 has its CatchHandler @ 03138c34 */
                    /* WARNING: Could not recover jumptable at 0x03138db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)&pUVar4[1]._2.element_size)(x,uVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

