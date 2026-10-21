// GDMHNGKMPDJ$$DGCODECJJCC @ RVA 0x35BFFC8

bool GDMHNGKMPDJ__DGCODECJJCC(GDMHNGKMPDJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  OLKKAIFGGAK_o *pOVar5;
  OPNFCOGALLI_o *__this_00;
  OLKKAIFGGAK_o **ppOVar6;
  
  ppOVar6 = &(__this->fields).AHGEJFDEJIF;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bff98 with catch @ 036bffc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bfeb8 with catch @ 036bffcc
                        */
  if (*ppOVar6 == (OLKKAIFGGAK_o *)0x0) {
    pOVar5 = (__this->fields).super.HMMEFNNMBJK;
                    /* try { // try from 036bffe4 to 037bffe7 has its CatchHandler @ 036c0008 */
    if (pOVar5 == (OLKKAIFGGAK_o *)0x0) goto LAB_036c0084;
                    /* try { // try from 036bffe8 to 037c000f has its CatchHandler @ 036bfd88 */
    pOVar5 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar5,(__this->fields).AOIGHJKIBAA,(MethodInfo *)0x0);
    (__this->fields).AHGEJFDEJIF = pOVar5;
    thunk_FUN_01c20e04(ppOVar6,pOVar5);
                    /* catch() { ... } // from try @ 036bffe4 with catch @ 036c0008 */
    if ((__this->fields).AHGEJFDEJIF == (OLKKAIFGGAK_o *)0x0) {
      return false;
    }
  }
                    /* try { // try from 036c0010 to 037c0017 has its CatchHandler @ 036c002c */
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).EGBBJDLHOMJ.fields,(MethodInfo *)0x0);
                    /* try { // try from 036c0018 to 037c0023 has its CatchHandler @ 036bfd88 */
  if (iVar2 < 1) {
    bVar1 = true;
  }
  else {
                    /* try { // try from 036c0024 to 037c002b has its CatchHandler @ 036c002c */
    if (*ppOVar6 == (OLKKAIFGGAK_o *)0x0) {
LAB_036c0084:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = ((*ppOVar6)->fields).OAKOFJJIOFF;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c0010 with catch @ 036c002c
                       catch(type#2 @ 00000000) { ... } // from try @ 036c0024 with catch @ 036c002c
                        */
    bVar1 = false;
    if (__this_00 != (OPNFCOGALLI_o *)0x0) {
      iVar2 = (__this->fields).super.GCOAKFIEAAL;
      iVar3 = OPNFCOGALLI__MKIHMHHJLHE(__this_00,(MethodInfo *)0x0);
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).EGBBJDLHOMJ.fields,(MethodInfo *)0x0);
      bVar1 = EAAHMDAMHNI__OKACBKHDEIO(iVar2,(float)iVar3,(float)iVar4,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return bVar1;
}

