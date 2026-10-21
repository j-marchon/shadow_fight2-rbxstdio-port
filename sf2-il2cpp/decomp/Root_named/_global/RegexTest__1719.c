// Original name: .RegexTest  (obfuscated MKFPGMBBGIA)
// TypeDefIndex 1719
// Namespace: 
// public class RegexTest
// Fields:
//   private const string AKBDLBNAGAM = "RegexTest::TestColor key";
//   private int GPIIGPOLINL; // 0x10
//   private string DBOPNAKLJAL; // 0x18
//   public static readonly Regex OIEIABCHBEC; // 0x0
//   public static readonly Regex JBOODDDDOOE; // 0x8
//   public static readonly Regex BODCLNFOCMC; // 0x10
//   public static readonly Regex NANAECLMLNA; // 0x18
//   public static readonly Regex FBOADMKLNOO; // 0x20
//   public static readonly Regex BMIBLAGHDLD; // 0x28
//   private List<string> PLACDMCGLHA; // 0x20
//   private static readonly string[] CJBDOFDHLOJ; // 0x30

// ===== private void .ctor(int HFBFLHCIGNB)  [RVA 0x31D6E54]
// RegexTest$$.ctor @ RVA 0x31D6E54

void RegexTest___ctor(RegexTest_o *__this,int32_t HFBFLHCIGNB,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *str3;
  System_Collections_Generic_List_string__o **ppSVar6;
  uint uVar7;
  System_String_array *pSVar8;
  undefined4 local_68;
  int32_t local_64;
  
  local_64 = HFBFLHCIGNB;
  if ((DAT_04566cef & 1) == 0) {
                    /* try { // try from 032d6e9c to 033d6fcb has its CatchHandler @ 032d6e9c
                       catch() { ... } // from try @ 032d6e9c with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d7104 with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d71a8 with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d71b0 with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d7264 with catch @ 032d6e9c */
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&RegexTest_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_11483/*"Running RegexTest at extra-lentgh = "*/);
    FUN_01bab630(&StringLiteral_208/*"  extra-str could be extremely random, extra-str.Length = "*/);
    FUN_01bab630(&StringLiteral_9300/*"NONE_TEST"*/);
    DAT_04566cef = 1;
  }
  local_68 = 0;
  (__this->fields).DBOPNAKLJAL = StringLiteral_9300/*"NONE_TEST"*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  uVar7 = HFBFLHCIGNB & (HFBFLHCIGNB >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if ((RegexTest_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (uVar7 == 0) break;
    pSVar8 = RegexTest_TypeInfo->static_fields->CJBDOFDHLOJ;
    if (pSVar8 == (System_String_array *)0x0) goto LAB_032d7120;
    uVar2 = UnityEngine_Random__Range(0,(int32_t)pSVar8->max_length,(MethodInfo *)0x0);
    if ((uint)pSVar8->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032d7120;
                    /* try { // try from 032d6fcc to 033d6ff3 has its CatchHandler @ 032d71c8 */
    System_Text_StringBuilder__Append(__this_00,pSVar8->m_Items[(int)uVar2],(MethodInfo *)0x0);
    uVar7 = uVar7 - 1;
  }
  pSVar3 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)
                      RegexTest_TypeInfo->static_fields->CJBDOFDHLOJ,
                      Method_System_Linq_Enumerable_ToList<string>__);
  ppSVar6 = &(__this->fields).PLACDMCGLHA;
  *ppSVar6 = pSVar3;
  thunk_FUN_01c20e04(ppSVar6,pSVar3);
  if (0 < HFBFLHCIGNB) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032d7120;
    pSVar3 = *ppSVar6;
    pSVar4 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    lVar1 = Method_System_Collections_Generic_List<string>_Add__;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_032d7120;
    pSVar8 = (pSVar3->fields)._items;
                    /* try { // try from 032d7028 to 033d7053 has its CatchHandler @ 032d71c4 */
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (pSVar8 == (System_String_array *)0x0) goto LAB_032d7120;
    uVar7 = (pSVar3->fields)._size;
    if (uVar7 < (uint)pSVar8->max_length) {
      (pSVar3->fields)._size = uVar7 + 1;
      pSVar8->m_Items[(int)uVar7] = pSVar4;
                    /* try { // try from 032d705c to 033d709f has its CatchHandler @ 032d71d0 */
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
  pIVar5 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                     ((System_Collections_Generic_List_T__o *)*ppSVar6,
                      Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
  if (pIVar5 != (Il2CppObject *)0x0) {
    local_68 = *(undefined4 *)&pIVar5[1].klass;
    str3 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                    /* try { // try from 032d70e0 to 033d7103 has its CatchHandler @ 032d71bc */
    pSVar4 = System_String__Concat
                       (StringLiteral_11483/*"Running RegexTest at extra-lentgh = "*/,pSVar4,StringLiteral_208/*"  extra-str could be extremely random, extra-str.Length = "*/,str3,(MethodInfo *)0x0);
    UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 032d7104 to 033d7197 has its CatchHandler @ 032d6e9c */
    return;
  }
LAB_032d7120:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ALMOJIILOBH(string KGLJICLJHEL, Regex OIEBACABHKK)  [RVA 0x31D7128]
// RegexTest$$ALMOJIILOBH @ RVA 0x31D7128

void RegexTest__ALMOJIILOBH
               (RegexTest_o *__this,System_String_o *KGLJICLJHEL,
               System_Text_RegularExpressions_Regex_o *OIEBACABHKK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  System_String_o *pSVar2;
  System_Text_RegularExpressions_Regex_o *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  int32_t local_54;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  method_00 = OIEBACABHKK;
  if ((DAT_04566cf0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_197/*"  MC.Count = "*/);
    DAT_04566cf0 = 1;
  }
                    /* try { // try from 032d7198 to 033d719f has its CatchHandler @ 032d71c0 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 032d71a0 to 033d71a7 has its CatchHandler @ 032d71cc */
  local_50.fields._current = (Il2CppObject *)0x0;
  local_54 = 0;
                    /* try { // try from 032d71a8 to 033d71ab has its CatchHandler @ 032d6e9c */
  RegexTest__KLOKPLHMGMC(__this,KGLJICLJHEL,(MethodInfo *)method_00);
                    /* try { // try from 032d71ac to 033d71af has its CatchHandler @ 032d71b8 */
  __this_00 = (__this->fields).PLACDMCGLHA;
                    /* try { // try from 032d71b0 to 033d71df has its CatchHandler @ 032d6e9c */
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d71ac with catch @ 032d71b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d70e0 with catch @ 032d71bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d7198 with catch @ 032d71c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d7028 with catch @ 032d71c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d6fcc with catch @ 032d71c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d71a0 with catch @ 032d71cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d705c with catch @ 032d71d0
                        */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_70,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_50.fields._index = local_70.fields._index;
    local_50.fields._version = local_70.fields._version;
                    /* try { // try from 032d71e0 to 033d71e3 has its CatchHandler @ 032d71f4 */
    local_50.fields._list = local_70.fields._list;
    local_50.fields._current = local_70.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 032d71e0 with catch @ 032d71f4 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
                    /* try { // try from 032d71fc to 033d7263 has its CatchHandler @ 032d7278 */
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* try { // try from 032d7264 to 033d726f has its CatchHandler @ 032d6e9c */
        return;
      }
      if (OIEBACABHKK == (System_Text_RegularExpressions_Regex_o *)0x0) break;
      __this_01 = System_Text_RegularExpressions_Regex__Matches
                            (OIEBACABHKK,(System_String_o *)local_50.fields._current,
                             (MethodInfo *)0x0);
      if (__this_01 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_54 = System_Text_RegularExpressions_MatchCollection__get_Count
                           (__this_01,(MethodInfo *)0x0);
      pSVar2 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)0x0;
      pSVar2 = System_String__Concat(StringLiteral_197/*"  MC.Count = "*/,pSVar2,(MethodInfo *)0x0);
      RegexTest__GMBNKPEIIEC(__this,pSVar2,method_01);
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032d7270 to 033d7277 has its CatchHandler @ 032d7278 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032d71fc with catch @ 032d7278
                       catch(type#2 @ 00000000) { ... } // from try @ 032d7270 with catch @ 032d7278
                        */
  FUN_01bab8c8();
}


// ===== private void KLOKPLHMGMC(string DKJAOOHIOIN)  [RVA 0x31D72F8]
// RegexTest$$KLOKPLHMGMC @ RVA 0x31D72F8

void RegexTest__KLOKPLHMGMC(RegexTest_o *__this,System_String_o *DKJAOOHIOIN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04566cf1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_12872/*"Test started"*/);
    FUN_01bab630(&StringLiteral_11157/*"RegexTest::TestColor key"*/);
    DAT_04566cf1 = 1;
  }
  ppSVar1 = &(__this->fields).DBOPNAKLJAL;
  *ppSVar1 = DKJAOOHIOIN;
  thunk_FUN_01c20e04(ppSVar1,DKJAOOHIOIN);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_12872/*"Test started"*/,(MethodInfo *)0x0);
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__GKDHGKBMPAG(StringLiteral_11157/*"RegexTest::TestColor key"*/,(MethodInfo *)0x0);
  OCLJMFBDKOA__LELMGKMIGMO(StringLiteral_11157/*"RegexTest::TestColor key"*/,(MethodInfo *)0x0);
  (__this->fields).GPIIGPOLINL = 0;
  return;
}


// ===== public static void PGLLKHLAMFE(int KPMCKIKFGOF)  [RVA 0x31D757C]
// RegexTest$$PGLLKHLAMFE @ RVA 0x31D757C

void RegexTest__PGLLKHLAMFE(int32_t KPMCKIKFGOF,MethodInfo *method)

{
  RegexTest_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MethodInfo *in_x3;
  
  if ((DAT_04566cf2 & 1) == 0) {
    FUN_01bab630(&RegexTest_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_10629/*"QuadSizeRegex"*/);
    FUN_01bab630(&StringLiteral_12466/*"StrikeEndRegex_SL"*/);
    FUN_01bab630(&StringLiteral_12465/*"StrikeEndRegex_NONE"*/);
    FUN_01bab630(&StringLiteral_10628/*"QuadNameRegex"*/);
    FUN_01bab630(&StringLiteral_4482/*"ColorRegex_NONE"*/);
    FUN_01bab630(&StringLiteral_4483/*"ColorRegex_SL"*/);
    DAT_04566cf2 = 1;
    method = extraout_x1;
  }
  __this = (RegexTest_o *)thunk_FUN_01bda818(RegexTest_TypeInfo,method);
  RegexTest___ctor(__this,KPMCKIKFGOF,in_x2);
  if ((RegexTest_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this != (RegexTest_o *)0x0) {
    RegexTest__ALMOJIILOBH
              (__this,StringLiteral_4483/*"ColorRegex_SL"*/,RegexTest_TypeInfo->static_fields->OIEIABCHBEC,in_x3);
    RegexTest__ALMOJIILOBH
              (__this,StringLiteral_4482/*"ColorRegex_NONE"*/,RegexTest_TypeInfo->static_fields->JBOODDDDOOE,in_x3);
    RegexTest__ALMOJIILOBH
              (__this,StringLiteral_10629/*"QuadSizeRegex"*/,RegexTest_TypeInfo->static_fields->BMIBLAGHDLD,in_x3);
    RegexTest__ALMOJIILOBH
              (__this,StringLiteral_10628/*"QuadNameRegex"*/,RegexTest_TypeInfo->static_fields->FBOADMKLNOO,in_x3);
    RegexTest__ALMOJIILOBH
              (__this,StringLiteral_12465/*"StrikeEndRegex_NONE"*/,RegexTest_TypeInfo->static_fields->BODCLNFOCMC,in_x3);
    RegexTest__ALMOJIILOBH
              (__this,StringLiteral_12466/*"StrikeEndRegex_SL"*/,RegexTest_TypeInfo->static_fields->NANAECLMLNA,in_x3);
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OCLJMFBDKOA__DADKFEFJKEC((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GMBNKPEIIEC(string GAJPCHEBACI = "")  [RVA 0x31D73D8]
// RegexTest$$GMBNKPEIIEC @ RVA 0x31D73D8

void RegexTest__GMBNKPEIIEC(RegexTest_o *__this,System_String_o *GAJPCHEBACI,MethodInfo *method)

{
  RegexTest_Fields *pMVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  
  if ((DAT_04566cf3 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_173/*"    "*/);
    FUN_01bab630(&StringLiteral_21442/*"test-iteration, id = "*/);
    FUN_01bab630(&StringLiteral_11157/*"RegexTest::TestColor key"*/);
    DAT_04566cf3 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_21442/*"test-iteration, id = "*/;
      thunk_FUN_01c20e04(values->m_Items);
      pMVar1 = &__this->fields;
      pSVar2 = System_Int32__ToString((int32_t)pMVar1,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar2;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar2);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_173/*"    "*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (__this->fields).DBOPNAKLJAL;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = GAJPCHEBACI;
              thunk_FUN_01c20e04(values->m_Items + 4,GAJPCHEBACI);
              pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
              if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
              }
              OCLJMFBDKOA__DAHNGDAAMBP(pSVar2,false,StringLiteral_11157/*"RegexTest::TestColor key"*/,(MethodInfo *)0x0);
              pMVar1->GPIIGPOLINL = pMVar1->GPIIGPOLINL + 1;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x31D7730]
// RegexTest$$.cctor @ RVA 0x31D7730

void RegexTest___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *pSVar1;
  System_Text_RegularExpressions_Regex_o **ppSVar2;
  System_String_array *pSVar3;
  System_String_array **ppSVar4;
  
  if ((DAT_04566cf4 & 1) == 0) {
    FUN_01bab630(&RegexTest_TypeInfo);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22487/*"|<strike color=black thickness=3 >01</strike>|"*/);
    FUN_01bab630(&StringLiteral_2281/*"<color=grey><quad name#FAILED usedsize=88 color=#FAILED /> 520 </color> <FAILEDstrike color=black FAILEDthickness=3 >..."*/);
    FUN_01bab630(&StringLiteral_15705/*"\s+size=(\d*\.?\d+%?)\s+"*/);
    FUN_01bab630(&StringLiteral_15704/*"\s+name=([\.\w-]*)\s+"*/);
    FUN_01bab630(&StringLiteral_2184/*"</strike>"*/);
    FUN_01bab630(&StringLiteral_2282/*"<color=grey><quad name=ruby usedsize=88 color=#44556677 /> 520 </color>"*/);
    FUN_01bab630(&StringLiteral_15703/*"\s+color=(#[0-9a-fA-F]{8}|black|green|silver|gray|olive|white|yellow|maroon|navy|red|blue|purple|teal|fuchsia|aqua)\s+"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_18000/*"empty"*/);
    DAT_04566cf4 = 1;
  }
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15703/*"\s+color=(#[0-9a-fA-F]{8}|black|green|silver|gray|olive|white|yellow|maroon|navy|red|blue|purple|teal|fuchsia|aqua)\s+"*/,0x10,(MethodInfo *)0x0);
  RegexTest_TypeInfo->static_fields->OIEIABCHBEC = pSVar1;
  thunk_FUN_01c20e04(RegexTest_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15703/*"\s+color=(#[0-9a-fA-F]{8}|black|green|silver|gray|olive|white|yellow|maroon|navy|red|blue|purple|teal|fuchsia|aqua)\s+"*/,0,(MethodInfo *)0x0);
  ppSVar2 = &RegexTest_TypeInfo->static_fields->JBOODDDDOOE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_2184/*"</strike>"*/,0,(MethodInfo *)0x0);
  ppSVar2 = &RegexTest_TypeInfo->static_fields->BODCLNFOCMC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_2184/*"</strike>"*/,0x10,(MethodInfo *)0x0);
  ppSVar2 = &RegexTest_TypeInfo->static_fields->NANAECLMLNA;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15704/*"\s+name=([\.\w-]*)\s+"*/,0x10,(MethodInfo *)0x0);
  ppSVar2 = &RegexTest_TypeInfo->static_fields->FBOADMKLNOO;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_RegularExpressions_Regex_o *)
           thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(pSVar1,StringLiteral_15705/*"\s+size=(\d*\.?\d+%?)\s+"*/,0x10,(MethodInfo *)0x0);
  ppSVar2 = &RegexTest_TypeInfo->static_fields->BMIBLAGHDLD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar3 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = StringLiteral_1/*""*/;
      thunk_FUN_01c20e04(pSVar3->m_Items);
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = StringLiteral_18000/*"empty"*/;
        thunk_FUN_01c20e04(pSVar3->m_Items + 1);
        if (2 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[2] = StringLiteral_2282/*"<color=grey><quad name=ruby usedsize=88 color=#44556677 /> 520 </color>"*/;
          thunk_FUN_01c20e04(pSVar3->m_Items + 2);
          if (3 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[3] = StringLiteral_22487/*"|<strike color=black thickness=3 >01</strike>|"*/;
            thunk_FUN_01c20e04(pSVar3->m_Items + 3);
            if (4 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[4] = StringLiteral_2281/*"<color=grey><quad name#FAILED usedsize=88 color=#FAILED /> 520 </color> <FAILEDstrike color=black FAILEDthickness=3 >..."*/;
              thunk_FUN_01c20e04();
              ppSVar4 = &RegexTest_TypeInfo->static_fields->CJBDOFDHLOJ;
              *ppSVar4 = pSVar3;
              thunk_FUN_01c20e04(ppSVar4,pSVar3);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

