// PKHLGDMJPMF$$NOLECIOODNG @ RVA 0x319BAC0

/* WARNING: Type propagation algorithm not settling */

bool PKHLGDMJPMF__NOLECIOODNG
               (CNDPAJOLKFN_o *COKIMPJEFMI,CNDPAJOLKFN_o *IALLNODEFEG,CNDPAJOLKFN_o *JBAEAMDNPFF,
               CNDPAJOLKFN_o *OKDIHBHNFMA,CNDPAJOLKFN_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  PKHLGDMJPMF_Fields PVar3;
  float fVar4;
  PKHLGDMJPMF_Fields PVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((COKIMPJEFMI != (CNDPAJOLKFN_o *)0x0) && (IALLNODEFEG != (CNDPAJOLKFN_o *)0x0)) {
    bVar1 = Util__JFJCDAJGFKD((COKIMPJEFMI->fields).super.OHHDBINAJCB,
                              (IALLNODEFEG->fields).super.OHHDBINAJCB,1e-10,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = Util__JFJCDAJGFKD((COKIMPJEFMI->fields).super.JOLEIODMLFL,
                                  (IALLNODEFEG->fields).super.JOLEIODMLFL,1e-10,(MethodInfo *)0x0),
       bVar1)) {
      return false;
    }
    if ((JBAEAMDNPFF != (CNDPAJOLKFN_o *)0x0) && (OKDIHBHNFMA != (CNDPAJOLKFN_o *)0x0)) {
      bVar1 = Util__JFJCDAJGFKD((JBAEAMDNPFF->fields).super.OHHDBINAJCB,
                                (OKDIHBHNFMA->fields).super.OHHDBINAJCB,1e-10,(MethodInfo *)0x0);
      if ((bVar1) &&
         (bVar1 = Util__JFJCDAJGFKD((JBAEAMDNPFF->fields).super.JOLEIODMLFL,
                                    (OKDIHBHNFMA->fields).super.JOLEIODMLFL,1e-10,(MethodInfo *)0x0)
         , bVar1)) {
        return false;
      }
      fVar6 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
      fVar7 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
      fVar10 = (JBAEAMDNPFF->fields).super.OHHDBINAJCB;
      fVar11 = (JBAEAMDNPFF->fields).super.JOLEIODMLFL;
      fVar2 = (IALLNODEFEG->fields).super.OHHDBINAJCB - fVar6;
      fVar4 = (IALLNODEFEG->fields).super.JOLEIODMLFL - fVar7;
      fVar8 = (OKDIHBHNFMA->fields).super.OHHDBINAJCB - fVar10;
      fVar9 = (OKDIHBHNFMA->fields).super.JOLEIODMLFL - fVar11;
      fVar6 = fVar6 - fVar10;
      fVar7 = fVar7 - fVar11;
      fVar10 = fVar2 * fVar9 - fVar4 * fVar8;
      fVar4 = fVar2 * fVar7 - fVar4 * fVar6;
      fVar2 = fVar8 * fVar7 - fVar6 * fVar9;
      bVar1 = Util__KEJBDHBDGNI(fVar10,1e-10,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = Util__KEJBDHBDGNI(fVar2,1e-10,(MethodInfo *)0x0);
        if ((!bVar1) && (bVar1 = Util__KEJBDHBDGNI(fVar4,1e-10,(MethodInfo *)0x0), !bVar1)) {
          return false;
        }
        fVar9 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
        fVar8 = (IALLNODEFEG->fields).super.OHHDBINAJCB;
        fVar7 = (JBAEAMDNPFF->fields).super.OHHDBINAJCB;
        fVar10 = (OKDIHBHNFMA->fields).super.OHHDBINAJCB;
        fVar6 = fVar9;
        if (fVar8 <= fVar9) {
          fVar6 = fVar8;
        }
        fVar11 = fVar10;
        if (fVar10 <= fVar7) {
          fVar11 = fVar7;
        }
        if (fVar11 < fVar6) {
          return false;
        }
        if (fVar10 <= fVar7) {
          fVar7 = fVar10;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        if (fVar8 < fVar7) {
          return false;
        }
                    /* try { // try from 0329bc2c to 0339bccf has its CatchHandler @ 0329bc2c
                       catch() { ... } // from try @ 0329bc2c with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bd40 with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bd78 with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bda4 with catch @ 0329bc2c
                       catch() { ... } // from try @ 0329bdd4 with catch @ 0329bc2c */
        fVar9 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
        fVar8 = (IALLNODEFEG->fields).super.JOLEIODMLFL;
        fVar7 = (JBAEAMDNPFF->fields).super.JOLEIODMLFL;
        fVar10 = (OKDIHBHNFMA->fields).super.JOLEIODMLFL;
        fVar6 = fVar9;
        if (fVar8 <= fVar9) {
          fVar6 = fVar8;
        }
        fVar11 = fVar10;
        if (fVar10 <= fVar7) {
          fVar11 = fVar7;
        }
        if (fVar11 < fVar6) {
          return false;
        }
        if (fVar10 <= fVar7) {
          fVar7 = fVar10;
        }
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar10 = 1.0;
        if (fVar8 < fVar7) {
          return false;
        }
      }
      fVar2 = fVar2 / fVar10;
      bVar1 = Util__INDMHFLELNN(fVar2,0.0,1.0,(MethodInfo *)0x0);
      if ((!bVar1) || (bVar1 = Util__INDMHFLELNN(fVar4 / fVar10,0.0,1.0,(MethodInfo *)0x0), !bVar1))
      {
        return false;
      }
      if (HPACPFLKHPK != (CNDPAJOLKFN_o *)0x0) {
        fVar4 = (COKIMPJEFMI->fields).super.OHHDBINAJCB;
        PVar5 = (IALLNODEFEG->fields).super;
        fVar6 = (COKIMPJEFMI->fields).super.JOLEIODMLFL;
        PVar3.OHHDBINAJCB = fVar4 + (PVar5.OHHDBINAJCB - fVar4) * fVar2;
        PVar3.JOLEIODMLFL = fVar6 + (PVar5.JOLEIODMLFL - fVar6) * fVar2;
        (HPACPFLKHPK->fields).super = PVar3;
        return true;
                    /* try { // try from 0329bcd0 to 0339bcd7 has its CatchHandler @ 0329bd80 */
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

