// CocosAnimation$$get_RectAnchor @ RVA 0x33F811C

UnityEngine_Vector2_o CocosAnimation__get_RectAnchor(CocosAnimation_o *__this,MethodInfo *method)

{
  BMNKDDCJACM_o *pBVar1;
  float in_s1;
  UnityEngine_Vector2_o UVar2;
  
  pBVar1 = (__this->fields).CAOKGHKPFAE;
  if (pBVar1 != (BMNKDDCJACM_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034f8138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.x =
         (float)(*pBVar1->klass[1]._1.this_arg.data)
                          (pBVar1,*(undefined8 *)&pBVar1->klass[1]._1.this_arg.bits);
    UVar2.fields.y = in_s1;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

