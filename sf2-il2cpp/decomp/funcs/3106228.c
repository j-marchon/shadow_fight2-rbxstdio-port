// OPNFCOGALLI$$OCJAHBKIFNO @ RVA 0x3106228

/* WARNING: Type propagation algorithm not settling */

IEFEBEDLHNN_o *
OPNFCOGALLI__OCJAHBKIFNO
          (OPNFCOGALLI_o *__this,System_String_o *KGLJICLJHEL,int32_t OAFGMHOFEKM,MethodInfo *method
          )

{
  bool bVar1;
  uint16_t uVar2;
  GBJGJEGPHKD_o *__this_00;
  IEFEBEDLHNN_o *pIVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  CNDPAJOLKFN_o *pCVar7;
  CNDPAJOLKFN_o *pCVar8;
  IEFEBEDLHNN_o *pIVar9;
  int32_t local_24;
  
  if ((DAT_0456650b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9164);
    DAT_0456650b = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return (IEFEBEDLHNN_o *)0x0;
  }
  __this_00 = (__this->fields).KOHECBJAFKG;
  if (__this_00 != (GBJGJEGPHKD_o *)0x0) {
    pIVar3 = GBJGJEGPHKD__OCJAHBKIFNO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pIVar3 == (IEFEBEDLHNN_o *)0x0) {
      return (IEFEBEDLHNN_o *)0x0;
    }
    pIVar9 = (pIVar3->fields).GAFCPEOANDD;
    if (pIVar9 == (IEFEBEDLHNN_o *)0x0) {
      return pIVar3;
    }
    if (KGLJICLJHEL != (System_String_o *)0x0) {
      uVar2 = System_String__get_Chars
                        (KGLJICLJHEL,(KGLJICLJHEL->fields)._stringLength + -1,(MethodInfo *)0x0);
      if (OAFGMHOFEKM == -1) {
        if (uVar2 == 0x32) {
          pCVar7 = (pIVar3->fields).CNMHHKAMGPI;
          if ((pCVar7 != (CNDPAJOLKFN_o *)0x0) &&
             (pCVar8 = (pIVar9->fields).CNMHHKAMGPI, pCVar8 != (CNDPAJOLKFN_o *)0x0)) {
            if ((pCVar7->fields).super.OHHDBINAJCB < (pCVar8->fields).super.OHHDBINAJCB) {
              return pIVar9;
            }
            return pIVar3;
          }
          goto LAB_0320642c;
        }
        if (uVar2 != 0x31) {
          return (IEFEBEDLHNN_o *)0x0;
        }
      }
      else {
        if (OAFGMHOFEKM != 1) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          local_24 = OAFGMHOFEKM;
          pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
          if (args != (System_Object_array *)0x0) {
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar6,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(args->m_Items,pIVar4);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_9164,args,(MethodInfo *)0x0);
            return pIVar3;
          }
          goto LAB_0320642c;
        }
        if (uVar2 != 0x32) {
          if (uVar2 != 0x31) {
            return (IEFEBEDLHNN_o *)0x0;
          }
          pCVar7 = (pIVar3->fields).CNMHHKAMGPI;
          if ((pCVar7 != (CNDPAJOLKFN_o *)0x0) &&
             (pCVar8 = (pIVar9->fields).CNMHHKAMGPI, pCVar8 != (CNDPAJOLKFN_o *)0x0)) {
            if ((pCVar7->fields).super.OHHDBINAJCB < (pCVar8->fields).super.OHHDBINAJCB) {
              return pIVar9;
            }
            return pIVar3;
          }
          goto LAB_0320642c;
        }
      }
      pCVar7 = (pIVar3->fields).CNMHHKAMGPI;
      if ((pCVar7 != (CNDPAJOLKFN_o *)0x0) &&
         (pCVar8 = (pIVar9->fields).CNMHHKAMGPI, pCVar8 != (CNDPAJOLKFN_o *)0x0)) {
        if ((pCVar7->fields).super.OHHDBINAJCB < (pCVar8->fields).super.OHHDBINAJCB) {
          pIVar9 = pIVar3;
        }
        return pIVar9;
      }
    }
  }
LAB_0320642c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

