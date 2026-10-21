// FCJBEKHDLAF.AONMAECAFAD$$MoveNext @ RVA 0x33F493C

bool FCJBEKHDLAF_AONMAECAFAD__MoveNext(FCJBEKHDLAF_AONMAECAFAD_o *__this,MethodInfo *method)

{
  int iVar1;
  MNLIBPAOCLG_o *pMVar2;
  BEPJMNAHCAD_o *pBVar3;
  int iVar4;
  Il2CppObject **ppIVar5;
  FCJBEKHDLAF_o *pFVar6;
  float BCEJOJECHDA;
  
                    /* catch() { ... } // from try @ 034f4898 with catch @ 034f493c */
                    /* catch() { ... } // from try @ 034f46c4 with catch @ 034f4940 */
                    /* catch() { ... } // from try @ 034f4890 with catch @ 034f4944 */
  iVar4 = (__this->fields).__1__state;
                    /* catch() { ... } // from try @ 034f4778 with catch @ 034f4948 */
  pFVar6 = (__this->fields).__4__this;
                    /* catch() { ... } // from try @ 034f47a4 with catch @ 034f494c */
                    /* catch() { ... } // from try @ 034f469c with catch @ 034f4950 */
                    /* catch() { ... } // from try @ 034f4888 with catch @ 034f4954 */
  if (iVar4 == 1) {
                    /* catch() { ... } // from try @ 034f4868 with catch @ 034f49c8 */
                    /* catch() { ... } // from try @ 034f4864 with catch @ 034f49cc */
    iVar1 = (__this->fields).frames;
                    /* catch() { ... } // from try @ 034f441c with catch @ 034f49d0 */
                    /* catch() { ... } // from try @ 034f4860 with catch @ 034f49d4 */
    (__this->fields).__1__state = -1;
                    /* catch() { ... } // from try @ 034f427c with catch @ 034f49d8 */
    iVar4 = (__this->fields)._i_5__4 + 1;
                    /* catch() { ... } // from try @ 034f485c with catch @ 034f49dc */
    (__this->fields)._i_5__4 = iVar4;
  }
  else {
                    /* catch() { ... } // from try @ 034f4884 with catch @ 034f4958 */
    if (iVar4 != 0) {
      return false;
    }
                    /* catch() { ... } // from try @ 034f477c with catch @ 034f495c */
                    /* catch() { ... } // from try @ 034f46c0 with catch @ 034f4960 */
    (__this->fields).__1__state = -1;
                    /* catch() { ... } // from try @ 034f4880 with catch @ 034f4964 */
                    /* catch() { ... } // from try @ 034f4720 with catch @ 034f4968 */
                    /* catch() { ... } // from try @ 034f471c with catch @ 034f496c */
                    /* catch() { ... } // from try @ 034f4634 with catch @ 034f4970 */
                    /* catch() { ... } // from try @ 034f42a8 with catch @ 034f4974 */
    if (((pFVar6 == (FCJBEKHDLAF_o *)0x0) ||
        (pBVar3 = (pFVar6->fields).FAJCMHDLBEJ, pBVar3 == (BEPJMNAHCAD_o *)0x0)) ||
       (pMVar2 = (pBVar3->fields).LIICCFBEOLC, pMVar2 == (MNLIBPAOCLG_o *)0x0)) goto LAB_034f4a5c;
                    /* catch() { ... } // from try @ 034f4788 with catch @ 034f4978 */
                    /* catch() { ... } // from try @ 034f4448 with catch @ 034f497c */
                    /* catch() { ... } // from try @ 034f45e0 with catch @ 034f4980 */
                    /* catch() { ... } // from try @ 034f487c with catch @ 034f4984 */
    MNLIBPAOCLG__KCHJHDCDKGB
              (pMVar2,(UnityEngine_Color_o)(__this->fields).color.fields,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034f45b4 with catch @ 034f4988 */
    iVar1 = (__this->fields).frames;
                    /* catch() { ... } // from try @ 034f46d4 with catch @ 034f498c */
    if (iVar1 == 0) {
      pBVar3 = (pFVar6->fields).FAJCMHDLBEJ;
                    /* catch() { ... } // from try @ 034f4568 with catch @ 034f4a30 */
                    /* catch() { ... } // from try @ 034f4854 with catch @ 034f4a34 */
                    /* catch() { ... } // from try @ 034f4560 with catch @ 034f4a38 */
      if ((pBVar3 != (BEPJMNAHCAD_o *)0x0) &&
         (pMVar2 = (pBVar3->fields).LIICCFBEOLC, pMVar2 != (MNLIBPAOCLG_o *)0x0)) {
                    /* catch() { ... } // from try @ 034f4538 with catch @ 034f4a3c */
        MNLIBPAOCLG__GHCGOFHFBGO(pMVar2,255.0,(MethodInfo *)0x0);
        return false;
      }
      goto LAB_034f4a5c;
    }
                    /* catch() { ... } // from try @ 034f47b4 with catch @ 034f4990 */
                    /* catch() { ... } // from try @ 034f4730 with catch @ 034f4994 */
                    /* catch() { ... } // from try @ 034f488c with catch @ 034f4998
                       catch() { ... } // from try @ 034f4894 with catch @ 034f4998 */
                    /* catch() { ... } // from try @ 034f42b4 with catch @ 034f499c */
                    /* catch() { ... } // from try @ 034f47dc with catch @ 034f49a0 */
                    /* catch() { ... } // from try @ 034f4878 with catch @ 034f49a4 */
    (__this->fields)._step_5__2 = 255.0 / (float)iVar1;
                    /* catch() { ... } // from try @ 034f4580 with catch @ 034f49a8 */
    (__this->fields)._opacity_5__3 = 0.0;
                    /* catch() { ... } // from try @ 034f4874 with catch @ 034f49ac */
    if ((__this->fields).show == false) {
                    /* catch() { ... } // from try @ 034f4870 with catch @ 034f49b0 */
                    /* catch() { ... } // from try @ 034f486c with catch @ 034f49b4 */
      (__this->fields)._step_5__2 = -(255.0 / (float)iVar1);
                    /* catch() { ... } // from try @ 034f4318 with catch @ 034f49b8 */
      (__this->fields)._opacity_5__3 = 255.0;
    }
                    /* catch() { ... } // from try @ 034f42ec with catch @ 034f49bc */
    iVar4 = 0;
                    /* catch() { ... } // from try @ 034f4450 with catch @ 034f49c0 */
    (__this->fields)._i_5__4 = 0;
                    /* catch() { ... } // from try @ 034f4478 with catch @ 034f49c4 */
  }
                    /* catch() { ... } // from try @ 034f4858 with catch @ 034f49e0 */
                    /* catch() { ... } // from try @ 034f4254 with catch @ 034f49e4 */
  if (iVar1 <= iVar4) {
                    /* try { // try from 034f4a54 to 035f4a57 has its CatchHandler @ 034f4a84 */
    return false;
  }
  BCEJOJECHDA = (__this->fields)._opacity_5__3 + (__this->fields)._step_5__2;
  (__this->fields)._opacity_5__3 = BCEJOJECHDA;
                    /* try { // try from 034f49fc to 035f49ff has its CatchHandler @ 034f4a24 */
  if (((pFVar6 != (FCJBEKHDLAF_o *)0x0) &&
      (pBVar3 = (pFVar6->fields).FAJCMHDLBEJ, pBVar3 != (BEPJMNAHCAD_o *)0x0)) &&
     (pMVar2 = (pBVar3->fields).LIICCFBEOLC, pMVar2 != (MNLIBPAOCLG_o *)0x0)) {
    MNLIBPAOCLG__GHCGOFHFBGO(pMVar2,BCEJOJECHDA,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).__2__current;
                    /* try { // try from 034f4a10 to 035f4a23 has its CatchHandler @ 034f4bf8 */
    *ppIVar5 = (Il2CppObject *)0x0;
    thunk_FUN_01c20e04(ppIVar5,0);
                    /* catch() { ... } // from try @ 034f49fc with catch @ 034f4a24
                       try { // try from 034f4a24 to 035f4a53 has its CatchHandler @ 034f4064 */
    (__this->fields).__1__state = 1;
    return true;
  }
LAB_034f4a5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

