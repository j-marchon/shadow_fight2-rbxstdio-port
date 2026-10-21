// CMEBCBKGFFL$$PHNDFNPDOLA @ RVA 0x319616C

/* WARNING: Removing unreachable block (ram,0x03296300) */

UnityEngine_Texture2D_o * CMEBCBKGFFL__PHNDFNPDOLA(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  ushort uVar1;
  System_IO_FileStream_o *__this;
  undefined8 uVar2;
  System_Byte_array *data;
  VirtualInvokeData *pVVar3;
  UnityEngine_Texture2D_o *__this_00;
  MethodInfo *extraout_x1;
  System_IO_FileStream_c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04566a75 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_CMEBCBKGFFL_PHNDFNPDOLA__);
    FUN_01bab630(&System_IO_FileStream_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&UnityEngine_Texture2D_TypeInfo);
    DAT_04566a75 = 1;
    method = extraout_x1;
  }
  __this = (System_IO_FileStream_o *)thunk_FUN_01bda818(System_IO_FileStream_TypeInfo,method);
  System_IO_FileStream___ctor(__this,JAFADHFFBPK,3,1,(MethodInfo *)0x0);
  if (__this == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (*(__this->klass->vtable)._11_get_Length.methodPtr)
                    (__this,(__this->klass->vtable)._11_get_Length.method);
  data = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,uVar2);
  if (data == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this->klass->vtable)._33_Read.methodPtr)
            (__this,data,0,(ulong)(uint)data->max_length,(__this->klass->vtable)._33_Read.method);
  pSVar4 = __this->klass;
  uVar1._0_1_ = (pSVar4->_2).rank;
  uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar3 = &(pSVar4->vtable)._0_Equals + *piVar6;
        goto LAB_0329629c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_0329629c:
  (*pVVar3->methodPtr)(__this,pVVar3->method);
  __this_00 = (UnityEngine_Texture2D_o *)thunk_FUN_01bda818(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor(__this_00,2,2,5,false,(MethodInfo *)0x0);
  UnityEngine_ImageConversion__LoadImage(__this_00,data,(MethodInfo *)0x0);
  return __this_00;
}

