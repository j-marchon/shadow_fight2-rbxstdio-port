// TypeDefIndex 132
// Namespace: 
// public class ECENNHNBAME.HJPFANEPGJF
// Fields:
//   public List<KJFPGDFNFCL> AFFIHBMACFF; // 0x10
//   public List<IENLNOEDCFF> KPFGHBEKJIM; // 0x18
//   public List<IENLNOEDCFF> ENCCFIFCDGL; // 0x20
//   public List<JADGCGOJLJB> GLFJDDHEMNO; // 0x28
//   public List<IENLNOEDCFF> KFLHLLDPBIC; // 0x30
//   public List<KAFCPHCBLPL> NLPMEFHNMOI; // 0x38
//   public List<IIMNGGHGKOD> NEIJJHEFLHP; // 0x40
//   public ECENNHNBAME.HJPFANEPGJF.CDDKPPNEEMB MGCCHNBNJPC; // 0x48
//   public ECENNHNBAME.KFMLLPPCPHI EJNDOMGCGFL; // 0x50
//   public ECENNHNBAME.HJPFANEPGJF.FFGJMEOGPEA GCIHJDANIJJ; // 0x58

// ===== public void CLCPHDKKDPM()  [RVA 0x3015CAC]
// ECENNHNBAME.HJPFANEPGJF$$CLCPHDKKDPM @ RVA 0x3015CAC

void ECENNHNBAME_HJPFANEPGJF__CLCPHDKKDPM(ECENNHNBAME_HJPFANEPGJF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  Il2CppObject *pIVar1;
  int index;
  
  if ((DAT_04565c02 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
    DAT_04565c02 = 1;
  }
  __this_00 = (__this->fields).GLFJDDHEMNO;
  if (__this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03115d24 with catch @ 03115d30
                        */
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<JADGCGOJLJB>_get_Item__);
                    /* try { // try from 03115d10 to 03215d1f has its CatchHandler @ 03115d20 */
      if (pIVar1 == (Il2CppObject *)0x0) break;
      (*pIVar1->klass->vtable[6].methodPtr)(pIVar1,pIVar1->klass->vtable[6].method);
                    /* catch() { ... } // from try @ 03115c70 with catch @ 03115d20
                       catch() { ... } // from try @ 03115d10 with catch @ 03115d20 */
      __this_00 = (__this->fields).GLFJDDHEMNO;
                    /* try { // try from 03115d24 to 03215d27 has its CatchHandler @ 03115d30 */
      index = index + 1;
                    /* try { // try from 03115d28 to 03215d33 has its CatchHandler @ 03115a84 */
    } while (__this_00 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x3018958]
// ECENNHNBAME.HJPFANEPGJF$$RandomizeObscuredVars @ RVA 0x3018958

void ECENNHNBAME_HJPFANEPGJF__RandomizeObscuredVars
               (ECENNHNBAME_HJPFANEPGJF_o *__this,MethodInfo *method)

{
  ECENNHNBAME_KFMLLPPCPHI_o *__this_00;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *__this_01;
  System_Action_KJFPGDFNFCL__o **ppSVar1;
  System_Action_IENLNOEDCFF__o **ppSVar2;
  System_Action_JADGCGOJLJB__o **ppSVar3;
  System_Action_KAFCPHCBLPL__o **ppSVar4;
  System_Action_IIMNGGHGKOD__o **ppSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_02;
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_03;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar6;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_04;
  System_Collections_Generic_List_KAFCPHCBLPL__o *__this_05;
  System_Action_IIMNGGHGKOD__o *action;
  System_Action_KJFPGDFNFCL__o *action_00;
  System_Action_IENLNOEDCFF__o *pSVar7;
  System_Action_JADGCGOJLJB__o *action_01;
  System_Action_KAFCPHCBLPL__o *action_02;
  
  if ((DAT_04565c03 & 1) == 0) {
    FUN_01bab630(&System_Action<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&System_Action<KJFPGDFNFCL>_TypeInfo);
    FUN_01bab630(&System_Action<KAFCPHCBLPL>_TypeInfo);
    FUN_01bab630(&System_Action<JADGCGOJLJB>_TypeInfo);
    FUN_01bab630(&System_Action<IIMNGGHGKOD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAFCPHCBLPL>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_ForEach__);
    FUN_01bab630(&Method_ECENNHNBAME_HJPFANEPGJF_<>c_COMFDJIENAL__);
    FUN_01bab630(&Method_ECENNHNBAME_HJPFANEPGJF_<>c_FIDKKLKLKGH__);
    FUN_01bab630(&Method_ECENNHNBAME_HJPFANEPGJF_<>c_JEKLOKHMKEO__);
    FUN_01bab630(&Method_ECENNHNBAME_HJPFANEPGJF_<>c_KGHINBKIJFA__);
    FUN_01bab630(&Method_ECENNHNBAME_HJPFANEPGJF_<>c_KMDNBGPHGGB__);
    FUN_01bab630(&Method_ECENNHNBAME_HJPFANEPGJF_<>c_LHOCPLAKAEP__);
    FUN_01bab630(&Method_ECENNHNBAME_HJPFANEPGJF_<>c_MPBOHNDPNBO__);
    FUN_01bab630(&ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo);
    DAT_04565c03 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).EJNDOMGCGFL;
  if (__this_00 != (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) {
    ECENNHNBAME_KFMLLPPCPHI__RandomizeObscuredVars(__this_00,method);
    __this_01 = (__this->fields).GCIHJDANIJJ;
    if (__this_01 != (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *)0x0) {
      ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA__RandomizeObscuredVars(__this_01,method_00);
      __this_03 = (__this->fields).AFFIHBMACFF;
      if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_0;
      if (action_00 == (System_Action_KJFPGDFNFCL__o *)0x0) {
        if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action_00 = (System_Action_KJFPGDFNFCL__o *)
                    thunk_FUN_01bda818(System_Action<KJFPGDFNFCL>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar1 = &ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_0;
        *ppSVar1 = action_00;
        thunk_FUN_01c20e04(ppSVar1,action_00);
      }
      if (__this_03 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_03,
                   (System_Action_T__o *)action_00,
                   Method_System_Collections_Generic_List<KJFPGDFNFCL>_ForEach__);
        pSVar6 = (__this->fields).KPFGHBEKJIM;
        if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar7 = ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_1;
        if (pSVar7 == (System_Action_IENLNOEDCFF__o *)0x0) {
          if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar7 = (System_Action_IENLNOEDCFF__o *)
                   thunk_FUN_01bda818(System_Action<IENLNOEDCFF>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar2 = &ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_1;
          *ppSVar2 = pSVar7;
          thunk_FUN_01c20e04(ppSVar2,pSVar7);
        }
        if (pSVar6 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)pSVar6,
                     (System_Action_T__o *)pSVar7,
                     Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
          pSVar6 = (__this->fields).ENCCFIFCDGL;
          if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar7 = ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_2;
          if (pSVar7 == (System_Action_IENLNOEDCFF__o *)0x0) {
            if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar7 = (System_Action_IENLNOEDCFF__o *)
                     thunk_FUN_01bda818(System_Action<IENLNOEDCFF>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar2 = &ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_2;
            *ppSVar2 = pSVar7;
            thunk_FUN_01c20e04(ppSVar2,pSVar7);
          }
          if (pSVar6 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
            System_Collections_Generic_List<object>__ForEach
                      ((System_Collections_Generic_List_object__o *)pSVar6,
                       (System_Action_T__o *)pSVar7,
                       Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
            __this_04 = (__this->fields).GLFJDDHEMNO;
            if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            action_01 = ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_3;
            if (action_01 == (System_Action_JADGCGOJLJB__o *)0x0) {
              if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              action_01 = (System_Action_JADGCGOJLJB__o *)
                          thunk_FUN_01bda818(System_Action<JADGCGOJLJB>_TypeInfo);
              System_Action<object>___ctor();
              ppSVar3 = &ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_3;
              *ppSVar3 = action_01;
              thunk_FUN_01c20e04(ppSVar3,action_01);
            }
            if (__this_04 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
              System_Collections_Generic_List<object>__ForEach
                        ((System_Collections_Generic_List_object__o *)__this_04,
                         (System_Action_T__o *)action_01,
                         Method_System_Collections_Generic_List<JADGCGOJLJB>_ForEach__);
              pSVar6 = (__this->fields).KFLHLLDPBIC;
              if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar7 = ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_4;
              if (pSVar7 == (System_Action_IENLNOEDCFF__o *)0x0) {
                if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar7 = (System_Action_IENLNOEDCFF__o *)
                         thunk_FUN_01bda818(System_Action<IENLNOEDCFF>_TypeInfo);
                System_Action<object>___ctor();
                ppSVar2 = &ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_4;
                *ppSVar2 = pSVar7;
                thunk_FUN_01c20e04(ppSVar2,pSVar7);
              }
              if (pSVar6 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                System_Collections_Generic_List<object>__ForEach
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (System_Action_T__o *)pSVar7,
                           Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
                __this_05 = (__this->fields).NLPMEFHNMOI;
                if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                action_02 = ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_5;
                if (action_02 == (System_Action_KAFCPHCBLPL__o *)0x0) {
                  if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  action_02 = (System_Action_KAFCPHCBLPL__o *)
                              thunk_FUN_01bda818(System_Action<KAFCPHCBLPL>_TypeInfo);
                  System_Action<object>___ctor();
                  ppSVar4 = &ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_5;
                  *ppSVar4 = action_02;
                  thunk_FUN_01c20e04(ppSVar4,action_02);
                }
                if (__this_05 != (System_Collections_Generic_List_KAFCPHCBLPL__o *)0x0) {
                  System_Collections_Generic_List<object>__ForEach
                            ((System_Collections_Generic_List_object__o *)__this_05,
                             (System_Action_T__o *)action_02,
                             Method_System_Collections_Generic_List<KAFCPHCBLPL>_ForEach__);
                  __this_02 = (__this->fields).NEIJJHEFLHP;
                  if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  action = ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_6;
                  if (action == (System_Action_IIMNGGHGKOD__o *)0x0) {
                    if ((ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    action = (System_Action_IIMNGGHGKOD__o *)
                             thunk_FUN_01bda818(System_Action<IIMNGGHGKOD>_TypeInfo);
                    System_Action<object>___ctor();
                    ppSVar5 = &ECENNHNBAME_HJPFANEPGJF_<>c_TypeInfo->static_fields->__9__15_6;
                    *ppSVar5 = action;
                    thunk_FUN_01c20e04(ppSVar5,action);
                  }
                  if (__this_02 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
                    System_Collections_Generic_List<object>__ForEach
                              ((System_Collections_Generic_List_object__o *)__this_02,
                               (System_Action_T__o *)action,
                               Method_System_Collections_Generic_List<IIMNGGHGKOD>_ForEach__);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ELCEMOBLANG()  [RVA 0x3015D3C]
// ECENNHNBAME.HJPFANEPGJF$$ELCEMOBLANG @ RVA 0x3015D3C

void ECENNHNBAME_HJPFANEPGJF__ELCEMOBLANG(ECENNHNBAME_HJPFANEPGJF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar4;
  int32_t iVar5;
  System_String_o *__this_00;
  
  pEVar4 = (__this->fields).EJNDOMGCGFL;
  if (pEVar4 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) goto LAB_03115de4;
  __this_00 = (pEVar4->fields).OBBONHJFLBG;
  if ((__this_00 != (System_String_o *)0x0) &&
     (iVar1 = (__this_00->fields)._stringLength, 2 < iVar1)) {
    uVar2 = System_String__get_Chars(__this_00,iVar1 + -1,(MethodInfo *)0x0);
    uVar3 = System_String__get_Chars(__this_00,iVar1 + -2,(MethodInfo *)0x0);
    if ((uVar2 == 0x31) && (uVar3 == 0x5f)) {
      pEVar4 = (__this->fields).EJNDOMGCGFL;
      if (pEVar4 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) {
LAB_03115de4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar5 = 1;
    }
    else {
      if (uVar2 != 0x32) {
        return;
      }
      if (uVar3 != 0x5f) {
        return;
      }
      pEVar4 = (__this->fields).EJNDOMGCGFL;
      if (pEVar4 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) goto LAB_03115de4;
      iVar5 = 2;
    }
    (pEVar4->fields).ONFAKNEMEGC = iVar5;
  }
  return;
}


// ===== public KJFPGDFNFCL LIKCEDBLBCD(KJFPGDFNFCL.MIFHAKDMDJH ACCIHBHMFPN)  [RVA 0x3018468]
// ECENNHNBAME.HJPFANEPGJF$$LIKCEDBLBCD @ RVA 0x3018468

KJFPGDFNFCL_o *
ECENNHNBAME_HJPFANEPGJF__LIKCEDBLBCD
          (ECENNHNBAME_HJPFANEPGJF_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_KJFPGDFNFCL__o *pSVar2;
  Il2CppObject *pIVar3;
  KJFPGDFNFCL_o *pKVar4;
  int index;
  
  if ((DAT_04565c04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
    DAT_04565c04 = 1;
  }
  pSVar2 = (__this->fields).AFFIHBMACFF;
  if (pSVar2 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (KJFPGDFNFCL_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&pIVar3[1].monitor
                         ,(MethodInfo *)0x0);
      if (iVar1 == ACCIHBHMFPN) {
        pSVar2 = (__this->fields).AFFIHBMACFF;
        if (pSVar2 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
          pKVar4 = (KJFPGDFNFCL_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
          return pKVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).AFFIHBMACFF;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30179B4]
// ECENNHNBAME.HJPFANEPGJF$$.ctor @ RVA 0x30179B4

void ECENNHNBAME_HJPFANEPGJF___ctor(ECENNHNBAME_HJPFANEPGJF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_00;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o **ppSVar2;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_01;
  System_Collections_Generic_List_JADGCGOJLJB__o **ppSVar3;
  System_Collections_Generic_List_KAFCPHCBLPL__o *__this_02;
  System_Collections_Generic_List_KAFCPHCBLPL__o **ppSVar4;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_03;
  System_Collections_Generic_List_IIMNGGHGKOD__o **ppSVar5;
  ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o *__this_04;
  ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_o **ppEVar6;
  ECENNHNBAME_KFMLLPPCPHI_o *__this_05;
  ECENNHNBAME_KFMLLPPCPHI_o **ppEVar7;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *__this_06;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o **ppEVar8;
  MethodInfo *extraout_x1;
  undefined1 auVar9 [16];
  
  if ((DAT_04565c05 & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_KFMLLPPCPHI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAFCPHCBLPL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JADGCGOJLJB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KAFCPHCBLPL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KJFPGDFNFCL>_TypeInfo);
    DAT_04565c05 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KJFPGDFNFCL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KJFPGDFNFCL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KJFPGDFNFCL>__ctor__);
  (__this->fields).AFFIHBMACFF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  pSVar1 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  ppSVar2 = &(__this->fields).KPFGHBEKJIM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  ppSVar2 = &(__this->fields).ENCCFIFCDGL;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_01 = (System_Collections_Generic_List_JADGCGOJLJB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JADGCGOJLJB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<JADGCGOJLJB>__ctor__);
  ppSVar3 = &(__this->fields).GLFJDDHEMNO;
  *ppSVar3 = __this_01;
  thunk_FUN_01c20e04(ppSVar3,__this_01);
  pSVar1 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  ppSVar2 = &(__this->fields).KFLHLLDPBIC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_02 = (System_Collections_Generic_List_KAFCPHCBLPL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KAFCPHCBLPL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<KAFCPHCBLPL>__ctor__);
  ppSVar4 = &(__this->fields).NLPMEFHNMOI;
  *ppSVar4 = __this_02;
  thunk_FUN_01c20e04(ppSVar4,__this_02);
  __this_03 = (System_Collections_Generic_List_IIMNGGHGKOD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
  ppSVar5 = &(__this->fields).NEIJJHEFLHP;
  *ppSVar5 = __this_03;
  thunk_FUN_01c20e04(ppSVar5,__this_03);
  auVar9 = thunk_FUN_01bda818(ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB_TypeInfo);
  __this_04 = auVar9._0_8_;
  ECENNHNBAME_HJPFANEPGJF_CDDKPPNEEMB___ctor(__this_04,auVar9._8_8_);
  ppEVar6 = &(__this->fields).MGCCHNBNJPC;
  *ppEVar6 = __this_04;
  thunk_FUN_01c20e04(ppEVar6,__this_04);
  auVar9 = thunk_FUN_01bda818(ECENNHNBAME_KFMLLPPCPHI_TypeInfo);
  __this_05 = auVar9._0_8_;
  ECENNHNBAME_KFMLLPPCPHI___ctor(__this_05,auVar9._8_8_);
  ppEVar7 = &(__this->fields).EJNDOMGCGFL;
  *ppEVar7 = __this_05;
  thunk_FUN_01c20e04(ppEVar7,__this_05);
  auVar9 = thunk_FUN_01bda818(ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_TypeInfo);
  __this_06 = auVar9._0_8_;
  ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA___ctor(__this_06,auVar9._8_8_);
  ppEVar8 = &(__this->fields).GCIHJDANIJJ;
  *ppEVar8 = __this_06;
  thunk_FUN_01c20e04(ppEVar8,__this_06);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

