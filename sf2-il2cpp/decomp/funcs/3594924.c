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
    FUN_01bab630(&StringLiteral_18208);
    FUN_01bab630(&StringLiteral_18217);
    FUN_01bab630(&StringLiteral_18207);
    FUN_01bab630(&StringLiteral_18220);
    FUN_01bab630(&StringLiteral_18205);
    FUN_01bab630(&StringLiteral_18216);
    FUN_01bab630(&StringLiteral_18206);
    FUN_01bab630(&StringLiteral_18218);
    FUN_01bab630(&StringLiteral_18219);
    FUN_01bab630(&StringLiteral_18203);
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
              (__this_00,StringLiteral_18217,(Il2CppObject *)value,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18205,(Il2CppObject *)(OPAEPDIIOEB->fields).CEMIOJCCGLJ,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18219,(Il2CppObject *)(OPAEPDIIOEB->fields).LKLPHMLAFFH,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18220,(Il2CppObject *)(OPAEPDIIOEB->fields).CHJCLDMEGKG,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18208,(Il2CppObject *)(OPAEPDIIOEB->fields).CHGKLFADPLD,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18216,(Il2CppObject *)(OPAEPDIIOEB->fields).IDHKJLAMGJD,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18206,(Il2CppObject *)(OPAEPDIIOEB->fields).IEINLOAOCLD,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    local_80 = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.value;
    value_00 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_80);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_18218,value_00,
               Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    bVar3 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).FDBMKCCNBNI,(MethodInfo *)0x0);
    if (!bVar3) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,StringLiteral_18207,(Il2CppObject *)(OPAEPDIIOEB->fields).FDBMKCCNBNI,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    }
    uVar2 = StringLiteral_18203;
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

