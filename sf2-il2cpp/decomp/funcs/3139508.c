// NJNCPNBIPCD$$OBKJNJBOBJA @ RVA 0x3139508

System_String_o *
NJNCPNBIPCD__OBKJNJBOBJA
          (NJNCPNBIPCD_o *__this,int32_t FEDCJPALCBN,System_String_array *OPAEPDIIOEB,
          MethodInfo *method)

{
  int DPJIDNBJIBG;
  bool bVar1;
  System_Nullable_bool__o SVar2;
  uint32_t uVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Nullable_float__o SVar6;
  float *pfVar7;
  int32_t *piVar8;
  System_Nullable_int__o SVar9;
  int32_t iVar10;
  undefined8 *puVar11;
  bool_conflict *pbVar12;
  float extraout_s0;
  float fVar13;
  float extraout_s0_00;
  float extraout_s0_01;
  
  if ((DAT_0456671a & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&StringLiteral_19569);
    FUN_01bab630(&StringLiteral_17293);
    FUN_01bab630(&StringLiteral_16289);
    FUN_01bab630(&StringLiteral_19676);
    FUN_01bab630(&StringLiteral_16909);
    FUN_01bab630(&StringLiteral_16383);
    FUN_01bab630(&StringLiteral_17294);
    FUN_01bab630(&StringLiteral_17291);
    FUN_01bab630(&StringLiteral_16489);
    FUN_01bab630(&StringLiteral_17286);
    FUN_01bab630(&StringLiteral_17290);
    FUN_01bab630(&StringLiteral_17285);
    FUN_01bab630(&StringLiteral_20625);
    FUN_01bab630(&StringLiteral_16269);
    FUN_01bab630(&StringLiteral_17292);
    FUN_01bab630(&StringLiteral_17287);
    FUN_01bab630(&StringLiteral_18707);
    FUN_01bab630(&StringLiteral_17288);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_17853);
    FUN_01bab630(&StringLiteral_17289);
    FUN_01bab630(&StringLiteral_21864);
    DAT_0456671a = 1;
  }
  pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(FEDCJPALCBN,OPAEPDIIOEB,(MethodInfo *)0x0);
  pSVar5 = StringLiteral_1;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar5 = pSVar4;
  }
  if (pSVar5 == (System_String_o *)0x0) goto LAB_03239c08;
  pSVar5 = System_String__ToLower(pSVar5,(MethodInfo *)0x0);
  DPJIDNBJIBG = FEDCJPALCBN + 1;
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar5,(MethodInfo *)0x0);
  if (uVar3 < 0x4e208a30) {
    if (uVar3 < 0x1f47f0eb) {
      if (uVar3 == 0x1cd8c23d) {
        bVar1 = System_String__op_Equality(pSVar5,StringLiteral_17853,(MethodInfo *)0x0);
        if (!bVar1) {
          return StringLiteral_16909;
        }
        SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
        if (__this == (NJNCPNBIPCD_o *)0x0) goto LAB_03239c08;
        iVar10 = SVar9.fields.value;
        if (((ulong)SVar9.fields & 0xff) == 0) {
          iVar10 = -1;
        }
        piVar8 = &(__this->fields).BJEIJEJKHJO;
        *piVar8 = iVar10;
        pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
        puVar11 = &StringLiteral_17291;
      }
      else {
        if ((uVar3 != 0x1f47f0ea) ||
           (bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16269,(MethodInfo *)0x0), !bVar1
           )) {
          return StringLiteral_16909;
        }
        SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
        fVar13 = extraout_s0;
        if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
          fVar13 = (float)thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo);
        }
        pfVar7 = &NJNCPNBIPCD_TypeInfo->static_fields->MDCGJFFAJAP;
        *pfVar7 = SVar6.fields.value;
        pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
        puVar11 = &StringLiteral_17286;
      }
    }
    else if (uVar3 == 0x3e8f5f02) {
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_21864,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909;
      }
      SVar2 = AJAMDCEKAFE__FAEBPLENEGK(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      pbVar12 = &(__this->fields).GKIMOMJACDC;
      *pbVar12 = (ushort)SVar2.fields >> 8 != 0;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = System_Boolean__ToString(SUB81(pbVar12,0),(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17294;
    }
    else if (uVar3 == 0x4d5463ff) {
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_20625,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909;
      }
      SVar2 = AJAMDCEKAFE__FAEBPLENEGK(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (__this == (NJNCPNBIPCD_o *)0x0) goto LAB_03239c08;
      pbVar12 = &(__this->fields).FJKKGKCJMGB;
      *pbVar12 = ((ushort)SVar2.fields & 0xff) == 0 || ((ushort)SVar2.fields & 0xff00) != 0;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = System_Boolean__ToString(SUB81(pbVar12,0),(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17293;
    }
    else {
      if (uVar3 != 0x4e208a2f) {
        return StringLiteral_16909;
      }
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_18707,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909;
      }
      SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (__this == (NJNCPNBIPCD_o *)0x0) {
LAB_03239c08:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar13 = 1.0;
      if (((ulong)SVar6.fields & 0xff) != 0) {
        fVar13 = SVar6.fields.value;
      }
      pfVar7 = &(__this->fields).PACHINKIODC;
      *pfVar7 = fVar13;
      pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
      puVar11 = &StringLiteral_17292;
    }
  }
  else if (uVar3 < 0xbc004aae) {
    if (uVar3 == 0x9ec2ba18) {
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16289,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909;
      }
      SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo);
      }
      piVar8 = &NJNCPNBIPCD_TypeInfo->static_fields->JHMDBNGCKNN;
      *piVar8 = SVar9.fields.value;
      pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17285;
    }
    else {
      if (uVar3 != 0xbc004aad) {
        return StringLiteral_16909;
      }
      bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16489,(MethodInfo *)0x0);
      if (!bVar1) {
        return StringLiteral_16909;
      }
      SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
      if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo);
      }
      piVar8 = &NJNCPNBIPCD_TypeInfo->static_fields->DKDPLLLACKC;
      *piVar8 = SVar9.fields.value;
      pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
      puVar11 = &StringLiteral_17287;
    }
  }
  else if (uVar3 == 0xc38f3be5) {
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19676,(MethodInfo *)0x0);
    if (!bVar1) {
      return StringLiteral_16909;
    }
    SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
    fVar13 = extraout_s0_01;
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      fVar13 = (float)thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo);
    }
    pfVar7 = &NJNCPNBIPCD_TypeInfo->static_fields->KCDGBMIGCND;
    *pfVar7 = SVar6.fields.value;
    pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
    puVar11 = &StringLiteral_17290;
  }
  else if (uVar3 == 0xe940c3d2) {
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_16383,(MethodInfo *)0x0);
    if (!bVar1) {
      return StringLiteral_16909;
    }
    SVar9 = AJAMDCEKAFE__NANCFCIGNEE(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo);
    }
    piVar8 = &NJNCPNBIPCD_TypeInfo->static_fields->DPNIFBNEBLB;
    *piVar8 = SVar9.fields.value;
    pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
    puVar11 = &StringLiteral_17288;
  }
  else {
    if (uVar3 != 0xf3a30f2d) {
      return StringLiteral_16909;
    }
    bVar1 = System_String__op_Equality(pSVar5,StringLiteral_19569,(MethodInfo *)0x0);
    if (!bVar1) {
      return StringLiteral_16909;
    }
    SVar6 = AJAMDCEKAFE__FOKFAIPDIMB(DPJIDNBJIBG,OPAEPDIIOEB,(MethodInfo *)0x0);
    fVar13 = extraout_s0_00;
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      fVar13 = (float)thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo);
    }
    pfVar7 = &NJNCPNBIPCD_TypeInfo->static_fields->CGOPLAKCJDF;
    *pfVar7 = SVar6.fields.value;
    pSVar5 = System_Single__ToString(fVar13,(MethodInfo *)pfVar7);
    puVar11 = &StringLiteral_17289;
  }
  pSVar5 = System_String__Concat((System_String_o *)*puVar11,pSVar5,(MethodInfo *)0x0);
  return pSVar5;
}

