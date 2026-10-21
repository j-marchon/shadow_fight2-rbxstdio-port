// AEGOLGIJEBI$$NAIFCOFJMGJ @ RVA 0x3303430

KAMNHNFJCBK_o *
AEGOLGIJEBI__NAIFCOFJMGJ
          (System_String_o *JGHIJMJNJLE,int32_t KKPIFOLDKKO,int32_t JMALLKGIFMD,bool CIODOCCNHKM,
          System_String_o *LFAOEBDPFNF,bool LKDMINDLJJK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint16_t c;
  KAMNHNFJCBK_o *pKVar3;
  uint uVar4;
  
  if ((DAT_04567735 & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    DAT_04567735 = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(JGHIJMJNJLE,(MethodInfo *)0x0);
  pKVar3 = (KAMNHNFJCBK_o *)0x0;
  if ((-1 < KKPIFOLDKKO) && (!bVar2)) {
    if (JGHIJMJNJLE == (System_String_o *)0x0) {
LAB_0340359c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pKVar3 = (KAMNHNFJCBK_o *)0x0;
    if ((KKPIFOLDKKO <= JMALLKGIFMD) &&
       (iVar1 = (JGHIJMJNJLE->fields)._stringLength, KKPIFOLDKKO < iVar1)) {
      uVar4 = iVar1 - 1;
      if ((int)uVar4 <= JMALLKGIFMD) {
        JMALLKGIFMD = uVar4;
      }
      uVar4 = 0xffffffff;
      for (; KKPIFOLDKKO <= JMALLKGIFMD; KKPIFOLDKKO = KKPIFOLDKKO + 1) {
        c = System_String__get_Chars(JGHIJMJNJLE,KKPIFOLDKKO,(MethodInfo *)0x0);
        if (CIODOCCNHKM) {
          if ((char_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = System_Char__IsWhiteSpace(c,(MethodInfo *)0x0);
          if (!bVar2) goto LAB_0340350c;
LAB_03403524:
                    /* try { // try from 03403524 to 03503653 has its CatchHandler @ 03403524
                       catch() { ... } // from try @ 03403524 with catch @ 03403524
                       catch() { ... } // from try @ 03403704 with catch @ 03403524
                       catch() { ... } // from try @ 0340373c with catch @ 03403524
                       catch() { ... } // from try @ 03403778 with catch @ 03403524
                       catch() { ... } // from try @ 034037a8 with catch @ 03403524 */
          if (-1 < (int)uVar4) {
            JMALLKGIFMD = KKPIFOLDKKO - (~(uint)LKDMINDLJJK & 1);
            break;
          }
        }
        else {
LAB_0340350c:
          if (LFAOEBDPFNF == (System_String_o *)0x0) goto LAB_0340359c;
          bVar2 = System_String__Contains(LFAOEBDPFNF,c,(MethodInfo *)0x0);
          if (bVar2) goto LAB_03403524;
          if ((int)uVar4 < 0) {
            uVar4 = KKPIFOLDKKO;
          }
        }
      }
      pKVar3 = (KAMNHNFJCBK_o *)0x0;
      if (((int)uVar4 <= JMALLKGIFMD) && (-1 < (int)(uVar4 | JMALLKGIFMD))) {
        pKVar3 = KAMNHNFJCBK__GPOJOHOCLNO(uVar4,JMALLKGIFMD,0,(MethodInfo *)0x0);
        if (pKVar3 == (KAMNHNFJCBK_o *)0x0) goto LAB_0340359c;
        (pKVar3->fields).BGHFADDGPAD = 1;
      }
    }
  }
  return pKVar3;
}

