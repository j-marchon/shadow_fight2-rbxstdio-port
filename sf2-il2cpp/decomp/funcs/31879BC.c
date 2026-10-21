// GJAEIBMAFGE$$CKEMOGMODFK @ RVA 0x31879BC

int32_t GJAEIBMAFGE__CKEMOGMODFK(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int MFMKPNIGADN;
  int32_t iVar1;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar2;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Collections_Generic_List_T__o *pSVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar8;
  int32_t local_38;
  int32_t local_34;
  
                    /* try { // try from 032879bc to 033879c7 has its CatchHandler @ 03287c18 */
  method_00 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
                    /* try { // try from 032879d0 to 033879d7 has its CatchHandler @ 03287c1c */
                    /* try { // try from 032879e0 to 033879f3 has its CatchHandler @ 03287c0c */
  if ((DAT_045669e9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
                    /* try { // try from 03287a0c to 03387a17 has its CatchHandler @ 03287c04 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
                    /* try { // try from 03287a30 to 03387a37 has its CatchHandler @ 03287ac0 */
    FUN_01bab630(&StringLiteral_7113);
                    /* try { // try from 03287a44 to 03387a53 has its CatchHandler @ 03287abc */
    FUN_01bab630(&StringLiteral_15489);
    DAT_045669e9 = 1;
    method_00 = extraout_x1;
  }
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pMVar2 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
                    /* try { // try from 03287a68 to 03387a6f has its CatchHandler @ 03287c08 */
  if (pMVar2 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
                    /* try { // try from 03287a78 to 03387a83 has its CatchHandler @ 03287c14 */
    if (MFMKPNIGADN == 0x67) {
      if (-1 < BMPJIDHGCBN) {
        __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        if (__this == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) goto LAB_03287d00;
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
                    /* try { // try from 03287a94 to 03387a9f has its CatchHandler @ 03287bfc */
        if (BMPJIDHGCBN < iVar1) {
                    /* try { // try from 03287aac to 03387ab7 has its CatchHandler @ 03287c00 */
          pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* try { // try from 03287ab8 to 03387acf has its CatchHandler @ 03287670 */
                    /* catch() { ... } // from try @ 03287a44 with catch @ 03287abc */
          local_34 = OHLKNCPBCBL;
                    /* catch() { ... } // from try @ 03287a30 with catch @ 03287ac0 */
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_34);
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03287d00;
                    /* try { // try from 03287ad0 to 03387ad3 has its CatchHandler @ 03287be8 */
                    /* try { // try from 03287ad4 to 03387b73 has its CatchHandler @ 03287670 */
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03287d08;
          if ((int)pSVar3->max_length == 0) goto LAB_03287d04;
          pSVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
          pSVar8 = (pMVar2->fields).PHPELPFMOII;
          if ((pSVar8 != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03287d08;
          if ((uint)pSVar3->max_length < 2) goto LAB_03287d04;
          pSVar3->m_Items[1] = (Il2CppObject *)pSVar8;
          thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar8);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(StringLiteral_15489,pSVar3,(MethodInfo *)0x0);
        }
      }
                    /* try { // try from 03287b74 to 03387b7b has its CatchHandler @ 03287c58 */
                    /* try { // try from 03287b7c to 03387b7f has its CatchHandler @ 03287c4c */
      if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03287b80 to 03387b83 has its CatchHandler @ 03287c34 */
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
      if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
                    /* try { // try from 03287b9c to 03387bbf has its CatchHandler @ 03287d18 */
        iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                          (pSVar6,OHLKNCPBCBL,
                           Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
        return iVar1;
      }
    }
    else {
      if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03287bc0 to 03387bc3 has its CatchHandler @ 03287c30 */
      iVar1 = GJAEIBMAFGE__NICPFLNLBFL(MFMKPNIGADN,OHLKNCPBCBL,method);
                    /* try { // try from 03287bc4 to 03387bc7 has its CatchHandler @ 03287c2c */
                    /* try { // try from 03287bc8 to 03387bcb has its CatchHandler @ 03287c20 */
      if (iVar1 == -1) {
                    /* catch() { ... } // from try @ 032879bc with catch @ 03287c18 */
                    /* catch() { ... } // from try @ 032879d0 with catch @ 03287c1c */
                    /* catch() { ... } // from try @ 03287bc8 with catch @ 03287c20 */
                    /* catch() { ... } // from try @ 03287964 with catch @ 03287c24 */
                    /* catch() { ... } // from try @ 03287974 with catch @ 03287c28 */
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* catch() { ... } // from try @ 03287bc4 with catch @ 03287c2c */
                    /* catch() { ... } // from try @ 03287bc0 with catch @ 03287c30 */
                    /* catch() { ... } // from try @ 03287b80 with catch @ 03287c34 */
                    /* catch() { ... } // from try @ 03287950 with catch @ 03287c38 */
        local_38 = OHLKNCPBCBL;
                    /* catch() { ... } // from try @ 03287938 with catch @ 03287c3c */
                    /* catch() { ... } // from try @ 03287994 with catch @ 03287c40 */
                    /* catch() { ... } // from try @ 03287914 with catch @ 03287c44 */
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_38);
                    /* catch() { ... } // from try @ 03287920 with catch @ 03287c48 */
        if (pSVar3 != (System_Object_array *)0x0) {
                    /* catch() { ... } // from try @ 03287b7c with catch @ 03287c4c */
                    /* catch() { ... } // from try @ 032878ac with catch @ 03287c50 */
                    /* catch() { ... } // from try @ 03287850 with catch @ 03287c54 */
                    /* catch() { ... } // from try @ 03287b74 with catch @ 03287c58 */
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) {
LAB_03287d08:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03287d10 to 03387d17 has its CatchHandler @ 03287d18 */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pSVar3->max_length != 0) {
                    /* try { // try from 03287c70 to 03387c73 has its CatchHandler @ 03287c84 */
            pSVar3->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
            pSVar8 = (pMVar2->fields).PHPELPFMOII;
                    /* catch() { ... } // from try @ 03287c70 with catch @ 03287c84 */
                    /* try { // try from 03287c94 to 03387d03 has its CatchHandler @ 03287d18 */
            if ((pSVar8 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03287d08;
            if (1 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[1] = (Il2CppObject *)pSVar8;
              thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar8);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_7113,pSVar3,(MethodInfo *)0x0);
              return 0;
            }
          }
LAB_03287d04:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03287d04 to 03387d0f has its CatchHandler @ 03287670 */
          FUN_01bab8d0();
        }
      }
      else {
                    /* try { // try from 03287bcc to 03387bd3 has its CatchHandler @ 03287c10 */
                    /* try { // try from 03287bd4 to 03387bd7 has its CatchHandler @ 03287670 */
                    /* try { // try from 03287bd8 to 03387bdb has its CatchHandler @ 03287bf8 */
                    /* try { // try from 03287bdc to 03387bdf has its CatchHandler @ 03287bf4 */
                    /* try { // try from 03287be0 to 03387c6f has its CatchHandler @ 03287670 */
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03287ad0 with catch @ 03287be8 */
        pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0)
        ;
        if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
                    /* catch() { ... } // from try @ 03287bdc with catch @ 03287bf4 */
                    /* catch() { ... } // from try @ 03287bd8 with catch @ 03287bf8 */
                    /* catch() { ... } // from try @ 03287a94 with catch @ 03287bfc */
                    /* catch() { ... } // from try @ 03287aac with catch @ 03287c00 */
                    /* catch() { ... } // from try @ 03287a0c with catch @ 03287c04 */
                    /* catch() { ... } // from try @ 03287a68 with catch @ 03287c08 */
                    /* catch() { ... } // from try @ 032879e0 with catch @ 03287c0c */
                    /* catch() { ... } // from try @ 03287bcc with catch @ 03287c10 */
                    /* catch() { ... } // from try @ 03287a78 with catch @ 03287c14 */
          iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                            (pSVar6,iVar1,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
          return iVar1;
        }
      }
    }
  }
LAB_03287d00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

