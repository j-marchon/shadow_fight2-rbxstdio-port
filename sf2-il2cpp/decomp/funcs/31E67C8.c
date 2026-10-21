// PNGKLCHKPEO$$FNBPOBHFGHG @ RVA 0x31E67C8

IEFEBEDLHNN_o *
PNGKLCHKPEO__FNBPOBHFGHG(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar3;
  IEFEBEDLHNN_o *pIVar4;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  IEFEBEDLHNN_o *pIVar7;
  undefined8 uVar8;
  IEFEBEDLHNN_o *pIVar9;
  CNDPAJOLKFN_o *pCVar10;
  CNDPAJOLKFN_o *pCVar11;
  float fVar12;
  float fVar13;
  int32_t local_24;
  
  if ((DAT_04566d62 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5429);
    DAT_04566d62 = 1;
  }
  pPVar3 = PNGKLCHKPEO__NHADNNDDNGI(__this,AHEFOIOKDOK,method);
  if (pPVar3 == (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0) goto LAB_032e698c;
  pIVar4 = (pPVar3->fields).LNBKBMNLJNG;
  if (pIVar4 == (IEFEBEDLHNN_o *)0x0) {
    uVar2 = (__this->fields).LOAFPIOGJAF;
    if (uVar2 < 2) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e698c;
      pIVar7 = (AHEFOIOKDOK->fields).BGAPCCDBNIC;
    }
    else if (uVar2 == 2) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e698c;
      pIVar7 = (AHEFOIOKDOK->fields).GFMPIKGOBNK;
    }
    else if (uVar2 == 3) {
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_032e698c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar7 = (AHEFOIOKDOK->fields).BBMAEBKPDKD;
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).LOAFPIOGJAF;
      pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) goto LAB_032e698c;
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
        uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar8,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar5;
      thunk_FUN_01c20e04(args->m_Items,pIVar5);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_5429,args,(MethodInfo *)0x0);
      pIVar7 = (IEFEBEDLHNN_o *)0x0;
    }
  }
  else {
    pIVar9 = (pIVar4->fields).GAFCPEOANDD;
    pIVar7 = pIVar4;
    if (pIVar9 != (IEFEBEDLHNN_o *)0x0) {
      if (((AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) ||
          (pCVar10 = (pIVar4->fields).CNMHHKAMGPI, pCVar10 == (CNDPAJOLKFN_o *)0x0)) ||
         (pCVar11 = (pIVar9->fields).CNMHHKAMGPI, pCVar11 == (CNDPAJOLKFN_o *)0x0))
      goto LAB_032e698c;
      iVar1 = (AHEFOIOKDOK->fields).JDNEMNOMLIC;
      fVar13 = (float)(AHEFOIOKDOK->fields).FOJEHKCDKFH;
      fVar12 = (pCVar11->fields).super.OHHDBINAJCB * fVar13;
      fVar13 = (pCVar10->fields).super.OHHDBINAJCB * fVar13;
      pIVar7 = pIVar9;
      if ((iVar1 != 2 || fVar13 <= fVar12) && (iVar1 != 1 || fVar12 < fVar13)) {
        pIVar7 = pIVar4;
      }
    }
  }
  return pIVar7;
}

