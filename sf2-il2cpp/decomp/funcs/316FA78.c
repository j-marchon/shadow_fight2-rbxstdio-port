// RaidInfoPrize$$Init @ RVA 0x316FA78

void RaidInfoPrize__Init(RaidInfoPrize_o *__this,MethodInfo *method)

{
  RaidInfoPrize_Prize_o *pRVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pRVar1 = (__this->fields)._gold;
  if (pRVar1 != (RaidInfoPrize_Prize_o *)0x0) {
    RaidInfoPrize_Prize__GIENGNEGHPJ(pRVar1,method);
    pRVar1 = (__this->fields)._bronze;
    if (pRVar1 != (RaidInfoPrize_Prize_o *)0x0) {
      RaidInfoPrize_Prize__GIENGNEGHPJ(pRVar1,method_00);
      pRVar1 = (__this->fields)._silver;
      if (pRVar1 != (RaidInfoPrize_Prize_o *)0x0) {
        RaidInfoPrize_Prize__GIENGNEGHPJ(pRVar1,method_01);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

