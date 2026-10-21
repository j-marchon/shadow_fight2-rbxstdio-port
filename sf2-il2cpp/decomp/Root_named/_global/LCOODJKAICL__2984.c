// TypeDefIndex 2984
// Namespace: 
// public class LCOODJKAICL
// Fields:
//   private static LCOODJKAICL CBDMFFMCJBK; // 0x0
//   private List<string> PKENPPJGGHL; // 0x10

// ===== public static int FIGCOMDDIOM(string AAIHDEKMIJG, string HDGOGGAJMEL)  [RVA 0x34A2BE0]
// LCOODJKAICL$$FIGCOMDDIOM @ RVA 0x34A2BE0

int32_t LCOODJKAICL__FIGCOMDDIOM
                  (System_String_o *AAIHDEKMIJG,System_String_o *HDGOGGAJMEL,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  
  if (AAIHDEKMIJG != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(AAIHDEKMIJG,HDGOGGAJMEL,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      iVar2 = 0;
    }
    else {
      if (HDGOGGAJMEL == (System_String_o *)0x0) goto LAB_035a2c18;
      iVar2 = (HDGOGGAJMEL->fields)._stringLength + iVar1;
    }
    return iVar2;
  }
LAB_035a2c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void .ctor()  [RVA 0x34A2C1C]
// LCOODJKAICL$$.ctor @ RVA 0x34A2C1C

void LCOODJKAICL___ctor(LCOODJKAICL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045684b6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045684b6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).PKENPPJGGHL = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  LCOODJKAICL__CKHDCCFGNEN(__this,method_00);
  return;
}


// ===== private void CKHDCCFGNEN()  [RVA 0x34A2CAC]
// LCOODJKAICL$$CKHDCCFGNEN @ RVA 0x34A2CAC

void LCOODJKAICL__CKHDCCFGNEN(LCOODJKAICL_o *__this,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  
  if ((DAT_045684b7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045684b7 = 1;
  }
  __this_00 = (__this->fields).PKENPPJGGHL;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PKENPPJGGHL;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_035a2d98;
    }
    item = StringLiteral_1/*""*/;
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_035a2d98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string GKLAMPIGIPD()  [RVA 0x34A2D9C]
// LCOODJKAICL$$GKLAMPIGIPD @ RVA 0x34A2D9C

System_String_o * LCOODJKAICL__GKLAMPIGIPD(MethodInfo *method)

{
  if ((DAT_045684b8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045684b8 = 1;
  }
  return StringLiteral_1/*""*/;
}


// ===== public static string IPFHDLKHBDC(string AAIHDEKMIJG)  [RVA 0x34A2DDC]
// LCOODJKAICL$$IPFHDLKHBDC @ RVA 0x34A2DDC

System_String_o * LCOODJKAICL__IPFHDLKHBDC(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045684b9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045684b9 = 1;
    method = extraout_x1;
  }
  bVar1 = LCOODJKAICL__KFFIFGDKGCE(AAIHDEKMIJG,method);
  if (bVar1) {
    return AAIHDEKMIJG;
  }
  pSVar2 = System_String__Concat(StringLiteral_1/*""*/,AAIHDEKMIJG,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== public static string DDGMDKMKBHH(string AAIHDEKMIJG)  [RVA 0x34A2E98]
// LCOODJKAICL$$DDGMDKMKBHH @ RVA 0x34A2E98

System_String_o * LCOODJKAICL__DDGMDKMKBHH(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  int32_t length;
  int32_t startIndex;
  System_String_o *pSVar1;
  MethodInfo *in_x2;
  
  if ((DAT_045684ba & 1) == 0) {
    FUN_01bab630(&StringLiteral_2098/*"://"*/);
    DAT_045684ba = 1;
  }
  startIndex = LCOODJKAICL__FIGCOMDDIOM(AAIHDEKMIJG,StringLiteral_2098/*"://"*/,in_x2);
  if (AAIHDEKMIJG != (System_String_o *)0x0) {
    length = (AAIHDEKMIJG->fields)._stringLength;
    if (startIndex < length) {
      pSVar1 = System_String__Substring(AAIHDEKMIJG,startIndex,length,(MethodInfo *)0x0);
      return pSVar1;
    }
    return AAIHDEKMIJG;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KFFIFGDKGCE(string AAIHDEKMIJG)  [RVA 0x34A2E44]
// LCOODJKAICL$$KFFIFGDKGCE @ RVA 0x34A2E44

bool LCOODJKAICL__KFFIFGDKGCE(System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = AAIHDEKMIJG;
  if ((DAT_045684b8 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045684b8 = 1;
  }
  if (AAIHDEKMIJG != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(AAIHDEKMIJG,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static LCOODJKAICL AIHNLLGNBLC()  [RVA 0x34A2F10]
// LCOODJKAICL$$AIHNLLGNBLC @ RVA 0x34A2F10

LCOODJKAICL_o * LCOODJKAICL__AIHNLLGNBLC(MethodInfo *method)

{
  LCOODJKAICL_o *pLVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_045684bb & 1) == 0) {
    FUN_01bab630(&LCOODJKAICL_TypeInfo);
    DAT_045684bb = 1;
  }
  pLVar1 = LCOODJKAICL_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pLVar1 == (LCOODJKAICL_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pLVar1 = auVar2._0_8_;
    LCOODJKAICL___ctor(pLVar1,auVar2._8_8_);
    LCOODJKAICL_TypeInfo->static_fields->CBDMFFMCJBK = pLVar1;
    thunk_FUN_01c20e04(LCOODJKAICL_TypeInfo->static_fields,pLVar1);
    pLVar1 = LCOODJKAICL_TypeInfo->static_fields->CBDMFFMCJBK;
  }
  return pLVar1;
}

