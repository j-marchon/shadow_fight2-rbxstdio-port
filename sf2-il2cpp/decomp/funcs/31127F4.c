// PCKJEMMFMKL$$EIKKAJGLONF @ RVA 0x31127F4

bool PCKJEMMFMKL__EIKKAJGLONF
               (PCKJEMMFMKL_o *__this,int32_t PNPNABNPLHC,bool *FFMNJACCDJE,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  PCKJEMMFMKL_OMJBBKMFKIJ_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  PCKJEMMFMKL_OMJBBKMFKIJ_Fields *pPVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  method_00 = (MethodInfo *)FFMNJACCDJE;
  if ((DAT_04566590 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_15421);
    FUN_01bab630(&StringLiteral_15422);
    DAT_04566590 = 1;
  }
  pPVar3 = PCKJEMMFMKL__NNAIMOIPHEE(__this,PNPNABNPLHC,method_00);
  if (pPVar3 == (PCKJEMMFMKL_OMJBBKMFKIJ_o *)0x0) {
    pSVar4 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_50 = CONCAT44(local_50._4_4_,PNPNABNPLHC);
    pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(MPAKDCNMLEG_TypeInfo,&local_50);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 == (Il2CppObject *)0x0) ||
         (lVar6 = thunk_FUN_01bda71c(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 != 0))
      {
        if ((int)pSVar4->max_length != 0) {
          pSVar4->m_Items[0] = pIVar5;
          thunk_FUN_01c20e04(pSVar4->m_Items,pIVar5);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_15421,pSVar4,(MethodInfo *)0x0);
          return false;
        }
        goto LAB_03212a74;
      }
      goto LAB_03212a7c;
    }
  }
  else {
    CVar9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__CIJLADMHKHJ
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar3->fields).NAPLAGMJMDM.fields,(MethodInfo *)0x0);
    (pPVar3->fields).NAPLAGMJMDM.fields = CVar9;
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar9,(MethodInfo *)0x0);
    pPVar8 = &pPVar3->fields;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)(pPVar8->HFBHMJBLLOI).fields
                       ,(MethodInfo *)0x0);
    *FFMNJACCDJE = iVar2 <= iVar1;
    pSVar4 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
    uStack_48._0_4_ = (pPVar3->fields).NAPLAGMJMDM.fields.fakeValue;
    uStack_48._4_1_ = (pPVar3->fields).NAPLAGMJMDM.fields.fakeValueActive;
    uStack_48._5_1_ = (pPVar3->fields).NAPLAGMJMDM.fields.inited;
    uStack_48._6_2_ = *(undefined2 *)&(pPVar3->fields).NAPLAGMJMDM.fields.field_0xe;
    local_50._0_4_ = (pPVar3->fields).NAPLAGMJMDM.fields.currentCryptoKey;
    local_50._4_4_ = (pPVar3->fields).NAPLAGMJMDM.fields.hiddenValue;
    pIVar5 = (Il2CppObject *)
             thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_50);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      {
LAB_03212a7c:
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar7,0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar5;
        thunk_FUN_01c20e04(pSVar4->m_Items,pIVar5);
        uStack_58._0_4_ = (pPVar3->fields).HFBHMJBLLOI.fields.fakeValue;
        uStack_58._4_1_ = (pPVar3->fields).HFBHMJBLLOI.fields.fakeValueActive;
        uStack_58._5_1_ = (pPVar3->fields).HFBHMJBLLOI.fields.inited;
        uStack_58._6_2_ = *(undefined2 *)&(pPVar3->fields).HFBHMJBLLOI.fields.field_0xe;
        local_60._0_4_ = (pPVar8->HFBHMJBLLOI).fields.currentCryptoKey;
        local_60._4_4_ = (pPVar8->HFBHMJBLLOI).fields.hiddenValue;
        pIVar5 = (Il2CppObject *)
                 thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,&local_60
                                   );
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (lVar6 = thunk_FUN_01bda71c(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0
           )) goto LAB_03212a7c;
        if (1 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[1] = pIVar5;
          thunk_FUN_01c20e04(pSVar4->m_Items + 1,pIVar5);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogFormat(StringLiteral_15422,pSVar4,(MethodInfo *)0x0);
          if (*FFMNJACCDJE != false) {
            CVar9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
            (pPVar3->fields).NAPLAGMJMDM.fields = CVar9;
          }
          return true;
        }
      }
LAB_03212a74:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

