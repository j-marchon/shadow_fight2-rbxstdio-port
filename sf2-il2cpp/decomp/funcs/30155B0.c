// ECENNHNBAME.HJPFANEPGJF.FFGJMEOGPEA$$MKONAIENMCI @ RVA 0x30155B0

int32_t ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA__MKONAIENMCI
                  (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,
                  MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PNGKLCHKPEO_o *pPVar4;
  int32_t iVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = (__this->fields).GDPIIGNJCLE;
  if (iVar2 == 0) {
    pPVar4 = (__this->fields).OCNJNIOMPMJ;
    if (pPVar4 != (PNGKLCHKPEO_o *)0x0) {
      fVar6 = (float)(*(pPVar4->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                               (pPVar4,AHEFOIOKDOK,(pPVar4->klass->vtable)._8_CJHJMGGINHP.method);
      pPVar4 = (__this->fields).DBNCGNGNGNM;
      if (pPVar4 != (PNGKLCHKPEO_o *)0x0) {
        fVar7 = (float)(*(pPVar4->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                                 (pPVar4,AHEFOIOKDOK,(pPVar4->klass->vtable)._8_CJHJMGGINHP.method);
        fVar6 = fVar6 - fVar7;
        goto LAB_0311561c;
      }
    }
  }
  else if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    iVar3 = (AHEFOIOKDOK->fields).OODLJOMIOIB;
    iVar1 = -iVar3;
    if (iVar2 == 1) {
      iVar1 = iVar3;
    }
    fVar6 = (float)iVar1;
LAB_0311561c:
    iVar5 = -1;
    if (0.0 <= fVar6) {
      iVar5 = 1;
    }
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

