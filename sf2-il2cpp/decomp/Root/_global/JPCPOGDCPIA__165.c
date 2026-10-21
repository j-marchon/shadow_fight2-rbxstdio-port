// TypeDefIndex 165
// Namespace: 
// public static class JPCPOGDCPIA
// Fields:
//   public const string LMDGPINLALE = "Default";
//   public const string KJMAJCJOONG = "Cashback";
//   public const string HFAONNPKCAP = "Energy";
//   public const string CJOICFODKMF = "Multiplier";
//   public const string BPNLCKDDJPF = "SkipDelivery";
//   public const string GGAIFGNIADP = "LotterySpin";
//   public const string KDFLPEDNDFK = "DailyRefresh";
//   public const string BEIAGOCBNOC = "MultiplyLottery";
//   public const string FKGDIICNCBL = "SurvivalRestart";
//   public const string CEEGHEJFNOE = "RaidFight";
//   public static readonly List<string> EPIFJDACNBK; // 0x0

// ===== private static void .cctor()  [RVA 0x310FE84]
// JPCPOGDCPIA$$.cctor @ RVA 0x310FE84

void JPCPOGDCPIA___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar4;
  
  if ((DAT_04566579 & 1) == 0) {
    FUN_01bab630(&JPCPOGDCPIA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_12538/*"SurvivalRestart"*/);
    FUN_01bab630(&StringLiteral_8693/*"LotterySpin"*/);
    FUN_01bab630(&StringLiteral_9253/*"Multiplier"*/);
    FUN_01bab630(&StringLiteral_4203/*"Cashback"*/);
    FUN_01bab630(&StringLiteral_10840/*"RaidFight"*/);
    FUN_01bab630(&StringLiteral_5770/*"Energy"*/);
    FUN_01bab630(&StringLiteral_5245/*"Default"*/);
    FUN_01bab630(&StringLiteral_5055/*"DailyRefresh"*/);
    FUN_01bab630(&StringLiteral_12164/*"SkipDelivery"*/);
    FUN_01bab630(&StringLiteral_9257/*"MultiplyLottery"*/);
    DAT_04566579 = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  pSVar3 = StringLiteral_5245/*"Default"*/;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar4 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = pSVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar3 = StringLiteral_4203/*"Cashback"*/;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar4 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar4->m_Items[(int)uVar1] = pSVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = StringLiteral_5770/*"Energy"*/;
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar4 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar4->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar3 = StringLiteral_9253/*"Multiplier"*/;
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar4 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar4 != (System_String_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar4->m_Items[(int)uVar1] = pSVar3;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar3 = StringLiteral_12164/*"SkipDelivery"*/;
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar4 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar4 != (System_String_array *)0x0) {
              uVar1 = (__this->fields)._size;
              if (uVar1 < (uint)pSVar4->max_length) {
                (__this->fields)._size = uVar1 + 1;
                pSVar4->m_Items[(int)uVar1] = pSVar3;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,
                           (Il2CppObject *)pSVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pSVar3 = StringLiteral_8693/*"LotterySpin"*/;
              lVar2 = Method_System_Collections_Generic_List<string>_Add__;
              pSVar4 = (__this->fields)._items;
              (__this->fields)._version = (__this->fields)._version + 1;
              if (pSVar4 != (System_String_array *)0x0) {
                uVar1 = (__this->fields)._size;
                if (uVar1 < (uint)pSVar4->max_length) {
                  (__this->fields)._size = uVar1 + 1;
                  pSVar4->m_Items[(int)uVar1] = pSVar3;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,
                             (Il2CppObject *)pSVar3,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                pSVar3 = StringLiteral_5055/*"DailyRefresh"*/;
                lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                pSVar4 = (__this->fields)._items;
                (__this->fields)._version = (__this->fields)._version + 1;
                if (pSVar4 != (System_String_array *)0x0) {
                  uVar1 = (__this->fields)._size;
                  if (uVar1 < (uint)pSVar4->max_length) {
                    (__this->fields)._size = uVar1 + 1;
                    pSVar4->m_Items[(int)uVar1] = pSVar3;
                    thunk_FUN_01c20e04();
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,
                               (Il2CppObject *)pSVar3,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar3 = StringLiteral_9257/*"MultiplyLottery"*/;
                  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                  pSVar4 = (__this->fields)._items;
                  (__this->fields)._version = (__this->fields)._version + 1;
                  if (pSVar4 != (System_String_array *)0x0) {
                    uVar1 = (__this->fields)._size;
                    if (uVar1 < (uint)pSVar4->max_length) {
                      (__this->fields)._size = uVar1 + 1;
                      pSVar4->m_Items[(int)uVar1] = pSVar3;
                      thunk_FUN_01c20e04();
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this,
                                 (Il2CppObject *)pSVar3,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar3 = StringLiteral_12538/*"SurvivalRestart"*/;
                    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    pSVar4 = (__this->fields)._items;
                    (__this->fields)._version = (__this->fields)._version + 1;
                    if (pSVar4 != (System_String_array *)0x0) {
                      uVar1 = (__this->fields)._size;
                      if (uVar1 < (uint)pSVar4->max_length) {
                        (__this->fields)._size = uVar1 + 1;
                        pSVar4->m_Items[(int)uVar1] = pSVar3;
                        thunk_FUN_01c20e04();
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this,
                                   (Il2CppObject *)pSVar3,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      pSVar3 = StringLiteral_10840/*"RaidFight"*/;
                      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                      pSVar4 = (__this->fields)._items;
                      (__this->fields)._version = (__this->fields)._version + 1;
                      if (pSVar4 != (System_String_array *)0x0) {
                        uVar1 = (__this->fields)._size;
                        if (uVar1 < (uint)pSVar4->max_length) {
                          (__this->fields)._size = uVar1 + 1;
                          pSVar4->m_Items[(int)uVar1] = pSVar3;
                          thunk_FUN_01c20e04();
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this,
                                     (Il2CppObject *)pSVar3,
                                     *(MethodInfo_26E4DAC **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        JPCPOGDCPIA_TypeInfo->static_fields->EPIFJDACNBK = __this;
                        thunk_FUN_01c20e04(JPCPOGDCPIA_TypeInfo->static_fields,__this);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

