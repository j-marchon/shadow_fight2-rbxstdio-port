// HFNLANEMDFI$$ELLKHHEENBP @ RVA 0x3349D5C

int32_t HFNLANEMDFI__ELLKHHEENBP(HFNLANEMDFI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double val2;
  double dVar9;
  float fVar10;
  double dVar11;
  
  if ((DAT_045679ea & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11371);
    DAT_045679ea = 1;
    method = extraout_x1;
  }
  HFNLANEMDFI__KIGEDFECCFP(__this,method);
  fVar8 = (__this->fields).AICMABLCDED;
  fVar2 = fVar8;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    fVar2 = (__this->fields).AICMABLCDED;
  }
  val2 = (double)(float)(int)fVar8;
  if (0.0 < (__this->fields).CMCDADPEHJI) {
    dVar9 = (double)(long)(fVar2 * (__this->fields).EGCPFDNGNHP + 0.5);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    dVar3 = System_Math__Min(dVar9,val2,(MethodInfo *)0x0);
    fVar2 = (__this->fields).CMCDADPEHJI;
    if (1.0 <= fVar2) {
      dVar7 = dVar3 * 0.5;
      dVar5 = val2 + 1.0 + dVar9 * 0.5;
      dVar4 = 0.0;
    }
    else {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar4 = System_Math__Max(dVar9,1.0,(MethodInfo *)0x0);
      dVar4 = System_Math__Pow((double)fVar2,-1.0 / dVar4,(MethodInfo *)0x0);
      dVar5 = System_Math__Pow(dVar4,-dVar3,(MethodInfo *)0x0);
      dVar6 = log(dVar4);
      dVar7 = System_Math__Pow(dVar6,2.0,(MethodInfo *)0x0);
      dVar11 = dVar3 * dVar6 + 1.0;
      dVar7 = (1.0 - dVar5 * dVar11) / dVar7;
      dVar5 = System_Math__Pow(dVar4,-dVar9,(MethodInfo *)0x0);
      dVar6 = System_Math__Pow(dVar6,2.0,(MethodInfo *)0x0);
      dVar5 = val2 + 1.0 + (1.0 - dVar5 * dVar11) / dVar6;
    }
    dVar6 = (double)(__this->fields).AICMABLCDED;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar2 = LIIFLGALGNK__GFHNCCOMPAJ(0.0,1.0,(MethodInfo *)0x0);
    fVar8 = LIIFLGALGNK__GFHNCCOMPAJ(0.0,1.0,(MethodInfo *)0x0);
    fVar10 = (__this->fields).CMCDADPEHJI;
                    /* try { // try from 03449fa4 to 0354a11f has its CatchHandler @ 03449fa4
                       catch() { ... } // from try @ 03449fa4 with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a28c with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a33c with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a344 with catch @ 03449fa4
                       catch() { ... } // from try @ 0344a420 with catch @ 03449fa4 */
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if ((double)fVar8 <= 1.0 / ((dVar6 - (val2 - dVar7)) / (dVar5 - dVar6) + 1.0)) {
      if (1.0 <= fVar10) {
                    /* try { // try from 0344a120 to 0354a147 has its CatchHandler @ 0344a368 */
        dVar9 = (double)(long)(dVar3 * (double)fVar2 + 0.5);
      }
      else {
        dVar9 = System_Math__Pow(dVar4,-dVar3,(MethodInfo *)0x0);
        dVar3 = log(1.0 - (1.0 - dVar9) * (double)fVar2);
        dVar7 = log(dVar4);
        dVar9 = (double)(long)(-dVar3 / dVar7);
        dVar4 = log((((dVar7 + dVar7) - dVar4) + 1.0) / (dVar4 * dVar7));
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (-dVar4 / dVar7 <= -dVar3 / dVar7 - dVar9) {
          dVar9 = dVar9 + 1.0;
        }
      }
      val2 = val2 - dVar9;
    }
    else {
      if (1.0 <= fVar10) {
        dVar9 = (double)(long)(dVar9 * (double)fVar2 + 0.5);
      }
      else {
        dVar9 = System_Math__Pow(dVar4,-dVar9,(MethodInfo *)0x0);
        dVar3 = log(1.0 - (1.0 - dVar9) * (double)fVar2);
        dVar7 = log(dVar4);
        dVar9 = (double)(long)(-dVar3 / dVar7);
        dVar4 = log((((dVar7 + dVar7) - dVar4) + 1.0) / (dVar4 * dVar7));
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (-dVar4 / dVar7 <= -dVar3 / dVar7 - dVar9) {
          dVar9 = dVar9 + 1.0;
        }
      }
      val2 = val2 + 1.0 + dVar9;
    }
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_11371,StringLiteral_1,(MethodInfo *)0x0);
  }
  iVar1 = -0x80000000;
                    /* try { // try from 0344a17c to 0354a1a7 has its CatchHandler @ 0344a364 */
  if (val2 != INFINITY) {
    iVar1 = (int)val2;
  }
  return iVar1;
}

