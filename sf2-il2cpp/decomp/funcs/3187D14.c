// GJAEIBMAFGE$$MICKHLIJECC @ RVA 0x3187D14

int32_t GJAEIBMAFGE__MICKHLIJECC(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

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
  
  method_00 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
                    /* catch() { ... } // from try @ 03287b9c with catch @ 03287d18
                       catch() { ... } // from try @ 03287c94 with catch @ 03287d18
                       catch() { ... } // from try @ 03287d10 with catch @ 03287d18 */
  if ((DAT_045669ea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_7113);
    FUN_01bab630(&StringLiteral_15489);
    DAT_045669ea = 1;
    method_00 = extraout_x1;
  }
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pMVar2 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
  if (pMVar2 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
    if (MFMKPNIGADN == 0x67) {
      if (-1 < BMPJIDHGCBN) {
        __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        if (__this == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) goto LAB_03288058;
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
        if (BMPJIDHGCBN < iVar1) {
          pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
          local_34 = OHLKNCPBCBL;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_34);
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03288058;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03288060;
          if ((int)pSVar3->max_length == 0) goto LAB_0328805c;
          pSVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
          pSVar8 = (pMVar2->fields).PHPELPFMOII;
          if ((pSVar8 != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03288060;
          if ((uint)pSVar3->max_length < 2) goto LAB_0328805c;
          pSVar3->m_Items[1] = (Il2CppObject *)pSVar8;
          thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar8);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(StringLiteral_15489,pSVar3,(MethodInfo *)0x0);
        }
      }
      if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
      if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
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
      iVar1 = GJAEIBMAFGE__NICPFLNLBFL(MFMKPNIGADN,OHLKNCPBCBL,method);
      if (iVar1 == -1) {
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        local_38 = OHLKNCPBCBL;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_38);
        if (pSVar3 != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) {
LAB_03288060:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pSVar3->max_length != 0) {
            pSVar3->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
            pSVar8 = (pMVar2->fields).PHPELPFMOII;
            if ((pSVar8 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar8,(((pSVar3->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03288060;
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
LAB_0328805c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
      else {
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0)
        ;
        if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
          iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                            (pSVar6,iVar1,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
          return iVar1;
        }
      }
    }
  }
LAB_03288058:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

