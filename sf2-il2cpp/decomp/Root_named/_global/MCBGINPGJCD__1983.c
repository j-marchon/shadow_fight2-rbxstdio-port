// TypeDefIndex 1983
// Namespace: 
// public class MCBGINPGJCD : HPEENDCCJND
// Fields:
//   private const string HDEEAHOCENP = "Pack_Starter";
//   private string[] DCJHEFNELKE; // 0x28
//   private int JFNNLEIIIFM; // 0x30

// ===== protected override string AKPPNIPNKDH()  [RVA 0x328FE04]
// MCBGINPGJCD$$AKPPNIPNKDH @ RVA 0x328FE04

System_String_o * MCBGINPGJCD__AKPPNIPNKDH(MCBGINPGJCD_o *__this,MethodInfo *method)

{
  if ((DAT_04567311 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2501/*"?Item[Pack_Starter].RealPrice"*/);
    DAT_04567311 = 1;
  }
  return StringLiteral_2501/*"?Item[Pack_Starter].RealPrice"*/;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x328FE44]
// MCBGINPGJCD$$ODGFCLOEKJD @ RVA 0x328FE44

void MCBGINPGJCD__ODGFCLOEKJD(MCBGINPGJCD_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  System_Predicate_HOOAAGABMBL__o **ppSVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  Item_o *pDVar7;
  System_String_array *pSVar8;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Predicate_HOOAAGABMBL__o *match;
  
  if ((DAT_04567312 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_MCBGINPGJCD_<>c_LJBNFGPHFBI__);
    FUN_01bab630(&MCBGINPGJCD_<>c_TypeInfo);
    DAT_04567312 = 1;
    method = extraout_x1;
  }
  pSVar8 = (__this->fields).DCJHEFNELKE;
  iVar1 = (__this->fields).JFNNLEIIIFM + 1;
  (__this->fields).JFNNLEIIIFM = iVar1;
  if (pSVar8 != (System_String_array *)0x0) {
    iVar2 = (int)pSVar8->max_length;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    (__this->fields).JFNNLEIIIFM = iVar1 - iVar4 * iVar2;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_02;
    }
    pDVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar7 != (Item_o *)0x0) {
      __this_00 = (pDVar7->fields).DIGBEFKAPHM;
      if ((MCBGINPGJCD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MCBGINPGJCD_<>c_TypeInfo,method);
      }
      match = MCBGINPGJCD_<>c_TypeInfo->static_fields->__9__6_0;
      if (match == (System_Predicate_HOOAAGABMBL__o *)0x0) {
        if ((MCBGINPGJCD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_HOOAAGABMBL__o *)
                thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar5 = &MCBGINPGJCD_<>c_TypeInfo->static_fields->__9__6_0;
        *ppSVar5 = match;
        thunk_FUN_01c20e04(ppSVar5,match);
      }
      if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        pIVar6 = System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
        pSVar8 = (__this->fields).DCJHEFNELKE;
        if (pSVar8 != (System_String_array *)0x0) {
          uVar3 = (__this->fields).JFNNLEIIIFM;
          if ((uint)pSVar8->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (pIVar6 != (Il2CppObject *)0x0) {
            pIVar6[8].klass = (Il2CppClass *)pSVar8->m_Items[(int)uVar3];
            thunk_FUN_01c20e04();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3290000]
// MCBGINPGJCD$$CJOHHBMFAAG @ RVA 0x3290000

Il2CppObject * MCBGINPGJCD__CJOHHBMFAAG(MCBGINPGJCD_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  
  pSVar2 = (__this->fields).DCJHEFNELKE;
  if (pSVar2 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (__this->fields).JFNNLEIIIFM;
  if (uVar1 < (uint)pSVar2->max_length) {
    return (Il2CppObject *)pSVar2->m_Items[(int)uVar1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void .ctor()  [RVA 0x3290034]
// MCBGINPGJCD$$.ctor @ RVA 0x3290034

void MCBGINPGJCD___ctor(MCBGINPGJCD_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  
  if ((DAT_04567313 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1447/*".99¥"*/);
    FUN_01bab630(&StringLiteral_22520/*"¥1.99"*/);
    FUN_01bab630(&StringLiteral_1579/*"0.99"*/);
    FUN_01bab630(&StringLiteral_1216/*",99 usd,."*/);
    FUN_01bab630(&StringLiteral_1582/*"0.99$"*/);
    FUN_01bab630(&StringLiteral_1581/*"0.99 usd."*/);
    FUN_01bab630(&StringLiteral_1583/*"0.99¥"*/);
    FUN_01bab630(&StringLiteral_722/*"$.099"*/);
    FUN_01bab630(&StringLiteral_2083/*"99 usd,9"*/);
    FUN_01bab630(&StringLiteral_1406/*".1 руб."*/);
    FUN_01bab630(&StringLiteral_22519/*"¥.099"*/);
    FUN_01bab630(&StringLiteral_725/*"$1.99"*/);
    FUN_01bab630(&StringLiteral_22521/*"¥£₽¥.099 ¥£₽ ¥£₽"*/);
    FUN_01bab630(&StringLiteral_1580/*"0.99 usd"*/);
    DAT_04567313 = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0xf);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_1579/*"0.99"*/;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_1582/*"0.99$"*/;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_725/*"$1.99"*/;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_722/*"$.099"*/;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_1579/*"0.99"*/;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_1447/*".99¥"*/;
                thunk_FUN_01c20e04(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = StringLiteral_1583/*"0.99¥"*/;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = StringLiteral_22520/*"¥1.99"*/;
                    thunk_FUN_01c20e04(pSVar1->m_Items + 7);
                    if (8 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[8] = StringLiteral_22519/*"¥.099"*/;
                      thunk_FUN_01c20e04(pSVar1->m_Items + 8);
                      if (9 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[9] = StringLiteral_1580/*"0.99 usd"*/;
                        thunk_FUN_01c20e04(pSVar1->m_Items + 9);
                        if (10 < (uint)pSVar1->max_length) {
                          pSVar1->m_Items[10] = StringLiteral_1581/*"0.99 usd."*/;
                          thunk_FUN_01c20e04(pSVar1->m_Items + 10);
                          if (0xb < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[0xb] = StringLiteral_1406/*".1 руб."*/;
                            thunk_FUN_01c20e04(pSVar1->m_Items + 0xb);
                            if (0xc < (uint)pSVar1->max_length) {
                              pSVar1->m_Items[0xc] = StringLiteral_22521/*"¥£₽¥.099 ¥£₽ ¥£₽"*/;
                              thunk_FUN_01c20e04(pSVar1->m_Items + 0xc);
                              if (0xd < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[0xd] = StringLiteral_1216/*",99 usd,."*/;
                                thunk_FUN_01c20e04(pSVar1->m_Items + 0xd);
                                if (0xe < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[0xe] = StringLiteral_2083/*"99 usd,9"*/;
                                  thunk_FUN_01c20e04();
                                  ppSVar2 = &(__this->fields).DCJHEFNELKE;
                                  *ppSVar2 = pSVar1;
                                  thunk_FUN_01c20e04(ppSVar2,pSVar1);
                                  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
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


// ===== protected override string CENGCEHFGFN(string AELIJDOOOPN)  [RVA 0x32903A0]
// MCBGINPGJCD$$CENGCEHFGFN @ RVA 0x32903A0

System_String_o *
MCBGINPGJCD__CENGCEHFGFN(MCBGINPGJCD_o *__this,System_String_o *AELIJDOOOPN,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567314 & 1) == 0) {
    FUN_01bab630(&StringLiteral_990/*"()"*/);
    DAT_04567314 = 1;
  }
  pSVar1 = PCOEHCPGBBG__DJGMLBHEPLF(AELIJDOOOPN,StringLiteral_990/*"()"*/,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__TrimStart(pSVar1,0x20,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

