// CNDPAJOLKFN$$JHADMABLOMI @ RVA 0x307BAF0

float CNDPAJOLKFN__JHADMABLOMI
                (CNDPAJOLKFN_o *BJCLOGCDNEG,CNDPAJOLKFN_o *JDFOLIMEDCJ,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((BJCLOGCDNEG != (CNDPAJOLKFN_o *)0x0) && (JDFOLIMEDCJ != (CNDPAJOLKFN_o *)0x0)) {
    uVar1 = *(undefined8 *)&(BJCLOGCDNEG->fields).super.JOLEIODMLFL;
    uVar2 = *(undefined8 *)&(JDFOLIMEDCJ->fields).super.JOLEIODMLFL;
    return (BJCLOGCDNEG->fields).super.OHHDBINAJCB * (JDFOLIMEDCJ->fields).super.OHHDBINAJCB +
           (float)uVar1 * (float)uVar2 +
           (float)((ulong)uVar1 >> 0x20) * (float)((ulong)uVar2 >> 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

