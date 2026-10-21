// CocosAnimation$$get_ChildSize @ RVA 0x33F7B24

UnityEngine_Vector2_o CocosAnimation__get_ChildSize(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  float in_s1;
  UnityEngine_Vector2_o UVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f7b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.x =
         (float)(*(code *)pBVar1->klass[1]._1.element_class)(pBVar1,pBVar1->klass[1]._1.castClass);
    UVar2.fields.y = in_s1;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

