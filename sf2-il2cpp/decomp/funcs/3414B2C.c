// IMJHLANAMIK$$MHLJCCAEHML @ RVA 0x3414B2C

void IMJHLANAMIK__MHLJCCAEHML(IMJHLANAMIK_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  
  pLVar1 = (__this->fields).CCHECBLHFEH;
  if (pLVar1 != (LabelButton_o *)0x0) {
    SFButton__set_IsFlashing((SFButton_o *)pLVar1,false,(MethodInfo *)0x0);
    AKJJAPEHKCG__HJDDBKPCAFJ
              ((UnityEngine_UI_Selectable_o *)(__this->fields).CCHECBLHFEH,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).PJECIFAMGHF;
    if (pLVar1 != (LabelButton_o *)0x0) {
      SFButton__set_IsFlashing((SFButton_o *)pLVar1,true,(MethodInfo *)0x0);
      AKJJAPEHKCG__GOCEMJOCNEE
                ((UnityEngine_UI_Selectable_o *)(__this->fields).PJECIFAMGHF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

