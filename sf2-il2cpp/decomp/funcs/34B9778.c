// GKLPDMLELJF$$GetHashCode @ RVA 0x34B9778

int32_t GKLPDMLELJF__GetHashCode(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo_27F87C4 *in_x2;
  long lVar6;
  System_Nullable_long__o __this_00;
  undefined8 local_40;
  int64_t iStack_38;
  undefined8 local_28;
  long local_18;
  
  if ((DAT_045685af & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>_GetHashCode__);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685af = 1;
  }
  local_18 = 0;
  local_28 = 0;
  local_40 = 0;
  iStack_38 = 0;
  lVar6 = (__this->fields).ANAJGHJEEOC;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).FFOIEHLJLDA;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    pSVar4 = (__this->fields).LLBEKLPKDHK;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).PEBHLKLGDBM;
      if (iVar1 != 0) {
        local_28 = CONCAT44(iVar1,(undefined4)local_28);
        uVar3 = System_Int32__GetHashCode((int)&local_28 + 4,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).PFJPLCAIGJH;
      if (iVar1 != 0) {
        local_28 = CONCAT44(local_28._4_4_,iVar1);
        uVar3 = System_Int32__GetHashCode((int32_t)&local_28,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      if ((__this->fields).ADEIKPGDIPM.fields.hasValue != false) {
        iStack_38 = (__this->fields).ADEIKPGDIPM.fields.value;
        local_40 = *(undefined8 *)&(__this->fields).ADEIKPGDIPM.fields;
        __this_00.fields.value = Method_System_Nullable<long>_GetHashCode__;
        __this_00.fields._0_8_ = &local_40;
        uVar3 = System_Nullable<long>__GetHashCode(__this_00,in_x2);
        uVar2 = uVar3 ^ uVar2;
      }
      pGVar5 = (__this->fields).CKFPENBPNML;
      if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

