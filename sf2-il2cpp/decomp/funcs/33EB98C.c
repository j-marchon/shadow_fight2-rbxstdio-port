// FCJBEKHDLAF$$CPMDMPIDKMJ @ RVA 0x33EB98C

void FCJBEKHDLAF__CPMDMPIDKMJ
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_OGCKCABMHLC_o *OADIPDDBIDH,int32_t HEHMPFLAEGE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  IBCHOCDIMIP_o *pIVar5;
  IBCHOCDIMIP_Fields *pIVar6;
  JMIFGHKOLCL_o *pJVar7;
  IBCHOCDIMIP_Fields *pIVar8;
  JMIFGHKOLCL_o *pJVar9;
  float fVar10;
  int32_t local_24;
  
                    /* catch() { ... } // from try @ 034eb918 with catch @ 034eb998
                       try { // try from 034eb998 to 035eb9c3 has its CatchHandler @ 034eb744 */
                    /* catch() { ... } // from try @ 034eb868 with catch @ 034eb9a8
                       catch() { ... } // from try @ 034eb8d8 with catch @ 034eb9a8 */
  if ((DAT_04567eea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 034eb9c4 to 035eb9db has its CatchHandler @ 034eba0c */
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 034eb9dc to 035eb9fb has its CatchHandler @ 034eb744 */
    FUN_01bab630(&StringLiteral_6329);
    DAT_04567eea = 1;
  }
  if (HEHMPFLAEGE == 2) {
                    /* catch() { ... } // from try @ 034eb9c4 with catch @ 034eba0c
                       catch() { ... } // from try @ 034eb9fc with catch @ 034eba0c */
    pIVar5 = (__this->fields).JOOGNNJOONJ;
                    /* try { // try from 034eba10 to 035eba13 has its CatchHandler @ 034eba1c */
    if (pIVar5 == (IBCHOCDIMIP_o *)0x0) goto LAB_034ebb18;
                    /* try { // try from 034eba14 to 035eba1f has its CatchHandler @ 034eb744 */
    pIVar8 = (IBCHOCDIMIP_Fields *)&(pIVar5->fields).AKNFNACBAHE;
    pIVar6 = &pIVar5->fields;
  }
  else {
    if (HEHMPFLAEGE != 1) {
                    /* try { // try from 034eba70 to 035eba7b has its CatchHandler @ 034eba90 */
                    /* try { // try from 034eba7c to 035ebaa7 has its CatchHandler @ 034eba40 */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034eba64 with catch @ 034eba88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034eba54 with catch @ 034eba8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034eba70 with catch @ 034eba90
                        */
      local_24 = HEHMPFLAEGE;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
      if (args != (System_Object_array *)0x0) {
                    /* try { // try from 034ebaa8 to 035ebabf has its CatchHandler @ 034ebaf0 */
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
                    /* try { // try from 034ebac0 to 035ebadf has its CatchHandler @ 034eba40 */
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items,pIVar2);
                    /* try { // try from 034ebae0 to 035ebaef has its CatchHandler @ 034ebaf0 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 034ebaa8 with catch @ 034ebaf0
                       catch() { ... } // from try @ 034ebae0 with catch @ 034ebaf0 */
                    /* try { // try from 034ebaf4 to 035ebaf7 has its CatchHandler @ 034ebb00 */
                    /* try { // try from 034ebaf8 to 035ebb03 has its CatchHandler @ 034eba40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034ebaf4 with catch @ 034ebb00
                        */
          UnityEngine_Debug__LogErrorFormat(StringLiteral_6329,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_034ebb18;
    }
    pIVar5 = (__this->fields).JOOGNNJOONJ;
                    /* try { // try from 034eb9fc to 035eba0b has its CatchHandler @ 034eba0c */
    if (pIVar5 == (IBCHOCDIMIP_o *)0x0) goto LAB_034ebb18;
    pIVar8 = &pIVar5->fields;
    pIVar6 = (IBCHOCDIMIP_Fields *)&(pIVar5->fields).AKNFNACBAHE;
  }
                    /* catch() { ... } // from try @ 034eb964 with catch @ 034eba1c
                       catch() { ... } // from try @ 034eba10 with catch @ 034eba1c */
  if ((OADIPDDBIDH != (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) &&
     (pJVar9 = pIVar8->OMJKJPDFDBF, pJVar9 != (JMIFGHKOLCL_o *)0x0)) {
    fVar10 = (OADIPDDBIDH->fields).CEMEJDHDPLL;
    pJVar7 = pIVar6->OMJKJPDFDBF;
    (pJVar9->fields).KACLKDEIAAK = 0.0;
    (pJVar9->fields).IPPFDLAJFJG = fVar10;
    (pJVar9->fields).OOAJMHEECGF = true;
                    /* catch() { ... } // from try @ 034eba7c with catch @ 034eba40
                       catch() { ... } // from try @ 034ebac0 with catch @ 034eba40
                       catch() { ... } // from try @ 034ebaf8 with catch @ 034eba40 */
    bVar1 = (OADIPDDBIDH->fields).BBFPCBEFOLN;
    (pJVar9->fields).LDNBDFNLCOK = bVar1;
    (pJVar9->fields).DMAAHCDPHDI = (OADIPDDBIDH->fields).EPPIJIGMFFJ;
                    /* try { // try from 034eba54 to 035eba5f has its CatchHandler @ 034eba8c */
    (pJVar9->fields).OKPIHCKHLAD = (OADIPDDBIDH->fields).FPKMILDKMHH;
    if (pJVar7 != (JMIFGHKOLCL_o *)0x0) {
      (pJVar7->fields).KACLKDEIAAK = fVar10;
      (pJVar7->fields).IPPFDLAJFJG = 0.0;
                    /* try { // try from 034eba64 to 035eba6f has its CatchHandler @ 034eba88 */
      (pJVar7->fields).OOAJMHEECGF = false;
      (pJVar7->fields).LDNBDFNLCOK = bVar1;
      return;
    }
  }
LAB_034ebb18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

