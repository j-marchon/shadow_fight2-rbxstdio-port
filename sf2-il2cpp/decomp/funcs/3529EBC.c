// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$Render @ RVA 0x3529EBC

void Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Render
               (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this,MethodInfo *method)

{
  bool bVar1;
  JGHEMMGMLND_o *pJVar2;
  CNDPAJOLKFN_o *pCVar3;
  CNDPAJOLKFN_o *pCVar4;
  UnityEngine_Object_o *x;
  UnityEngine_LineRenderer_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  
  if ((DAT_04568a17 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a17 = 1;
  }
  pJVar2 = (__this->fields).Base;
  if (pJVar2 == (JGHEMMGMLND_o *)0x0) {
    return;
  }
  bVar1 = CNDPAJOLKFN__LCAEEPKOHMN
                    ((pJVar2->fields).PBMIHHHBAFI,(CNDPAJOLKFN_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pJVar2 = (__this->fields).Base;
  if (pJVar2 != (JGHEMMGMLND_o *)0x0) {
    bVar1 = CNDPAJOLKFN__LCAEEPKOHMN
                      ((pJVar2->fields).BFBNMPMNABM,(CNDPAJOLKFN_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    x = (UnityEngine_Object_o *)(__this->fields).GKFFMLDIAJK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pJVar2 = (__this->fields).Base;
    if (((pJVar2 != (JGHEMMGMLND_o *)0x0) &&
        (pCVar3 = (pJVar2->fields).BFBNMPMNABM, pCVar3 != (CNDPAJOLKFN_o *)0x0)) &&
       (pCVar4 = (pJVar2->fields).PBMIHHHBAFI, pCVar4 != (CNDPAJOLKFN_o *)0x0)) {
      fVar10 = (pCVar3->fields).super.OHHDBINAJCB;
      fVar11 = (pCVar3->fields).super.JOLEIODMLFL;
      fVar7 = (pCVar4->fields).super.OHHDBINAJCB;
      fVar8 = (pCVar4->fields).super.JOLEIODMLFL;
      fVar12 = (pJVar2->fields).MHJPFONADDM;
      fVar9 = (pJVar2->fields).MEKAEJEAAGJ;
      fVar6 = (__this->fields).GLKAIFDHFFG;
      fVar13 = (pJVar2->fields).ADOKPILEFJH;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (0.001 < ABS(fVar6 - fVar13)) {
        pJVar2 = (__this->fields).Base;
        if (pJVar2 == (JGHEMMGMLND_o *)0x0) goto LAB_0362a090;
        fVar6 = (pJVar2->fields).ADOKPILEFJH;
        pUVar5 = (__this->fields).GKFFMLDIAJK;
        (__this->fields).GLKAIFDHFFG = fVar6;
        if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_0362a090;
        UnityEngine_LineRenderer__set_endWidth(pUVar5,fVar6,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_startWidth(pUVar5,fVar6,(MethodInfo *)0x0);
      }
      pUVar5 = (__this->fields).GKFFMLDIAJK;
      if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
        fVar10 = fVar10 - fVar7;
        fVar11 = fVar11 - fVar8;
        position.fields.x = fVar7 + fVar10 * fVar12;
        position.fields.y = fVar8 + fVar11 * fVar12;
        position.fields.z = 0.0;
        UnityEngine_LineRenderer__SetPosition(pUVar5,0,position,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).GKFFMLDIAJK;
        if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
          fVar9 = 1.0 - fVar9;
          position_00.fields.x = fVar7 + fVar10 * fVar9;
          position_00.fields.y = fVar8 + fVar11 * fVar9;
          position_00.fields.z = 0.0;
          UnityEngine_LineRenderer__SetPosition(pUVar5,1,position_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0362a090:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

