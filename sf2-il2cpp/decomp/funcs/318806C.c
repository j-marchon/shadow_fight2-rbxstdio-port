// GJAEIBMAFGE$$DKFPOGDFDMP @ RVA 0x318806C

System_String_o *
GJAEIBMAFGE__DKFPOGDFDMP(int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,MethodInfo *method)

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
  if ((DAT_045669eb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&MIBHAJBEMIK_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15490);
    FUN_01bab630(&StringLiteral_7114);
    FUN_01bab630(&StringLiteral_1);
    DAT_045669eb = 1;
    method_00 = extraout_x1;
  }
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pMVar2 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,method_00);
  if (pMVar2 == (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) goto LAB_03288360;
  MFMKPNIGADN = (pMVar2->fields).DOKHHBGJICA;
  if (MFMKPNIGADN == 0x67) {
    local_38 = OHLKNCPBCBL;
    if (-1 < BMPJIDHGCBN) {
      __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
      if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
        iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                          (__this,(MethodInfo *)0x0);
        if (iVar1 <= BMPJIDHGCBN) goto LAB_03288258;
        pSVar3 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        local_48.klass = (System_Enum_c *)CONCAT44(local_48.klass._4_4_,OHLKNCPBCBL);
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(MIBHAJBEMIK_TypeInfo,&local_48);
        if (pSVar3 != (System_Object_array *)0x0) {
          if ((pIVar4 == (Il2CppObject *)0x0) ||
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 != 0)) {
            if ((int)pSVar3->max_length != 0) {
              pSVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pSVar3->m_Items,pIVar4);
              pSVar7 = (pMVar2->fields).PHPELPFMOII;
              if ((pSVar7 != (System_String_o *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(pSVar7,(((pSVar3->obj).klass)->_1).element_class),
                 lVar5 == 0)) goto LAB_03288368;
              if (1 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[1] = (Il2CppObject *)pSVar7;
                thunk_FUN_01c20e04(pSVar3->m_Items + 1,pSVar7);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogFormat(StringLiteral_15490,pSVar3,(MethodInfo *)0x0);
                goto LAB_03288258;
              }
            }
            goto LAB_03288364;
          }
          goto LAB_03288368;
        }
      }
LAB_03288360:
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
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_03288360;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0))
      {
LAB_03288368:
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
           )) goto LAB_03288368;
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
LAB_03288364:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_03288258:
  local_48.klass = (System_Enum_c *)MIBHAJBEMIK_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  pSVar7 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  return pSVar7;
}

