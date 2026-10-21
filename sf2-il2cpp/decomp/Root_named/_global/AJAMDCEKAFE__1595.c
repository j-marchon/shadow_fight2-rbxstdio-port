// TypeDefIndex 1595
// Namespace: 
// public static class AJAMDCEKAFE
// Fields:
//   private static long CEONKIEGMEB; // 0x0

// ===== public static void BJMKPONFOPK()  [RVA 0x31B4740]
// AJAMDCEKAFE$$BJMKPONFOPK @ RVA 0x31B4740

void AJAMDCEKAFE__BJMKPONFOPK(MethodInfo *method)

{
  System_DateTime_o OLFIPBLKDAH;
  int64_t iVar1;
  
  if ((DAT_04566ba1 & 1) == 0) {
    FUN_01bab630(&AJAMDCEKAFE_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    DAT_04566ba1 = 1;
  }
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OLFIPBLKDAH = System_DateTime__get_Now((MethodInfo *)0x0);
  iVar1 = DPNBGNOIKEJ__FAJDJBBKNIG(OLFIPBLKDAH,(MethodInfo *)0x0);
  AJAMDCEKAFE_TypeInfo->static_fields->CEONKIEGMEB = iVar1;
  return;
}


// ===== public static Nullable<bool> FAEBPLENEGK(int DPJIDNBJIBG, string[] OPAEPDIIOEB)  [RVA 0x31AE070]
// AJAMDCEKAFE$$FAEBPLENEGK @ RVA 0x31AE070

System_Nullable_bool__o
AJAMDCEKAFE__FAEBPLENEGK(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Nullable_bool__Fields __this;
  System_String_o *__this_00;
  bool local_28 [4];
  System_Nullable_bool__Fields local_24 [2];
  
  if ((DAT_04566ba2 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&StringLiteral_18158/*"f"*/);
    FUN_01bab630(&StringLiteral_21388/*"t"*/);
    FUN_01bab630(&StringLiteral_12698/*"T"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_6139/*"F"*/);
    DAT_04566ba2 = 1;
  }
  local_28[0] = false;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
LAB_032ae250:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    __this_00 = OPAEPDIIOEB->m_Items[DPJIDNBJIBG];
    if (__this_00 == (System_String_o *)0x0) goto LAB_032ae250;
    bVar2 = System_String__Equals(__this_00,StringLiteral_21388/*"t"*/,(MethodInfo *)0x0);
    if (((bVar2) ||
        (bVar2 = System_String__Equals(__this_00,StringLiteral_12698/*"T"*/,(MethodInfo *)0x0), bVar2)) ||
       (bVar2 = System_String__Equals(__this_00,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0), bVar2)) {
      __this = SUB82(local_24,0);
      bVar2 = true;
    }
    else {
      bVar2 = System_String__Equals(__this_00,StringLiteral_18158/*"f"*/,(MethodInfo *)0x0);
      if (((bVar2) ||
          (bVar2 = System_String__Equals(__this_00,StringLiteral_6139/*"F"*/,(MethodInfo *)0x0), bVar2)) ||
         (bVar2 = System_String__Equals(__this_00,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0), bVar2)) {
        __this = SUB82(local_24,0);
        bVar2 = false;
      }
      else {
        if ((bool_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = System_Boolean__TryParse(__this_00,local_28,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_032ae238;
        __this = SUB82(local_24,0);
        bVar2 = local_28[0];
      }
    }
    local_24[0].hasValue = false;
    local_24[0].value = false;
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)__this,bVar2,Method_System_Nullable<bool>__ctor__);
  }
  else {
LAB_032ae238:
    local_24[0].hasValue = false;
    local_24[0].value = false;
  }
  return (System_Nullable_bool__o)local_24[0];
}


// ===== public static Nullable<float> FOKFAIPDIMB(int DPJIDNBJIBG, string[] OPAEPDIIOEB)  [RVA 0x31B47BC]
// AJAMDCEKAFE$$FOKFAIPDIMB @ RVA 0x31B47BC

System_Nullable_float__o
AJAMDCEKAFE__FOKFAIPDIMB(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Nullable_float__Fields SVar3;
  System_String_o *ODAMFBHJKIH;
  float local_2c;
  System_Nullable_float__Fields local_28;
  
  if ((DAT_04566ba3 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566ba3 = 1;
  }
  local_2c = 0.0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    ODAMFBHJKIH = OPAEPDIIOEB->m_Items[DPJIDNBJIBG];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&local_2c,(MethodInfo *)0x0);
    if (bVar2) {
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0.0;
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&local_28,local_2c,Method_System_Nullable<float>__ctor__)
      ;
      return (System_Nullable_float__o)local_28;
    }
  }
  SVar3.hasValue = false;
  SVar3._1_3_ = 0;
  SVar3.value = 0.0;
  return (System_Nullable_float__o)SVar3;
}


// ===== public static Nullable<long> KCCCDOBCCNN(int DPJIDNBJIBG, string[] OPAEPDIIOEB)  [RVA 0x31B488C]
// AJAMDCEKAFE$$KCCCDOBCCNN @ RVA 0x31B488C

System_Nullable_long__o
AJAMDCEKAFE__KCCCDOBCCNN(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  System_Nullable_long__Fields SVar2;
  bool bVar3;
  MethodInfo_27F86F8 *in_x3;
  System_Nullable_long__o __this;
  int64_t local_38;
  undefined8 local_30;
  int64_t iStack_28;
  
  if ((DAT_04566ba4 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<long>__ctor__);
    DAT_04566ba4 = 1;
  }
  local_38 = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    bVar3 = System_Int64__TryParse(OPAEPDIIOEB->m_Items[DPJIDNBJIBG],&local_38,(MethodInfo *)0x0);
    if (bVar3) {
      local_30 = 0;
      iStack_28 = 0;
      __this.fields.value = local_38;
      __this.fields._0_8_ = &local_30;
      System_Nullable<long>___ctor(__this,Method_System_Nullable<long>__ctor__,in_x3);
      goto LAB_032b4914;
    }
  }
  local_30 = 0;
  iStack_28 = 0;
LAB_032b4914:
  SVar2.value = iStack_28;
  SVar2._0_8_ = local_30;
  return (System_Nullable_long__o)SVar2;
}


// ===== public static Nullable<int> NANCFCIGNEE(int DPJIDNBJIBG, string[] OPAEPDIIOEB)  [RVA 0x31B4930]
// AJAMDCEKAFE$$NANCFCIGNEE @ RVA 0x31B4930

System_Nullable_int__o
AJAMDCEKAFE__NANCFCIGNEE(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Nullable_int__Fields SVar3;
  int32_t local_2c;
  System_Nullable_int__Fields local_28;
  
  if ((DAT_04566ba5 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    DAT_04566ba5 = 1;
  }
  local_2c = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    bVar2 = System_Int32__TryParse(OPAEPDIIOEB->m_Items[DPJIDNBJIBG],&local_2c,(MethodInfo *)0x0);
    if (bVar2) {
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0;
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_28,local_2c,Method_System_Nullable<int>__ctor__);
      return (System_Nullable_int__o)local_28;
    }
  }
  SVar3.hasValue = false;
  SVar3._1_3_ = 0;
  SVar3.value = 0;
  return (System_Nullable_int__o)SVar3;
}


// ===== public static List<string> IMDBPBLPCCO(int KBAJGAHMEAF, string[] OPAEPDIIOEB, int HLOBIOJPEKN = 1000, Func<string, string> GFAGKLLGEII)  [RVA 0x31B49D8]
// AJAMDCEKAFE$$IMDBPBLPCCO @ RVA 0x31B49D8

System_Collections_Generic_List_string__o *
AJAMDCEKAFE__IMDBPBLPCCO
          (int32_t KBAJGAHMEAF,System_String_array *OPAEPDIIOEB,int32_t HLOBIOJPEKN,
          System_Func_string__string__o *GFAGKLLGEII,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *item;
  uint uVar2;
  System_String_array *pSVar3;
  
  if ((DAT_04566ba6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566ba6 = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
LAB_032b4b4c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (uint)OPAEPDIIOEB->max_length;
  if ((int)uVar2 <= HLOBIOJPEKN) {
    HLOBIOJPEKN = uVar2 - 1;
  }
  if (HLOBIOJPEKN < KBAJGAHMEAF) {
    return __this;
  }
  if ((uint)KBAJGAHMEAF < uVar2) {
    do {
      lVar1 = Method_System_Collections_Generic_List<string>_Add__;
      item = OPAEPDIIOEB->m_Items[KBAJGAHMEAF];
      if (GFAGKLLGEII == (System_Func_string__string__o *)0x0) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_032b4b4c;
        pSVar3 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
      }
      else {
        item = (System_String_o *)
               (*(code *)(GFAGKLLGEII->fields).super.super.invoke_impl)
                         ((GFAGKLLGEII->fields).super.super.method_code,item,
                          (GFAGKLLGEII->fields).super.super.method);
        lVar1 = Method_System_Collections_Generic_List<string>_Add__;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_032b4b4c;
        pSVar3 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
      }
      if (pSVar3 == (System_String_array *)0x0) goto LAB_032b4b4c;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
      KBAJGAHMEAF = KBAJGAHMEAF + 1;
      if (HLOBIOJPEKN < KBAJGAHMEAF) {
        return __this;
      }
    } while ((uint)KBAJGAHMEAF < (uint)OPAEPDIIOEB->max_length);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static string OFAELFKHOND(string ALHDMEKMLPH = "  ")  [RVA 0x31B4B50]
// AJAMDCEKAFE$$OFAELFKHOND @ RVA 0x31B4B50

System_String_o * AJAMDCEKAFE__OFAELFKHOND(System_String_o *ALHDMEKMLPH,MethodInfo *method)

{
  System_DateTime_o OLFIPBLKDAH;
  int64_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_String_c *local_28;
  
  if ((DAT_04566ba7 & 1) == 0) {
    FUN_01bab630(&AJAMDCEKAFE_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&StringLiteral_1574/*"0.000"*/);
    FUN_01bab630(&StringLiteral_13781/*"Time spent: "*/);
    DAT_04566ba7 = 1;
    method = extraout_x1;
  }
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo,method);
  }
  OLFIPBLKDAH = System_DateTime__get_Now((MethodInfo *)0x0);
  iVar1 = DPNBGNOIKEJ__FAJDJBBKNIG(OLFIPBLKDAH,(MethodInfo *)0x0);
  local_28 = (System_String_c *)
             ((double)(iVar1 - AJAMDCEKAFE_TypeInfo->static_fields->CEONKIEGMEB) / 1000.0);
  pSVar2 = System_Double__ToString((double)local_28,(System_String_o *)&local_28,StringLiteral_1574/*"0.000"*/)
  ;
  pSVar2 = System_String__Concat(ALHDMEKMLPH,StringLiteral_13781/*"Time spent: "*/,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== public static int NFNFHEFOLDI(string[] OPAEPDIIOEB)  [RVA 0x31B4C3C]
// AJAMDCEKAFE$$NFNFHEFOLDI @ RVA 0x31B4C3C

int32_t AJAMDCEKAFE__NFNFHEFOLDI(System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t local_14;
  
  local_14 = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = 1000000;
  if (OPAEPDIIOEB->max_length != 0) {
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    bVar1 = System_Int32__TryParse(OPAEPDIIOEB->m_Items[0],&local_14,(MethodInfo *)0x0);
    iVar2 = local_14;
    if (!bVar1) {
      iVar2 = 1000000;
    }
  }
  return iVar2;
}


// ===== public static Nullable<Vector2> JHLNBAHDGPI(int KBAJGAHMEAF, string[] OPAEPDIIOEB)  [RVA 0x31B4C94]
// AJAMDCEKAFE$$JHLNBAHDGPI @ RVA 0x31B4C94

System_Nullable_Vector2__o
AJAMDCEKAFE__JHLNBAHDGPI(int32_t KBAJGAHMEAF,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_Nullable_Vector2__Fields SVar3;
  bool bVar4;
  MethodInfo_27FC874 *method_00;
  System_String_o *pSVar5;
  System_Nullable_Vector2__o __this;
  UnityEngine_Vector2_o value;
  undefined8 local_40;
  float local_38;
  float local_28 [2];
  
  if ((DAT_04566ba8 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_04566ba8 = 1;
  }
  local_28[0] = 0.0;
  local_28[1] = 0.0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (uint)OPAEPDIIOEB->max_length;
  uVar1 = KBAJGAHMEAF + 1;
  if ((int)uVar1 < (int)uVar2) {
    if (uVar2 <= (uint)KBAJGAHMEAF) {
LAB_032b4db0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar5 = OPAEPDIIOEB->m_Items[KBAJGAHMEAF];
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar5,local_28 + 1,(MethodInfo *)0x0);
    if (bVar4) {
      if ((uint)OPAEPDIIOEB->max_length <= uVar1) goto LAB_032b4db0;
      pSVar5 = OPAEPDIIOEB->m_Items[(int)uVar1];
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = (MethodInfo_27FC874 *)0x0;
      bVar4 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar5,local_28,(MethodInfo *)0x0);
      if (bVar4) {
        local_40 = 0;
        local_38 = 0.0;
        __this.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
        __this.fields._0_8_ = &local_40;
        value.fields.y = local_28[0];
        value.fields.x = local_28[1];
        System_Nullable<Vector2>___ctor(__this,value,method_00);
        goto LAB_032b4d90;
      }
    }
  }
  local_38 = 0.0;
  local_40 = 0;
LAB_032b4d90:
  SVar3.value.fields.y = local_38;
  SVar3.hasValue = (bool_conflict)(undefined1)local_40;
  SVar3._1_3_ = local_40._1_3_;
  SVar3.value.fields.x = (float)local_40._4_4_;
  return (System_Nullable_Vector2__o)SVar3;
}


// ===== public static string LFCNNAGLPHO(int DPJIDNBJIBG, string[] OPAEPDIIOEB)  [RVA 0x31A4D68]
// AJAMDCEKAFE$$LFCNNAGLPHO @ RVA 0x31A4D68

System_String_o *
AJAMDCEKAFE__LFCNNAGLPHO(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar2 = OPAEPDIIOEB->m_Items[DPJIDNBJIBG];
  }
  else {
    pSVar2 = (System_String_o *)0x0;
  }
  return pSVar2;
}


// ===== public static int KBAMBAFJLFD(string[] OPAEPDIIOEB)  [RVA 0x31B4DB4]
// AJAMDCEKAFE$$KBAMBAFJLFD @ RVA 0x31B4DB4

int32_t AJAMDCEKAFE__KBAMBAFJLFD(System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t local_4;
  
  local_4 = 3;
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if ((int)OPAEPDIIOEB->max_length < 2) {
      local_4 = 3;
    }
    else {
      System_Int32__TryParse(OPAEPDIIOEB->m_Items[1],&local_4,(MethodInfo *)0x0);
    }
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DHAAGKPHJLA(string JEGADCHPBOO)  [RVA 0x31B4DF8]
// AJAMDCEKAFE$$DHAAGKPHJLA @ RVA 0x31B4DF8

void AJAMDCEKAFE__DHAAGKPHJLA(System_String_o *JEGADCHPBOO,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ba9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04566ba9 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(JEGADCHPBOO,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log((Il2CppObject *)JEGADCHPBOO,(MethodInfo *)0x0);
  return;
}

