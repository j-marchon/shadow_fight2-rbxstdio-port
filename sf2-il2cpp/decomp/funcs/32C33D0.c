// FEPCHKMAIBL$$JHDFNPOBMKH @ RVA 0x32C33D0

void FEPCHKMAIBL__JHDFNPOBMKH(MethodInfo *method)

{
  IGFGDDANEPE_o *__this;
  int64_t iVar1;
  System_Object_array *args;
  undefined8 uVar2;
  ACHLOMELAJE_o *pAVar3;
  HOOAAGABMBL_o *pHVar4;
  GGHCLMEFIGO_o *__this_00;
  int64_t val1;
  System_String_o *pSVar5;
  long lVar6;
  
  if ((DAT_045674dc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15587);
    DAT_045674dc = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar3->fields).OIDPLCLELEN;
    if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
      __this = GGHCLMEFIGO__JNFIBDBHNOA
                         (__this_00,FEPCHKMAIBL_TypeInfo->static_fields->AIGNPODKOAH,
                          (MethodInfo *)0x0);
      if (__this != (IGFGDDANEPE_o *)0x0) {
        iVar1 = IGFGDDANEPE__OMMIKNKEKJN(__this,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM <= iVar1) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b87 == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b87 = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          val1 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
          iVar1 = IGFGDDANEPE__OMMIKNKEKJN(__this,(MethodInfo *)0x0);
          if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(FEPCHKMAIBL_TypeInfo);
          }
          lVar6 = FEPCHKMAIBL_TypeInfo->static_fields->JKIEAGJNDFE;
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar1 = System_Math__Max(val1,iVar1 - lVar6,(MethodInfo *)0x0);
          IGFGDDANEPE__DOOKHLFKCAI(__this,iVar1,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            pHVar4 = FEPCHKMAIBL_TypeInfo->static_fields->AIGNPODKOAH;
            if ((pHVar4 != (HOOAAGABMBL_o *)0x0) && (args != (System_Object_array *)0x0)) {
              pSVar5 = (pHVar4->fields)._COIPKAKHDFP_k__BackingField;
              if ((pSVar5 != (System_String_o *)0x0) &&
                 (lVar6 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class),
                 lVar6 == 0)) {
                uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar2,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)pSVar5;
                thunk_FUN_01c20e04(args->m_Items,pSVar5);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogFormat(StringLiteral_15587,args,(MethodInfo *)0x0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
          }
          goto LAB_033c36e0;
        }
      }
      return;
    }
  }
LAB_033c36e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

