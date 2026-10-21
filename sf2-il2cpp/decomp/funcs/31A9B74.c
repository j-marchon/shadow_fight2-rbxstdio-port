// OOBBAGLCFPF$$KDJGNPFFBDL @ RVA 0x31A9B74

void OOBBAGLCFPF__KDJGNPFFBDL(AADKBCFCLKK_o *DBBIOFNFOCI,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar1;
  Il2CppObject *message;
  MethodInfo *extraout_x1;
  KDADMJGPAOM_o *pKVar2;
  PGICCMFLDPI_o *pPVar3;
  undefined1 local_50 [4];
  int32_t local_4c;
  int64_t local_48;
  
  if ((DAT_04566b2a & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_14858);
    FUN_01bab630(&StringLiteral_16764);
    FUN_01bab630(&StringLiteral_18258);
    FUN_01bab630(&StringLiteral_18136);
    FUN_01bab630(&StringLiteral_16669);
    FUN_01bab630(&StringLiteral_19621);
    FUN_01bab630(&StringLiteral_21211);
    FUN_01bab630(&StringLiteral_16765);
    FUN_01bab630(&StringLiteral_5865);
    FUN_01bab630(&StringLiteral_18137);
    DAT_04566b2a = 1;
    method = extraout_x1;
  }
  local_4c = 0;
  local_50[0] = 0;
  if (DBBIOFNFOCI == (AADKBCFCLKK_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_5865,(MethodInfo *)0x0);
    return;
  }
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  local_48 = (DBBIOFNFOCI->fields).AMKHEHFFAKJ;
  pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_16669,pSVar1,(MethodInfo *)0x0);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
    pKVar2 = (DBBIOFNFOCI->fields).LHFLMBNKPHF;
    pSVar1 = StringLiteral_14858;
    if (pKVar2 != (KDADMJGPAOM_o *)0x0) {
      local_4c = (pKVar2->fields).IILCHFKCEEH;
      pSVar1 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_16765,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      pKVar2 = (DBBIOFNFOCI->fields).LHFLMBNKPHF;
      if (pKVar2 == (KDADMJGPAOM_o *)0x0) goto LAB_032a9efc;
      local_4c = (pKVar2->fields).PDGEHKCPGDK;
      pSVar1 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_16764,pSVar1,(MethodInfo *)0x0);
    }
    System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
    pPVar3 = (DBBIOFNFOCI->fields).LBKLNIPHGMM;
    if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
      local_48 = (pPVar3->fields).GDKPGIBMFPA;
      pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_21211,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      local_48 = (DBBIOFNFOCI->fields).IKNCNGMNPPK;
      pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_19621,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      local_50[0] = (DBBIOFNFOCI->fields).IOLELGMBJFL;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar1 = System_Boolean__ToString(SUB81(local_50,0),(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(StringLiteral_18258,pSVar1,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      pPVar3 = (DBBIOFNFOCI->fields).FAEDHKAJJNK;
      pSVar1 = StringLiteral_18137;
      if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
        local_48 = (pPVar3->fields).GDKPGIBMFPA;
        pSVar1 = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
        pSVar1 = System_String__Concat(StringLiteral_18136,pSVar1,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__AppendLine(__this,pSVar1,(MethodInfo *)0x0);
      message = (Il2CppObject *)
                (*(__this->klass->vtable)._3_ToString.methodPtr)
                          (__this,(__this->klass->vtable)._3_ToString.method);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032a9efc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

