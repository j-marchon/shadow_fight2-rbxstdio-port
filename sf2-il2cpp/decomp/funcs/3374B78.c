// IOIKBGAJIGO$$MPENCGPEPEE @ RVA 0x3374B78

void IOIKBGAJIGO__MPENCGPEPEE
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,
               System_Byte_array **GCOICEAJHDL,MethodInfo *method)

{
  MethodInfo *pMVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_Text_Encoding_o *pSVar6;
  System_Byte_array *pSVar7;
  
  if ((DAT_04567b42 & 1) == 0) {
                    /* try { // try from 03474bc0 to 03574be7 has its CatchHandler @ 03474ce8 */
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1551);
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_1552);
    FUN_01bab630(&StringLiteral_1484);
    DAT_04567b42 = 1;
  }
                    /* try { // try from 03474c1c to 03574c47 has its CatchHandler @ 03474ce4 */
  pMVar1 = (MethodInfo *)
           System_String__Concat
                     (IIDPDAKKFFN,StringLiteral_15862,DDGBMJNBFPF,StringLiteral_1484,
                      (MethodInfo *)0x0);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
  }
                    /* try { // try from 03474c48 to 03574c4f has its CatchHandler @ 03474ce0 */
  pSVar2 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
                    /* try { // try from 03474c50 to 03574ccf has its CatchHandler @ 034749e4 */
  pSVar2 = System_String__Concat
                     (pSVar2,StringLiteral_1551,(System_String_o *)pMVar1,(MethodInfo *)0x0);
  pSVar3 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar3 = System_String__Concat
                     (pSVar3,StringLiteral_1552,(System_String_o *)pMVar1,(MethodInfo *)0x0);
  pSVar4 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  if ((pSVar4 != (System_Byte_array *)0x0) && (pSVar4->max_length != 0)) {
    pSVar7 = *GCOICEAJHDL;
    pSVar5 = System_BitConverter__GetBytes(1,(MethodInfo *)0x0);
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
    }
                    /* try { // try from 03474cd0 to 03574cd3 has its CatchHandler @ 03474cdc */
                    /* try { // try from 03474cd4 to 03574cf7 has its CatchHandler @ 034749e4 */
    pSVar5 = IOIKBGAJIGO__ABJJDDOFODH(pSVar7,pSVar5,pMVar1);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474cd0 with catch @ 03474cdc
                        */
    *GCOICEAJHDL = pSVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474c48 with catch @ 03474ce0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474c1c with catch @ 03474ce4
                        */
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03474bc0 with catch @ 03474ce8
                        */
    pSVar5 = *GCOICEAJHDL;
    pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar6 == (System_Text_Encoding_o *)0x0) goto LAB_03474eac;
                    /* try { // try from 03474cf8 to 03574cfb has its CatchHandler @ 03474d0c */
    pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,IIDPDAKKFFN);
                    /* catch() { ... } // from try @ 03474cf8 with catch @ 03474d0c */
    pSVar5 = IOIKBGAJIGO__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
    *GCOICEAJHDL = pSVar5;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
    pSVar5 = *GCOICEAJHDL;
    pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar6 == (System_Text_Encoding_o *)0x0) goto LAB_03474eac;
                    /* try { // try from 03474d44 to 03574d6b has its CatchHandler @ 03474d80 */
    pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,DDGBMJNBFPF);
    pSVar5 = IOIKBGAJIGO__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
    *GCOICEAJHDL = pSVar5;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
                    /* try { // try from 03474d6c to 03574d77 has its CatchHandler @ 034749e4 */
    pSVar4 = IOIKBGAJIGO__ABJJDDOFODH(*GCOICEAJHDL,pSVar4,pMVar1);
                    /* try { // try from 03474d78 to 03574d7f has its CatchHandler @ 03474d80 */
    *GCOICEAJHDL = pSVar4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03474d44 with catch @ 03474d80
                       catch(type#2 @ 00000000) { ... } // from try @ 03474d78 with catch @ 03474d80
                        */
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
  }
                    /* try { // try from 03474d84 to 035751b3 has its CatchHandler @ 03474d84
                       catch() { ... } // from try @ 03474d84 with catch @ 03474d84
                       catch() { ... } // from try @ 03475244 with catch @ 03474d84
                       catch() { ... } // from try @ 034752d0 with catch @ 03474d84
                       catch() { ... } // from try @ 03475374 with catch @ 03474d84 */
  pSVar4 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar3,(MethodInfo *)0x0);
  if ((pSVar4 == (System_Byte_array *)0x0) || (pSVar4->max_length == 0)) {
    return;
  }
  pSVar7 = *GCOICEAJHDL;
  pSVar5 = System_BitConverter__GetBytes(0,(MethodInfo *)0x0);
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
  }
  pSVar5 = IOIKBGAJIGO__ABJJDDOFODH(pSVar7,pSVar5,pMVar1);
  *GCOICEAJHDL = pSVar5;
  thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
  pSVar5 = *GCOICEAJHDL;
  pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
  if (pSVar6 != (System_Text_Encoding_o *)0x0) {
    pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,IIDPDAKKFFN);
    pSVar5 = IOIKBGAJIGO__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
    *GCOICEAJHDL = pSVar5;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
    pSVar5 = *GCOICEAJHDL;
    pSVar6 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar6 != (System_Text_Encoding_o *)0x0) {
      pMVar1 = (pSVar6->klass->vtable)._19_GetBytes.method;
      pSVar7 = (System_Byte_array *)
               (*(pSVar6->klass->vtable)._19_GetBytes.methodPtr)(pSVar6,DDGBMJNBFPF);
      pSVar5 = IOIKBGAJIGO__ABJJDDOFODH(pSVar5,pSVar7,pMVar1);
      *GCOICEAJHDL = pSVar5;
      thunk_FUN_01c20e04(GCOICEAJHDL,pSVar5);
      pSVar4 = IOIKBGAJIGO__ABJJDDOFODH(*GCOICEAJHDL,pSVar4,pMVar1);
      *GCOICEAJHDL = pSVar4;
      thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
      return;
    }
  }
LAB_03474eac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

