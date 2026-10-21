// FCJBEKHDLAF$$MEPAMBMALBD @ RVA 0x33F4550

void FCJBEKHDLAF__MEPAMBMALBD(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  int32_t CJNHFNHJHPE;
  int32_t iVar2;
  MMDDDDFHOLG_o *__this_00;
  MethodInfo *in_x3;
  IBCHOCDIMIP_o *pIVar3;
  long lVar4;
  Nekki_SF2_GUI_Fight_ViewerFight_o *__this_01;
  OJHODFIGFMA_o *__this_02;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar5;
  
                    /* try { // try from 034f4560 to 035f4567 has its CatchHandler @ 034f4a38 */
                    /* try { // try from 034f4568 to 035f456f has its CatchHandler @ 034f4a30 */
  if ((DAT_04567f40 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034f4580 to 035f458b has its CatchHandler @ 034f49a8 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6324);
    DAT_04567f40 = 1;
  }
                    /* try { // try from 034f45ac to 035f45b3 has its CatchHandler @ 034f491c */
  if ((BCKBBGCOMJD != (__this->fields).LAMENNMGPBN) && (BCKBBGCOMJD != (__this->fields).CLEKIBBCAOJ)
     ) {
                    /* try { // try from 034f45b4 to 035f45bb has its CatchHandler @ 034f4988 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034f45e0 to 035f45e7 has its CatchHandler @ 034f4980 */
    UnityEngine_Debug__LogError(StringLiteral_6324,(MethodInfo *)0x0);
    return;
  }
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    CJNHFNHJHPE = OLKKAIFGGAK__BHIHCKDOJKB(BCKBBGCOMJD,(MethodInfo *)0x0);
    bVar1 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
    pIVar3 = (__this->fields).JOOGNNJOONJ;
    if (pIVar3 != (IBCHOCDIMIP_o *)0x0) {
      lVar4 = 0x10;
      if (!bVar1) {
        lVar4 = 0x18;
      }
      lVar4 = *(long *)((long)&pIVar3->klass + lVar4);
      if (lVar4 != 0) {
                    /* try { // try from 034f4634 to 035f463b has its CatchHandler @ 034f4970 */
        *(int32_t *)(lVar4 + 0x20) = CJNHFNHJHPE;
        bVar1 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
        iVar2 = 1;
        if (!bVar1) {
          iVar2 = 2;
        }
        FCJBEKHDLAF__CPPKPCGDCAJ(__this,0xb,iVar2,in_x3);
                    /* try { // try from 034f4658 to 035f465b has its CatchHandler @ 034f4930 */
        bVar1 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
        if (bVar1) {
          __this_02 = (__this->fields).OONKKFFEMAK;
          iVar2 = OLKKAIFGGAK__KEIGLHIGINN(BCKBBGCOMJD,(MethodInfo *)0x0);
          if (__this_02 == (OJHODFIGFMA_o *)0x0) goto LAB_034f472c;
                    /* try { // try from 034f467c to 035f467f has its CatchHandler @ 034f492c */
          OJHODFIGFMA__DAGBOCOBHMK(__this_02,iVar2,(MethodInfo *)0x0);
        }
        __this_00 = (__this->fields).POEGCOJFMDB;
        if (__this_00 != (MMDDDDFHOLG_o *)0x0) {
                    /* try { // try from 034f469c to 035f469f has its CatchHandler @ 034f4950 */
          MMDDDDFHOLG__CFEOMJALMBB
                    (__this_00,BCKBBGCOMJD,4,false,(NJPBBPOABKP_o *)0x0,(MethodInfo *)0x0);
          iVar2 = (BCKBBGCOMJD->fields).HHOCPIIIIDK;
          pNVar5 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034f46c0 to 035f46c3 has its CatchHandler @ 034f4960 */
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034f46c4 to 035f46cf has its CatchHandler @ 034f4940 */
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 034f46d4 to 035f46fb has its CatchHandler @ 034f498c */
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (!bVar1) {
                    /* try { // try from 034f471c to 035f471f has its CatchHandler @ 034f496c */
                    /* try { // try from 034f4720 to 035f472b has its CatchHandler @ 034f4968 */
            return;
          }
          pNVar5 = (__this->fields).HIBPKNAIPLH;
          if (pNVar5 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
            __this_01 = (pNVar5->fields).FLKPJPEAJAJ;
            bVar1 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
            if (__this_01 != (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0) {
              Nekki_SF2_GUI_Fight_ViewerFight__UpdateCombo
                        (__this_01,bVar1,CJNHFNHJHPE,iVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_034f472c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

