// TypeDefIndex 523
// Namespace: 
// public class AHMGCBGIOHN : IDLLNHJCLIF
// Fields:
//   private readonly CPABHCDGLPI HACEIKFFHJE; // 0x10

// ===== public void KKPLGNGDMJC(LADHIKFIKCJ OPAEPDIIOEB)  [RVA 0x3594924]
// AHMGCBGIOHN$$KKPLGNGDMJC @ RVA 0x3594924

void AHMGCBGIOHN__KKPLGNGDMJC(AHMGCBGIOHN_o *__this,LADHIKFIKCJ_o *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *value;
  Il2CppObject *value_00;
  VirtualInvokeData *pVVar4;
  CPABHCDGLPI_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  CPABHCDGLPI_o *pCVar8;
  double local_80;
  System_Enum_o local_78;
  int32_t local_68;
  
  if ((DAT_04568d95 & 1) == 0) {
    FUN_01bab630(&CPABHCDGLPI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&ENMDKAIJNGC_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<double>_GetValueOrDefault__);
    FUN_01bab630(&StringLiteral_18208/*"fb_format"*/);
    FUN_01bab630(&StringLiteral_18217/*"fb_platform"*/);
    FUN_01bab630(&StringLiteral_18207/*"fb_ecpm_payload"*/);
    FUN_01bab630(&StringLiteral_18220/*"fb_unit_name"*/);
    FUN_01bab630(&StringLiteral_18205/*"fb_country"*/);
    FUN_01bab630(&StringLiteral_18216/*"fb_placement"*/);
    FUN_01bab630(&StringLiteral_18206/*"fb_currency"*/);
    FUN_01bab630(&StringLiteral_18218/*"fb_revenue"*/);
    FUN_01bab630(&StringLiteral_18219/*"fb_source"*/);
    FUN_01bab630(&StringLiteral_18203/*"fb_ad_watched"*/);
    DAT_04568d95 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  local_78.klass = (System_Enum_c *)ENMDKAIJNGC_TypeInfo;
  local_78.monitor = (void *)0xffffffffffffffff;
  local_68 = (OPAEPDIIOEB->fields).JNKLGAJMIDI;
  value = System_Enum__ToString(&local_78,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18217/*"fb_platform"*/,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18205/*"fb_country"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).CEMIOJCCGLJ,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18219/*"fb_source"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).LKLPHMLAFFH,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18220/*"fb_unit_name"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).CHJCLDMEGKG,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18208/*"fb_format"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).CHGKLFADPLD,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18216/*"fb_placement"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).IDHKJLAMGJD,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18206/*"fb_currency"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).IEINLOAOCLD,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    local_80 = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.value;
    value_00 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_80);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18218/*"fb_revenue"*/,value_00,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    bVar3 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).FDBMKCCNBNI,(MethodInfo *)0x0);
    if (!bVar3) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_18207/*"fb_ecpm_payload"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).FDBMKCCNBNI,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    }
    uVar2 = StringLiteral_18203/*"fb_ad_watched"*/;
    pCVar8 = (__this->fields).HACEIKFFHJE;
    if (pCVar8 != (CPABHCDGLPI_o *)0x0) {
      pCVar5 = pCVar8->klass;
      uVar1._0_1_ = (pCVar5->_2).rank;
      uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
            pVVar4 = pCVar5->vtable + (*piVar7 + 6);
            goto LAB_03694c18;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar8,CPABHCDGLPI_TypeInfo,6);
LAB_03694c18:
      (*pVVar4->methodPtr)(pCVar8,uVar2,__this_00,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DLMMOLDNHKG(HNOIHFFENNC OPAEPDIIOEB)  [RVA 0x3594C50]
// AHMGCBGIOHN$$DLMMOLDNHKG @ RVA 0x3594C50

void AHMGCBGIOHN__DLMMOLDNHKG(AHMGCBGIOHN_o *__this,HNOIHFFENNC_o *OPAEPDIIOEB,MethodInfo *method)

{
  System_Decimal_o *value;
  MethodInfo *method_00;
  ushort uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *value_00;
  VirtualInvokeData *pVVar4;
  CPABHCDGLPI_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  uint64_t uVar8;
  CPABHCDGLPI_o *pCVar9;
  float fVar10;
  undefined4 extraout_var;
  undefined8 local_c0;
  undefined8 uStack_b8;
  System_String_o *local_b0;
  System_String_o *pSStack_a8;
  undefined8 uStack_a0;
  System_String_o *pSStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint64_t uStack_80;
  System_String_o *pSStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_04568d96 & 1) == 0) {
    FUN_01bab630(&CPABHCDGLPI_TypeInfo);
    FUN_01bab630(&System_Decimal_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&StringLiteral_18210/*"fb_iap_product_id"*/);
    FUN_01bab630(&StringLiteral_18211/*"fb_iap_product_title"*/);
    FUN_01bab630(&StringLiteral_18213/*"fb_iap_revenue"*/);
    FUN_01bab630(&StringLiteral_18212/*"fb_iap_receipt_id"*/);
    FUN_01bab630(&StringLiteral_18209/*"fb_iap_currency"*/);
    DAT_04568d96 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  uStack_b8._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.lo;
  uStack_b8._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.mid;
  local_c0._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.flags;
  local_c0._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.hi;
  pSStack_78 = (OPAEPDIIOEB->fields).IEINLOAOCLD;
  uStack_80 = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE;
  pSStack_a8 = (OPAEPDIIOEB->fields).ODNJEBGJAAD;
  local_b0 = (OPAEPDIIOEB->fields).IIHFLLPKBJI;
  pSStack_98 = (OPAEPDIIOEB->fields).AIKDONIPAMF;
  uStack_a0 = *(undefined8 *)&(OPAEPDIIOEB->fields).PIGNHMJGDHM;
  local_90 = local_c0;
  uStack_88 = uStack_b8;
  value_00 = (Il2CppObject *)thunk_FUN_01bda448(System_Decimal_TypeInfo,&local_c0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18213/*"fb_iap_revenue"*/,value_00,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18211/*"fb_iap_product_title"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).ODNJEBGJAAD,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18210/*"fb_iap_product_id"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).IIHFLLPKBJI,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18209/*"fb_iap_currency"*/,
               (Il2CppObject *)(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    bVar3 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).AIKDONIPAMF,(MethodInfo *)0x0);
    if (!bVar3) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_18212/*"fb_iap_receipt_id"*/,(Il2CppObject *)(OPAEPDIIOEB->fields).AIKDONIPAMF,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    }
    pCVar9 = (__this->fields).HACEIKFFHJE;
    value = *(System_Decimal_o **)&(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields;
    method_00 = *(MethodInfo **)&(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.lo;
    if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar10 = System_Decimal__op_Explicit(value,method_00);
    if (pCVar9 != (CPABHCDGLPI_o *)0x0) {
      pCVar5 = pCVar9->klass;
      uVar8 = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE;
      uVar1._0_1_ = (pCVar5->_2).rank;
      uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
            pVVar4 = pCVar5->vtable + (*piVar7 + 8);
            goto LAB_03694e90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar9,CPABHCDGLPI_TypeInfo,8);
LAB_03694e90:
      (*pVVar4->methodPtr)(CONCAT44(extraout_var,fVar10),pCVar9,uVar8,__this_00,pVVar4->method);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(CPABHCDGLPI GCPJGGIOHHA)  [RVA 0x3594EE0]
// AHMGCBGIOHN$$.ctor @ RVA 0x3594EE0

void AHMGCBGIOHN___ctor(AHMGCBGIOHN_o *__this,CPABHCDGLPI_o *GCPJGGIOHHA,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HACEIKFFHJE = GCPJGGIOHHA;
  thunk_FUN_01c20e04(&__this->fields,GCPJGGIOHHA);
  return;
}

