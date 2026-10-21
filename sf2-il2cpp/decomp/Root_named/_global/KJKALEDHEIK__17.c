// TypeDefIndex 17
// Namespace: 
// public static class KJKALEDHEIK
// Fields:

// ===== public static DateTime MJKMILOJHAC(string NPAAFDINGAB)  [RVA 0x2FF357C]
// KJKALEDHEIK$$MJKMILOJHAC @ RVA 0x2FF357C

System_DateTime_o KJKALEDHEIK__MJKMILOJHAC(System_String_o *NPAAFDINGAB,MethodInfo *method)

{
  int32_t iVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Text_Encoding_o *pSVar5;
  int64_t IMCJLJNEMKH;
  System_DateTime_Fields SVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = NPAAFDINGAB;
  if ((DAT_04565a7f & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    auVar7 = FUN_01bab630(&StringLiteral_18131/*"exp"*/);
    DAT_04565a7f = 1;
  }
  if (NPAAFDINGAB == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pSVar2 = System_String__Split(NPAAFDINGAB,0x2e,0,(MethodInfo *)0x0);
  if (pSVar2 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((uint)pSVar2->max_length < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  if (pSVar2->m_Items[1] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = System_String__Replace(pSVar2->m_Items[1],0x2d,0x2b,(MethodInfo *)0x0);
  if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = System_String__Replace(pSVar3,0x5f,0x2f,(MethodInfo *)0x0);
  pSVar4 = PCOEHCPGBBG__CJMFLNKGMML(pSVar3,(MethodInfo *)0x0);
  pSVar5 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar5 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = (System_String_o *)
           (*(pSVar5->klass->vtable)._37_GetString.methodPtr)
                     (pSVar5,pSVar4,(pSVar5->klass->vtable)._37_GetString.method);
  if (pSVar3 != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(pSVar3,StringLiteral_18131/*"exp"*/,4,(MethodInfo *)0x0);
    if (iVar1 < 0) {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar6._dateData = (System_DateTime_TypeInfo->static_fields->MinValue).fields._dateData;
    }
    else {
      pSVar3 = System_String__Substring(pSVar3,iVar1 + 5,10,(MethodInfo *)0x0);
      IMCJLJNEMKH = System_Int64__Parse(pSVar3,(MethodInfo *)0x0);
      SVar6._dateData = (uint64_t)DPNBGNOIKEJ__ACCGLNGMKIC(IMCJLJNEMKH,(MethodInfo *)0x0);
    }
    return (System_DateTime_o)SVar6._dateData;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GDDGDGNIKPK(string NPAAFDINGAB, PGICCMFLDPI IGJBBPHJIPO)  [RVA 0x2FF379C]
// KJKALEDHEIK$$GDDGDGNIKPK @ RVA 0x2FF379C

void KJKALEDHEIK__GDDGDGNIKPK
               (System_String_o *NPAAFDINGAB,PGICCMFLDPI_o *IGJBBPHJIPO,MethodInfo *method)

{
  bool bVar1;
  System_DateTime_Fields d1;
  System_DateTime_o d1_00;
  System_String_o *pSVar2;
  System_String_o *str3;
  MethodInfo *method_00;
  double dVar3;
  System_TimeSpan_Fields local_38;
  System_DateTime_Fields local_30;
  uint64_t local_28;
  
  if ((DAT_04565a80 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_22172/*"yy.MM.dd HH:mm:ss"*/);
    FUN_01bab630(&StringLiteral_13855/*"Token is expired: "*/);
    FUN_01bab630(&StringLiteral_271/*" > "*/);
    FUN_01bab630(&StringLiteral_13856/*"Token is valid"*/);
    DAT_04565a80 = 1;
  }
  local_38._ticks = 0;
  if (IGJBBPHJIPO == (PGICCMFLDPI_o *)0x0) {
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_DateTime_TypeInfo);
    }
    d1._dateData = (System_DateTime_TypeInfo->static_fields->MinValue).fields._dateData;
  }
  else {
    d1._dateData = (uint64_t)
                   EKCODMFMLPM__OGNLACJDIEM
                             ((double)(IGJBBPHJIPO->fields).GDKPGIBMFPA,(MethodInfo *)0x0);
  }
  local_28 = d1._dateData;
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo);
  }
  bVar1 = System_DateTime__op_Equality
                    ((System_DateTime_o)d1._dateData,
                     (System_DateTime_o)
                     (System_DateTime_TypeInfo->static_fields->MinValue).fields._dateData,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    d1_00 = KJKALEDHEIK__MJKMILOJHAC(NPAAFDINGAB,method_00);
    local_30 = d1_00.fields._dateData;
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_DateTime_TypeInfo);
    }
    bVar1 = System_DateTime__op_Equality
                      (d1_00,(System_DateTime_o)
                             (System_DateTime_TypeInfo->static_fields->MinValue).fields._dateData,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_38._ticks =
           (int64_t)System_DateTime__op_Subtraction
                              ((System_DateTime_o)d1._dateData,d1_00,(MethodInfo *)0x0);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
      }
      dVar3 = System_TimeSpan__get_TotalHours((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
      if (dVar3 <= 0.0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__Log(StringLiteral_13856/*"Token is valid"*/,(MethodInfo *)0x0);
      }
      else {
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = System_DateTime__ToString
                           ((System_DateTime_o)&local_28,StringLiteral_22172/*"yy.MM.dd HH:mm:ss"*/,(MethodInfo *)0x0);
        str3 = System_DateTime__ToString
                         ((System_DateTime_o)&local_30,StringLiteral_22172/*"yy.MM.dd HH:mm:ss"*/,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat
                           (StringLiteral_13855/*"Token is expired: "*/,pSVar2,StringLiteral_271/*" > "*/,str3,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      }
    }
  }
  return;
}

