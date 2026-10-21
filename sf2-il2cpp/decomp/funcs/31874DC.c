// GJAEIBMAFGE$$LMHEANOFFIP @ RVA 0x31874DC

System_String_o *
GJAEIBMAFGE__LMHEANOFFIP(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int MFMKPNIGADN;
  int32_t iVar1;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar2;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar7;
  System_Enum_o local_48;
  int32_t local_38;
  
  method_00 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
  if ((DAT_045669e8 & 1) == 0) {
                    /* try { // try from 03287508 to 0338750f has its CatchHandler @ 032875b0 */
                    /* try { // try from 03287510 to 03387513 has its CatchHandler @ 03287598 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
                    /* try { // try from 03287524 to 03387543 has its CatchHandler @ 0328766c */
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15490);
                    /* try { // try from 03287544 to 03387547 has its CatchHandler @ 03287588 */
                    /* try { // try from 03287548 to 0338754b has its CatchHandler @ 03287584 */
                    /* try { // try from 0328754c to 03387553 has its CatchHandler @ 0328757c */
    FUN_01bab630(&StringLiteral_7114);
                    /* try { // try from 03287554 to 03387557 has its CatchHandler @ 03286ea4 */
                    /* try { // try from 03287558 to 0338755b has its CatchHandler @ 03287570 */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 0328755c to 033875cb has its CatchHandler @ 03286ea4 */
    DAT_045669e8 = 1;
    method_00 = extraout_x1;
  }
                    /* catch() { ... } // from try @ 032873f8 with catch @ 03287564 */
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03287558 with catch @ 03287570 */
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
                    /* catch() { ... } // from try @ 03287384 with catch @ 03287574 */
                    /* catch() { ... } // from try @ 0328715c with catch @ 03287578 */
  pMVar2 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
                    /* catch() { ... } // from try @ 0328754c with catch @ 0328757c */
  if (pMVar2 == (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) goto LAB_032877d0;
                    /* catch() { ... } // from try @ 03287144 with catch @ 03287580 */
  MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
                    /* catch() { ... } // from try @ 03287548 with catch @ 03287584 */
                    /* catch() { ... } // from try @ 03287544 with catch @ 03287588 */
                    /* catch() { ... } // from try @ 03287130 with catch @ 0328758c */
  if (MFMKPNIGADN == 0x67) {
                    /* catch() { ... } // from try @ 03287174 with catch @ 03287590 */
    local_38 = OHLKNCPBCBL;
    if (-1 < BMPJIDHGCBN) {
                    /* catch() { ... } // from try @ 03287118 with catch @ 03287594 */
                    /* catch() { ... } // from try @ 03287510 with catch @ 03287598 */
      __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03287100 with catch @ 0328759c */
      if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* catch() { ... } // from try @ 032870f0 with catch @ 032875a0 */
                    /* catch() { ... } // from try @ 032872fc with catch @ 032875a4 */
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03287088 with catch @ 032875a8 */
                    /* catch() { ... } // from try @ 0328702c with catch @ 032875ac */
        if (iVar1 <= BMPJIDHGCBN) goto LAB_032876c8;
                    /* catch() { ... } // from try @ 03287508 with catch @ 032875b0 */
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* try { // try from 032875cc to 033875cf has its CatchHandler @ 032875e0 */
        local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,OHLKNCPBCBL);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_48);
                    /* catch() { ... } // from try @ 032875cc with catch @ 032875e0 */
        if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 032875f0 to 03387657 has its CatchHandler @ 0328766c */
          if ((pIVar4 == (Il2CppObject *)0x0) ||
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 != 0)) {
            if ((int)pSVar3->max_length != 0) {
              pSVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
              pSVar7 = (pMVar2->fields).PHPELPFMOII;
              if ((pSVar7 != (System_String_o *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(pSVar7,(((pSVar3->obj).klass)->_1).element_class),
                 lVar5 == 0)) goto LAB_032877d8;
              if (1 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[1] = (Il2CppObject *)pSVar7;
                thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar7);
                    /* try { // try from 03287658 to 03387663 has its CatchHandler @ 03286ea4 */
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03287664 to 0338766b has its CatchHandler @ 0328766c */
                  thunk_FUN_01ba7564();
                }
                    /* catch() { ... } // from try @ 032874b8 with catch @ 0328766c
                       catch() { ... } // from try @ 03287524 with catch @ 0328766c
                       catch() { ... } // from try @ 032875f0 with catch @ 0328766c
                       catch() { ... } // from try @ 03287664 with catch @ 0328766c */
                    /* try { // try from 03287670 to 0338784f has its CatchHandler @ 03287670
                       catch() { ... } // from try @ 03287670 with catch @ 03287670
                       catch() { ... } // from try @ 03287ab8 with catch @ 03287670
                       catch() { ... } // from try @ 03287ad4 with catch @ 03287670
                       catch() { ... } // from try @ 03287bd4 with catch @ 03287670
                       catch() { ... } // from try @ 03287be0 with catch @ 03287670
                       catch() { ... } // from try @ 03287d04 with catch @ 03287670 */
                UnityEngine_Debug__LogFormat(StringLiteral_15490,pSVar3,(MethodInfo *)0x0);
                goto LAB_032876c8;
              }
            }
            goto LAB_032877d4;
          }
          goto LAB_032877d8;
        }
      }
LAB_032877d0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_38 = GJAEIBMAFGE__NICPFLNLBFL(MFMKPNIGADN,OHLKNCPBCBL,method);
    if (local_38 == -1) {
      pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,OHLKNCPBCBL);
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_48);
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_032877d0;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0))
      {
LAB_032877d8:
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
        pSVar7 = (pMVar2->fields).PHPELPFMOII;
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar7,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0
           )) goto LAB_032877d8;
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = (Il2CppObject *)pSVar7;
          thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar7);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_7114,pSVar3,(MethodInfo *)0x0);
          return StringLiteral_1;
        }
      }
LAB_032877d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_032876c8:
  local_48.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  pSVar7 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  return pSVar7;
}

