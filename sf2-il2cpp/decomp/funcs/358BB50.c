// PADDODJLLFJ$$BCEJCCGFMOP @ RVA 0x358BB50

bool PADDODJLLFJ__BCEJCCGFMOP(PADDODJLLFJ_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  IEFEBEDLHNN_o *pIVar1;
  CNDPAJOLKFN_o *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_04568d46 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04568d46 = 1;
    method = extraout_x1;
  }
  pIVar1 = (__this->fields).HJKLIDCAEOE;
  if ((pIVar1 != (IEFEBEDLHNN_o *)0x0) && ((__this->fields).LNEKPOAMMDK != false)) {
    pCVar2 = (pIVar1->fields).CNMHHKAMGPI;
    if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
      fVar4 = (pCVar2->fields).super.OHHDBINAJCB;
      fVar5 = (pCVar2->fields).super.JOLEIODMLFL;
      fVar3 = (pCVar2->fields).PPOPAMHBMGG;
      fVar6 = (__this->fields).EAMLBCJEKDF;
      fVar7 = (__this->fields).DLJPCGPGONK;
      pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
      CNDPAJOLKFN___ctor(pCVar2,fVar4 + fVar6,fVar7 - fVar5,fVar3,(MethodInfo *)0x0);
      if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
        fVar3 = (pCVar2->fields).super.OHHDBINAJCB;
        if ((((fVar3 <= (__this->fields).GJPJBEBEFDA) && ((__this->fields).HNJEMFFEBBH <= fVar3)) &&
            (fVar3 = (pCVar2->fields).super.JOLEIODMLFL, fVar3 <= (__this->fields).EMCONLBCHAB)) &&
           ((__this->fields).ODJMFPBPLNH <= fVar3)) {
          return false;
        }
        (*(__this->klass->vtable)._9_AFBEEALKOPE.methodPtr)
                  (__this,0,(__this->klass->vtable)._9_AFBEEALKOPE.method);
        return true;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

