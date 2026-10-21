// CocosAnimation$$get_Color @ RVA 0x33F80F8

UnityEngine_Color_o CocosAnimation__get_Color(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f8114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.r = (*(code *)pBVar1->klass[1]._1.declaringType)(pBVar1,pBVar1->klass[1]._1.parent)
    ;
    UVar2.fields.g = (float)in_s1;
    UVar2.fields.a = (float)in_s3;
    UVar2.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

