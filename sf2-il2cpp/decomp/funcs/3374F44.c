// IOIKBGAJIGO$$MPENCGPEPEE @ RVA 0x3374F44

void IOIKBGAJIGO__MPENCGPEPEE
               (System_String_o *IFDOANCFKJD,System_Byte_array **GCOICEAJHDL,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_Text_Encoding_o *pSVar5;
  MethodInfo *pMVar6;
  System_Byte_array *pSVar7;
  
  if ((DAT_04567b43 & 1) == 0) {
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1550);
    FUN_01bab630(&StringLiteral_1553);
    FUN_01bab630(&StringLiteral_1483);
    FUN_01bab630(&StringLiteral_1484);
    DAT_04567b43 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (pSVar1,StringLiteral_1550,IFDOANCFKJD,StringLiteral_1484,(MethodInfo *)0x0);
  pSVar2 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pMVar6 = (MethodInfo *)IFDOANCFKJD;
  pSVar2 = System_String__Concat
                     (pSVar2,StringLiteral_1553,IFDOANCFKJD,StringLiteral_1483,(MethodInfo *)0x0);
  pSVar3 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar1,(MethodInfo *)0x0);
  if ((pSVar3 != (System_Byte_array *)0x0) && (pSVar3->max_length != 0)) {
    pSVar7 = *GCOICEAJHDL;
    pSVar4 = System_BitConverter__GetBytes(2,(MethodInfo *)0x0);
    if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
    }
    pSVar4 = IOIKBGAJIGO__ABJJDDOFODH(pSVar7,pSVar4,pMVar6);
    *GCOICEAJHDL = pSVar4;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
    pSVar4 = *GCOICEAJHDL;
    pSVar5 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
    if (pSVar5 == (System_Text_Encoding_o *)0x0) goto LAB_034751dc;
    pMVar6 = (pSVar5->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar5->klass->vtable)._19_GetBytes.methodPtr)(pSVar5,IFDOANCFKJD);
    pSVar4 = IOIKBGAJIGO__ABJJDDOFODH(pSVar4,pSVar7,pMVar6);
    *GCOICEAJHDL = pSVar4;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
    pSVar3 = IOIKBGAJIGO__ABJJDDOFODH(*GCOICEAJHDL,pSVar3,pMVar6);
    *GCOICEAJHDL = pSVar3;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar3);
  }
  pSVar3 = CMEBCBKGFFL__JKGGKELPNKJ(pSVar2,(MethodInfo *)0x0);
  if ((pSVar3 == (System_Byte_array *)0x0) || (pSVar3->max_length == 0)) {
    return;
  }
  pSVar7 = *GCOICEAJHDL;
  pSVar4 = System_BitConverter__GetBytes(7,(MethodInfo *)0x0);
  if ((IOIKBGAJIGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IOIKBGAJIGO_TypeInfo);
  }
  pSVar4 = IOIKBGAJIGO__ABJJDDOFODH(pSVar7,pSVar4,pMVar6);
  *GCOICEAJHDL = pSVar4;
  thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
  pSVar4 = *GCOICEAJHDL;
  pSVar5 = System_Text_Encoding__get_ASCII((MethodInfo *)0x0);
  if (pSVar5 != (System_Text_Encoding_o *)0x0) {
    pMVar6 = (pSVar5->klass->vtable)._19_GetBytes.method;
    pSVar7 = (System_Byte_array *)
             (*(pSVar5->klass->vtable)._19_GetBytes.methodPtr)(pSVar5,IFDOANCFKJD);
    pSVar4 = IOIKBGAJIGO__ABJJDDOFODH(pSVar4,pSVar7,pMVar6);
    *GCOICEAJHDL = pSVar4;
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar4);
    pSVar3 = IOIKBGAJIGO__ABJJDDOFODH(*GCOICEAJHDL,pSVar3,pMVar6);
    *GCOICEAJHDL = pSVar3;
                    /* try { // try from 034751b4 to 035751db has its CatchHandler @ 034752e4 */
    thunk_FUN_01c20e04(GCOICEAJHDL,pSVar3);
    return;
  }
LAB_034751dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

