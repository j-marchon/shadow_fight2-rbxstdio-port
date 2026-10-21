// GMGALNFPLPA$$FLKLMMIPOHP @ RVA 0x306C588

float GMGALNFPLPA__FLKLMMIPOHP(GMGALNFPLPA_o *__this,float PJHOLDOLLCN,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (__this->fields).HFLMCCMEBNP;
  fVar4 = (__this->fields).PLABOODCDAJ;
  do {
    fVar5 = (__this->fields).GDIIBOGHNOJ + fVar4;
    fVar4 = PJHOLDOLLCN - fVar5 * (float)(int)(PJHOLDOLLCN / fVar5);
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if (fVar4 < 0.0) {
      fVar5 = 0.0;
    }
    bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
    if (bVar1) {
      fVar4 = (__this->fields).BDDKEKCPADJ;
      fVar2 = (__this->fields).GDIIBOGHNOJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316c428 with catch @ 0316c5e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316c450 with catch @ 0316c5ec
                        */
      fVar3 = fVar5 + fVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316c42c with catch @ 0316c5f0
                        */
      if ((fVar4 < fVar2) && (fVar2 <= fVar3)) {
                    /* try { // try from 0316c608 to 0326c61f has its CatchHandler @ 0316c698 */
        GMGALNFPLPA__KJKENPICBLD(__this,false,true,in_x3);
        fVar2 = (__this->fields).GDIIBOGHNOJ;
        fVar3 = fVar5 + (__this->fields).BDDKEKCPADJ;
      }
      (__this->fields).BDDKEKCPADJ = fVar3;
      if (fVar3 < fVar2) {
        return fVar5;
      }
                    /* try { // try from 0316c620 to 0326c687 has its CatchHandler @ 0316c330 */
      fVar4 = (__this->fields).PLABOODCDAJ;
      fVar6 = (fVar3 - fVar2) + (__this->fields).HFLMCCMEBNP;
      (__this->fields).HFLMCCMEBNP = fVar6;
      if (fVar6 < fVar4) {
                    /* try { // try from 0316c688 to 0326c697 has its CatchHandler @ 0316c698 */
        return fVar2 - ((fVar3 - fVar5) + 1e-10);
      }
      PJHOLDOLLCN = fVar6 - fVar4;
    }
    else {
      fVar4 = (__this->fields).PLABOODCDAJ;
      fVar5 = fVar5 + (__this->fields).HFLMCCMEBNP;
      (__this->fields).HFLMCCMEBNP = fVar5;
      if (fVar5 < fVar4) {
        return 0.0;
      }
      PJHOLDOLLCN = fVar5 - fVar4;
    }
    (__this->fields).HFLMCCMEBNP = 0.0;
    (__this->fields).BDDKEKCPADJ = 0.0;
    fVar2 = 0.0;
  } while( true );
}

