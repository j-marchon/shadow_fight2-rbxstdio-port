// MGENAMAJALB$$EDFAAGIOLKF @ RVA 0x3105274

/* WARNING: Removing unreachable block (ram,0x032055c0) */
/* WARNING: Removing unreachable block (ram,0x032055c8) */

System_String_o * MGENAMAJALB__EDFAAGIOLKF(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  intptr_t iVar3;
  UnityEngine_AndroidJavaObject_o *__this;
  UnityEngine_AndroidJavaObject_o *__this_00;
  intptr_t iVar4;
  UnityEngine_jvalue_array *pUVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  UnityEngine_AndroidJavaObject_c *pUVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045664ff & 1) == 0) {
    FUN_01bab630(&UnityEngine_AndroidJavaClass_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_AndroidJavaObject_GetStatic<AndroidJavaObject>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_19250);
    FUN_01bab630(&StringLiteral_18407);
    FUN_01bab630(&StringLiteral_17275);
    FUN_01bab630(&StringLiteral_18485);
    FUN_01bab630(&StringLiteral_16428);
    FUN_01bab630(&StringLiteral_1512);
                    /* try { // try from 0320532c to 03305333 has its CatchHandler @ 032053d8 */
    FUN_01bab630(&StringLiteral_999);
    FUN_01bab630(&StringLiteral_1001);
                    /* try { // try from 03205344 to 0330534b has its CatchHandler @ 032053d4 */
    FUN_01bab630(&StringLiteral_14653);
    FUN_01bab630(&StringLiteral_17514);
                    /* try { // try from 03205354 to 03305363 has its CatchHandler @ 032053d0 */
    FUN_01bab630(&UnityEngine_jvalue___TypeInfo);
                    /* try { // try from 03205364 to 0330536f has its CatchHandler @ 032053cc */
    DAT_045664ff = 1;
  }
                    /* try { // try from 03205370 to 033053f3 has its CatchHandler @ 03205204 */
  iVar3 = UnityEngine_AndroidJNI__FindClass(StringLiteral_16428,(MethodInfo *)0x0);
  iVar3 = UnityEngine_AndroidJNIHelper__GetMethodID
                    (iVar3,StringLiteral_18485,StringLiteral_999,(MethodInfo *)0x0);
  __this = (UnityEngine_AndroidJavaObject_o *)
           thunk_FUN_01bda818(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor
            ((UnityEngine_AndroidJavaClass_o *)__this,StringLiteral_17275,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205364 with catch @ 032053cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205354 with catch @ 032053d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03205344 with catch @ 032053d4
                        */
  if (__this == (UnityEngine_AndroidJavaObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320532c with catch @ 032053d8
                        */
                    /* try { // try from 032053f4 to 033053f7 has its CatchHandler @ 03205418 */
  __this_00 = (UnityEngine_AndroidJavaObject_o *)
              UnityEngine_AndroidJavaObject__GetStatic<object>
                        (__this,StringLiteral_17514,
                         Method_UnityEngine_AndroidJavaObject_GetStatic<AndroidJavaObject>__);
                    /* try { // try from 032053f8 to 0330541f has its CatchHandler @ 03205204 */
  if (__this_00 == (UnityEngine_AndroidJavaObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar4 = UnityEngine_AndroidJavaObject__GetRawObject(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032053f4 with catch @ 03205418 */
                    /* try { // try from 03205420 to 03305427 has its CatchHandler @ 0320543c */
  pUVar5 = (UnityEngine_jvalue_array *)FUN_01bab718(UnityEngine_jvalue___TypeInfo,0);
                    /* try { // try from 03205428 to 03305433 has its CatchHandler @ 03205204 */
                    /* try { // try from 03205434 to 0330543b has its CatchHandler @ 0320543c */
  iVar3 = UnityEngine_AndroidJNI__CallObjectMethod(iVar4,iVar3,pUVar5,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03205420 with catch @ 0320543c
                       catch(type#2 @ 00000000) { ... } // from try @ 03205434 with catch @ 0320543c
                        */
  iVar4 = UnityEngine_AndroidJNI__FindClass(StringLiteral_19250,(MethodInfo *)0x0);
  iVar4 = UnityEngine_AndroidJNIHelper__GetMethodID
                    (iVar4,StringLiteral_18407,StringLiteral_1001,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_jvalue_array *)FUN_01bab718(UnityEngine_jvalue___TypeInfo,0);
  pSVar6 = UnityEngine_AndroidJNI__CallStringMethod(iVar3,iVar4,pUVar5,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log(StringLiteral_14653,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_1512;
  }
  pUVar8 = __this_00->klass;
  uVar1._0_1_ = (pUVar8->_2).rank;
  uVar1._1_1_ = (pUVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pUVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar7 = &(pUVar8->vtable)._0_Equals + *piVar10;
        goto LAB_0320552c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar7 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_0320552c:
  (*pVVar7->methodPtr)(__this_00,pVVar7->method);
  if (__this != (UnityEngine_AndroidJavaObject_o *)0x0) {
    pUVar8 = __this->klass;
    uVar2._0_1_ = (pUVar8->_2).rank;
    uVar2._1_1_ = (pUVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pUVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar7 = &(pUVar8->vtable)._0_Equals + *piVar10;
          goto LAB_03205590;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_03205590:
    (*pVVar7->methodPtr)(__this,pVVar7->method);
  }
  return pSVar6;
}

