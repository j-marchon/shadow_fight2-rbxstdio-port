// EIILGPAPGMJ$$NKCPPFNFDEO @ RVA 0x358272C

UnityEngine_Color_o EIILGPAPGMJ__NKCPPFNFDEO(EIILGPAPGMJ_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o UVar2;
  
  pUVar1 = (__this->fields).IAKCIALILLN;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03682748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar2.fields.r =
         (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                   (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    UVar2.fields.g = (float)in_s1;
    UVar2.fields.a = (float)in_s3;
    UVar2.fields.b = (float)in_s2;
    return (UnityEngine_Color_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

