// LEGDPJHPEOB$$IHMGPDIJFCI @ RVA 0x354DCCC

void LEGDPJHPEOB__IHMGPDIJFCI
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  int32_t iVar3;
  EEGDOGKBLNG_o *__this_00;
  EOLFEKNCPLM_o *pEVar4;
  OBCMNBDBNFO_o *pOVar5;
  System_String_o *pSVar6;
  float __this_01;
  double dVar7;
  float fVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  Il2CppMethodPointer local_38;
  
  if ((DAT_04568b32 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_10320);
    FUN_01bab630(&StringLiteral_4918);
    FUN_01bab630(&StringLiteral_10825);
    FUN_01bab630(&StringLiteral_10990);
    FUN_01bab630(&StringLiteral_3268);
    FUN_01bab630(&StringLiteral_10319);
    FUN_01bab630(&StringLiteral_14958);
    FUN_01bab630(&StringLiteral_5072);
    DAT_04568b32 = 1;
  }
  _local_40 = (Il2CppMethodPointer)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 == (EEGDOGKBLNG_o *)0x0) {
    return;
  }
  pEVar4 = EEGDOGKBLNG__ELHLAJNJAKD(__this_00,(MethodInfo *)0x0);
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364e0b0;
  pSVar6 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(pSVar6,(MethodInfo *)0x0);
  if (uVar2 < 0x525430c9) {
    if (uVar2 < 0x44387d0c) {
      if (uVar2 != 0x3dda09d7) {
        if (uVar2 != 0x44387d0b) {
          return;
        }
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_14958,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        pOVar5 = (pEVar4->fields).PLJJCOHGICK;
        if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
        fVar8 = ((float)(pOVar5->fields).MGFICIOBKAI * 100.0) / (float)(pOVar5->fields).HHNJEEMAEIH;
        dVar7 = modf((double)fVar8,(double *)&stack0xffffffffffffffc8);
        if (0.0 <= fVar8) {
          if (dVar7 == 0.5) {
            fVar8 = 1.0;
            goto LAB_0364e068;
          }
          __this_01 = (float)(int)(fVar8 + 0.5);
        }
        else if (dVar7 == -0.5) {
          fVar8 = -1.0;
LAB_0364e068:
          __this_01 = (float)(double)local_38;
          if (((long)(double)local_38 & 1U) != 0) {
            __this_01 = (float)(double)local_38 + fVar8;
          }
        }
        else {
          __this_01 = (float)(int)(fVar8 + -0.5);
        }
        _local_40 = (Il2CppMethodPointer)CONCAT44(uStack_3c,__this_01);
        pSVar6 = System_Single__ToString(__this_01,(MethodInfo *)&stack0xffffffffffffffc0);
        goto joined_r0x0364debc;
      }
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_3268,(MethodInfo *)0x0);
      if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
        return;
      }
      if (!bVar1) {
        return;
      }
      pOVar5 = (pEVar4->fields).PLJJCOHGICK;
      if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
      iVar3 = (pOVar5->fields).JEAFOMDCLHD;
LAB_0364e018:
      _local_40 = (Il2CppMethodPointer)CONCAT44(iVar3,local_40);
    }
    else {
      if (uVar2 == 0x45b876a8) {
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10825,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        pOVar5 = (pEVar4->fields).PLJJCOHGICK;
        if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
        iVar3 = (pOVar5->fields).HHNJEEMAEIH;
        goto LAB_0364e018;
      }
      if (uVar2 != 0x525430c8) {
        return;
      }
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_5072,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      iVar3 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
      _local_40 = (Il2CppMethodPointer)CONCAT44(iVar3,local_40);
    }
    pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffffc4,(MethodInfo *)0x0);
  }
  else {
    if (0xcada1cce < uVar2) {
      if (uVar2 == 0xead208ea) {
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10990,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        pOVar5 = (pEVar4->fields).PLJJCOHGICK;
        if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
        iVar3 = (pOVar5->fields).MGFICIOBKAI;
      }
      else {
        if (uVar2 != 0xf0fdf9a7) {
          return;
        }
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_4918,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        iVar3 = (pEVar4->fields).IINFDIJOFIG;
      }
      goto LAB_0364e018;
    }
    if (uVar2 == 0x904e4983) {
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10319,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pSVar6 = EEGDOGKBLNG__GKMAFGODLLG(__this_00,(MethodInfo *)0x0);
    }
    else {
      if (uVar2 != 0xcada1cce) {
        return;
      }
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10320,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pSVar6 = EEGDOGKBLNG__GGHGAIBPPJO(__this_00,(MethodInfo *)0x0);
    }
  }
joined_r0x0364debc:
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
    (JDGILABGBGH->fields).HPACPFLKHPK = pSVar6;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar6);
    return;
  }
LAB_0364e0b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

