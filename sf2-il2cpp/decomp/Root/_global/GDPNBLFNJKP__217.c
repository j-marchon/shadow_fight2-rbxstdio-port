// TypeDefIndex 217
// Namespace: 
// public class GDPNBLFNJKP : HPEENDCCJND
// Fields:
//   private string[] CMHCBHKJKHB; // 0x28

// ===== private string BBJCEGGJDJB(string KGLJICLJHEL)  [RVA 0x31226F8]
// GDPNBLFNJKP$$BBJCEGGJDJB @ RVA 0x31226F8

System_String_o *
GDPNBLFNJKP__BBJCEGGJDJB(GDPNBLFNJKP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  GCPFDLNAFDF_o *pGVar3;
  VirtualInvokeData *pVVar4;
  DADDKDFBPIJ_T__o *__this_00;
  Il2CppObject *pIVar5;
  GCPFDLNAFDF_c *pGVar6;
  ulong uVar7;
  int32_t *piVar8;
  Il2CppObject *pIVar9;
  
  if ((DAT_04566630 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_1570/*"0.0"*/);
    DAT_04566630 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar3 != (GCPFDLNAFDF_o *)0x0) {
    pGVar6 = pGVar3->klass;
    uVar1._0_1_ = (pGVar6->_2).rank;
    uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pGVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
          pVVar4 = pGVar6->vtable + *piVar8;
          goto LAB_032227c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar3,HHMDFAMGHPB_TypeInfo,0);
LAB_032227c4:
    __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar4->methodPtr)(pGVar3,pVVar4->method);
    if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
      pIVar5 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,KGLJICLJHEL,Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      pIVar9 = (Il2CppObject *)&StringLiteral_1570/*"0.0"*/;
      if (pIVar5 != (Il2CppObject *)0x0) {
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)pIVar5[2].klass,(MethodInfo *)0x0);
        if (!bVar2) {
          pIVar9 = pIVar5 + 2;
        }
      }
      return (System_String_o *)pIVar9->klass;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x3122820]
// GDPNBLFNJKP$$AKPPNIPNKDH @ RVA 0x3122820

System_String_o * GDPNBLFNJKP__AKPPNIPNKDH(GDPNBLFNJKP_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  GDPNBLFNJKP_o *__this_00;
  GDPNBLFNJKP_o *CJNHFNHJHPE;
  MethodInfo *in_x2;
  ulong uVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04566631 & 1) == 0) {
    FUN_01bab630(&StringLiteral_230/*" + "*/);
    auVar7 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566631 = 1;
  }
  pSVar5 = (__this->fields).CMHCBHKJKHB;
  if (pSVar5 != (System_String_array *)0x0) {
    CJNHFNHJHPE = StringLiteral_1/*""*/;
    if (0 < (int)pSVar5->max_length) {
      uVar6 = 0;
      uVar3 = pSVar5->max_length & 0xffffffff;
      do {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar4 = pSVar5->m_Items[uVar6];
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
        __this_00 = (GDPNBLFNJKP_o *)(ulong)bVar2;
        if (!bVar2) {
          in_x2 = (MethodInfo *)0x0;
          __this_00 = (GDPNBLFNJKP_o *)
                      System_String__Concat
                                ((System_String_o *)CJNHFNHJHPE,StringLiteral_230/*" + "*/,(MethodInfo *)0x0)
          ;
          CJNHFNHJHPE = __this_00;
        }
        pSVar4 = GDPNBLFNJKP__KHCGFJDIAED(__this_00,pSVar4,in_x2);
        in_x2 = (MethodInfo *)0x0;
        CJNHFNHJHPE = (GDPNBLFNJKP_o *)
                      System_String__Concat((System_String_o *)CJNHFNHJHPE,pSVar4,(MethodInfo *)0x0)
        ;
        uVar1 = (uint)pSVar5->max_length;
        uVar3 = (ulong)uVar1;
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
    return (System_String_o *)CJNHFNHJHPE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x312295C]
// GDPNBLFNJKP$$CJOHHBMFAAG @ RVA 0x312295C

Il2CppObject * GDPNBLFNJKP__CJOHHBMFAAG(GDPNBLFNJKP_o *__this,MethodInfo *method)

{
  uint uVar1;
  GDPNBLFNJKP_o *__this_00;
  System_String_o *ODAMFBHJKIH;
  GDPNBLFNJKP_o *extraout_x0;
  Il2CppObject *pIVar2;
  MethodInfo *in_x2;
  ulong uVar3;
  System_String_array *pSVar4;
  ulong uVar5;
  double dVar6;
  double LFINFBNOLFG;
  undefined1 auVar7 [16];
  double local_38;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04566632 & 1) == 0) {
    auVar7 = FUN_01bab630(&double_TypeInfo);
    DAT_04566632 = 1;
  }
  __this_00 = auVar7._0_8_;
  pSVar4 = (__this->fields).CMHCBHKJKHB;
  if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this_00,auVar7._8_8_);
  }
  if ((int)pSVar4->max_length < 1) {
    LFINFBNOLFG = 0.0;
  }
  else {
    uVar5 = 0;
    uVar3 = pSVar4->max_length & 0xffffffff;
    LFINFBNOLFG = 0.0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      ODAMFBHJKIH = GDPNBLFNJKP__BBJCEGGJDJB(__this_00,pSVar4->m_Items[uVar5],in_x2);
      dVar6 = BKOHHDBBJML__HNIHOIAMDPC(ODAMFBHJKIH,(MethodInfo *)0x0);
      uVar1 = (uint)pSVar4->max_length;
      uVar3 = (ulong)uVar1;
      uVar5 = uVar5 + 1;
      LFINFBNOLFG = LFINFBNOLFG + dVar6;
      __this_00 = extraout_x0;
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  local_38 = HPEENDCCJND__AJKIGPMHEEO((HPEENDCCJND_o *)__this,LFINFBNOLFG,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_38);
  return pIVar2;
}


// ===== protected override void ODGFCLOEKJD()  [RVA 0x3122A34]
// GDPNBLFNJKP$$ODGFCLOEKJD @ RVA 0x3122A34

void GDPNBLFNJKP__ODGFCLOEKJD(GDPNBLFNJKP_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x3122A38]
// GDPNBLFNJKP$$.ctor @ RVA 0x3122A38

void GDPNBLFNJKP___ctor(GDPNBLFNJKP_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  
  if ((DAT_04566633 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_8738/*"MODELS"*/);
    FUN_01bab630(&StringLiteral_15248/*"ZONE_6"*/);
    FUN_01bab630(&StringLiteral_15254/*"ZONE_7_3"*/);
    FUN_01bab630(&StringLiteral_15259/*"ZONE_RAID"*/);
    FUN_01bab630(&StringLiteral_15244/*"ZONE_4"*/);
    FUN_01bab630(&StringLiteral_15252/*"ZONE_7"*/);
    FUN_01bab630(&StringLiteral_15258/*"ZONE_IM"*/);
    FUN_01bab630(&StringLiteral_15240/*"ZONE_2"*/);
    FUN_01bab630(&StringLiteral_15242/*"ZONE_3"*/);
    FUN_01bab630(&StringLiteral_3674/*"CLANS"*/);
    FUN_01bab630(&StringLiteral_15253/*"ZONE_7_2"*/);
    FUN_01bab630(&StringLiteral_15246/*"ZONE_5"*/);
    DAT_04566633 = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0xc);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_15259/*"ZONE_RAID"*/;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_8738/*"MODELS"*/;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_3674/*"CLANS"*/;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_15240/*"ZONE_2"*/;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_15242/*"ZONE_3"*/;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_15244/*"ZONE_4"*/;
                thunk_FUN_01c20e04(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = StringLiteral_15246/*"ZONE_5"*/;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = StringLiteral_15248/*"ZONE_6"*/;
                    thunk_FUN_01c20e04(pSVar1->m_Items + 7);
                    if (8 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[8] = StringLiteral_15258/*"ZONE_IM"*/;
                      thunk_FUN_01c20e04(pSVar1->m_Items + 8);
                      if (9 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[9] = StringLiteral_15252/*"ZONE_7"*/;
                        thunk_FUN_01c20e04(pSVar1->m_Items + 9);
                        if (10 < (uint)pSVar1->max_length) {
                          pSVar1->m_Items[10] = StringLiteral_15253/*"ZONE_7_2"*/;
                          thunk_FUN_01c20e04(pSVar1->m_Items + 10);
                          if (0xb < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[0xb] = StringLiteral_15254/*"ZONE_7_3"*/;
                            thunk_FUN_01c20e04();
                            ppSVar2 = &(__this->fields).CMHCBHKJKHB;
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
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string KHCGFJDIAED(string KGLJICLJHEL)  [RVA 0x3122910]
// GDPNBLFNJKP$$KHCGFJDIAED @ RVA 0x3122910

System_String_o *
GDPNBLFNJKP__KHCGFJDIAED(GDPNBLFNJKP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566634 & 1) == 0) {
    FUN_01bab630(&StringLiteral_272/*" ?Pack[{0}].Size "*/);
    DAT_04566634 = 1;
  }
  pSVar1 = System_String__Format(StringLiteral_272/*" ?Pack[{0}].Size "*/,(Il2CppObject *)KGLJICLJHEL,(MethodInfo *)0x0);
  return pSVar1;
}

