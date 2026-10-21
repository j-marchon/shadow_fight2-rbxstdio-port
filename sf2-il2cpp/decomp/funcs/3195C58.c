// CMEBCBKGFFL$$JKGGKELPNKJ @ RVA 0x3195C58

System_Byte_array * CMEBCBKGFFL__JKGGKELPNKJ(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  System_Byte_array *pSVar3;
  System_IO_FileStream_o *__this;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a6f & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_CMEBCBKGFFL_JKGGKELPNKJ__);
    FUN_01bab630(&System_IO_FileStream_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    DAT_04566a6f = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (MGENAMAJALB_TypeInfo->static_fields->ACGDPPPMKBM == false) {
    __this = (System_IO_FileStream_o *)thunk_FUN_01bda818(System_IO_FileStream_TypeInfo);
    System_IO_FileStream___ctor(__this,JAFADHFFBPK,3,1,(MethodInfo *)0x0);
    if (__this == (System_IO_FileStream_o *)0x0) goto LAB_03295e04;
    uVar4 = (*(__this->klass->vtable)._11_get_Length.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_Length.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,uVar4);
    uVar4 = (*(__this->klass->vtable)._11_get_Length.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_Length.method);
    (*(__this->klass->vtable)._33_Read.methodPtr)
              (__this,pSVar3,0,uVar4,(__this->klass->vtable)._33_Read.method);
    (*(__this->klass->vtable)._19_Close.methodPtr)(__this,(__this->klass->vtable)._19_Close.method);
  }
  else {
    pSVar2 = CMEBCBKGFFL__BPMILMCCBEI(JAFADHFFBPK,method);
    pSVar2 = CMEBCBKGFFL__OLJOOCGKALN(pSVar2,method_00);
    x = (UnityEngine_Object_o *)
        UnityEngine_ResourcesAndBundles__Load<object>
                  (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<TextAsset>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        pSVar3 = UnityEngine_TextAsset__get_bytes((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
        return pSVar3;
      }
LAB_03295e04:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_Byte_array *)0x0;
  }
  return pSVar3;
}

