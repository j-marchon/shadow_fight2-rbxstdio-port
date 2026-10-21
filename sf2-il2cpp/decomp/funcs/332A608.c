// PCEDNFLCPPF$$CJAKLNDJOPD @ RVA 0x332A608

void PCEDNFLCPPF__CJAKLNDJOPD(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSON_JSONArray_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  pSVar2 = PCEDNFLCPPF__DNLODALMDGM(__this,method);
  if (pSVar2 != (SimpleJSON_JSONArray_o *)0x0) {
    iVar1 = (*(pSVar2->klass->vtable)._11_get_Count.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable)._11_get_Count.method);
    method_00 = extraout_x1;
    if (0 < iVar1) {
      (*(pSVar2->klass->vtable)._23_Remove.methodPtr)
                (pSVar2,0,(pSVar2->klass->vtable)._23_Remove.method);
      method_00 = extraout_x1_00;
    }
    PCEDNFLCPPF__MDNBLMPJFML(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

