// NFNBHPOJFNJ$$GDCHAJOJGBH @ RVA 0x335E5D0

void NFNBHPOJFNJ__GDCHAJOJGBH
               (NFNBHPOJFNJ_o *__this,System_Text_StringBuilder_o *KOANCCDDBDA,
               System_String_o *PCEBDAPOGOO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_IO_FileInfo_o *__this_00;
  ulong uVar5;
  System_IO_FileStream_o *pSVar6;
  System_IO_StreamWriter_o *pSVar7;
  int64_t iVar8;
  
  if ((DAT_04567a68 & 1) == 0) {
    FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    __this = (NFNBHPOJFNJ_o *)FUN_01bab630(&StringLiteral_47);
                    /* try { // try from 0345e618 to 0355e61f has its CatchHandler @ 0345e670 */
    DAT_04567a68 = 1;
  }
  if (KOANCCDDBDA == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  iVar2 = System_Text_StringBuilder__get_Length(KOANCCDDBDA,(MethodInfo *)0x0);
  if (iVar2 != 0) {
                    /* try { // try from 0345e630 to 0355e63b has its CatchHandler @ 0345e66c */
                    /* try { // try from 0345e63c to 0355e65f has its CatchHandler @ 0345e544 */
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
    bVar1 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0345e660 to 0355e663 has its CatchHandler @ 0345e668 */
    if (!bVar1) {
                    /* try { // try from 0345e664 to 0355e687 has its CatchHandler @ 0345e544 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345e660 with catch @ 0345e668
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345e630 with catch @ 0345e66c
                        */
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345e618 with catch @ 0345e670
                        */
        thunk_FUN_01ba7564();
      }
      pSVar3 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
      NEHNBJKKABI__GLNBJGJPBFD(pSVar3,(MethodInfo *)0x0);
    }
                    /* try { // try from 0345e688 to 0355e68b has its CatchHandler @ 0345e6ac */
                    /* try { // try from 0345e68c to 0355e6b3 has its CatchHandler @ 0345e544 */
    uVar4 = (*(KOANCCDDBDA->klass->vtable)._3_ToString.methodPtr)
                      (KOANCCDDBDA,(KOANCCDDBDA->klass->vtable)._3_ToString.method);
    System_Text_StringBuilder__set_Length(KOANCCDDBDA,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345e688 with catch @ 0345e6ac */
    __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
                    /* try { // try from 0345e6b4 to 0355e6bb has its CatchHandler @ 0345e6d0 */
                    /* try { // try from 0345e6bc to 0355e6c7 has its CatchHandler @ 0345e544 */
    System_IO_FileInfo___ctor(__this_00,PCEBDAPOGOO,(MethodInfo *)0x0);
    if (__this_00 == (System_IO_FileInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0345e6c8 to 0355e6cf has its CatchHandler @ 0345e6d0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0345e6b4 with catch @ 0345e6d0
                       catch(type#2 @ 00000000) { ... } // from try @ 0345e6c8 with catch @ 0345e6d0
                        */
    uVar5 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
                    /* try { // try from 0345e6d4 to 0355e9cf has its CatchHandler @ 0345e6d4
                       catch() { ... } // from try @ 0345e6d4 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345eb84 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ed28 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ee80 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ee88 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345eeb4 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ef08 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345eff8 with catch @ 0345e6d4 */
    if ((uVar5 & 1) == 0) {
      pSVar6 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
      if (pSVar6 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar6->klass->vtable)._19_Close.methodPtr)
                (pSVar6,(pSVar6->klass->vtable)._19_Close.method);
    }
    pSVar7 = System_IO_FileInfo__AppendText(__this_00,(MethodInfo *)0x0);
    uVar5 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
    if (((uVar5 & 1) == 0) ||
       (iVar8 = System_IO_FileInfo__get_Length(__this_00,(MethodInfo *)0x0), iVar8 == 0)) {
      if (pSVar7 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    else {
      if (pSVar7 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar7->klass->vtable)._16_Write.methodPtr)
                (pSVar7,StringLiteral_47,(pSVar7->klass->vtable)._16_Write.method);
    }
    (*(pSVar7->klass->vtable)._16_Write.methodPtr)
              (pSVar7,uVar4,(pSVar7->klass->vtable)._16_Write.method);
    (*(pSVar7->klass->vtable)._8_Close.methodPtr)(pSVar7,(pSVar7->klass->vtable)._8_Close.method);
  }
  return;
}

