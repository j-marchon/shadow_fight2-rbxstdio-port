// TypeDefIndex 291
// Namespace: 
// public class NLGPPDPDGPH : NEFKBLNBOAB
// Fields:
//   private string FNBDGJPPKKO; // 0x20

// ===== public void .ctor()  [RVA 0x3236840]
// NLGPPDPDGPH$$.ctor @ RVA 0x3236840

void NLGPPDPDGPH___ctor(NLGPPDPDGPH_o *__this,MethodInfo *method)

{
  if ((DAT_04567028 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567028 = 1;
  }
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,StringLiteral_1/*""*/,false,(MethodInfo *)0x0);
  return;
}


// ===== private static string LDMLIFFJDDB(string DDMGAEHAGMN)  [RVA 0x3236890]
// NLGPPDPDGPH$$LDMLIFFJDDB @ RVA 0x3236890

System_String_o * NLGPPDPDGPH__LDMLIFFJDDB(System_String_o *DDMGAEHAGMN,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567029 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1490/*".xml"*/);
    FUN_01bab630(&StringLiteral_21799/*"unity/localizations/"*/);
    DAT_04567029 = 1;
  }
  pSVar1 = System_String__Concat
                     (StringLiteral_21799/*"unity/localizations/"*/,DDMGAEHAGMN,StringLiteral_1490/*".xml"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x32368FC]
// NLGPPDPDGPH$$HNIHOIAMDPC @ RVA 0x32368FC

/* WARNING: Removing unreachable block (ram,0x03336d1c) */

bool NLGPPDPDGPH__HNIHOIAMDPC
               (NLGPPDPDGPH_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  RaidConfig_NFKNNOPFJEE_o *__this_00;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar7;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_0456702a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&RaidConfig_NFKNNOPFJEE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13826/*"Title"*/);
    FUN_01bab630(&StringLiteral_14981/*"Words"*/);
    FUN_01bab630(&StringLiteral_8588/*"Localization"*/);
    FUN_01bab630(&StringLiteral_10146/*"Parse: detected empty localeAlias with text '"*/);
    FUN_01bab630(&StringLiteral_855/*"'! Skip..."*/);
    DAT_0456702a = 1;
  }
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  if ((LKILNGEECIJ == (System_Xml_XmlDocument_o *)0x0) ||
     (plVar4 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                                 (LKILNGEECIJ,StringLiteral_8588/*"Localization"*/,
                                  (LKILNGEECIJ->klass->vtable)._51_get_Item.method),
     plVar4 == (long *)0x0)) goto LAB_03336d14;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                             (plVar4,StringLiteral_14981/*"Words"*/,*(undefined8 *)(*plVar4 + 0x470));
  __this_00 = (RaidConfig_NFKNNOPFJEE_o *)thunk_FUN_01bda818(RaidConfig_NFKNNOPFJEE_TypeInfo);
  RaidConfig_NFKNNOPFJEE___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (RaidConfig_NFKNNOPFJEE_o *)0x0) goto LAB_03336d14;
  (__this_00->fields).NPGIJEJKNKO = (__this->fields).FNBDGJPPKKO;
  thunk_FUN_01c20e04();
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03336af0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03336af0:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) goto LAB_03336cc8;
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_03336c9c;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_03336c84;
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_03336b50;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03336b50:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar6);
        }
        iVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        if (iVar3 == 1) {
          __this_01 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_01,StringLiteral_13826/*"Title"*/,(MethodInfo *)0x0);
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
          str1 = (System_String_o *)
                 (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
          bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar7,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar7 = System_String__Concat
                               (StringLiteral_10146/*"Parse: detected empty localeAlias with text '"*/,str1,StringLiteral_855/*"'! Skip..."*/,(MethodInfo *)0x0);
            KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar7,(MethodInfo *)0x0);
          }
          else {
            __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_00->fields).MKOLIPBIAHP;
            if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (__this_02,(Il2CppObject *)pSVar7,(Il2CppObject *)str1,
                       Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
          }
        }
      } while( true );
    }
    goto LAB_03336d14;
  }
  goto LAB_03336cc8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03336c84:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03336cb8;
    }
  }
LAB_03336c9c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03336cb8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03336cc8:
  if (GALCGHPGAIB != (RaidConfig_o *)0x0) {
    RaidConfig__JBIIFMPKKEK(GALCGHPGAIB,__this_00,(MethodInfo *)0x0);
    return true;
  }
LAB_03336d14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool BKCFPHNEONL(RaidConfig GALCGHPGAIB, LDBDCAICCPP EJLPDCKEJFJ)  [RVA 0x3236E28]
// NLGPPDPDGPH$$BKCFPHNEONL @ RVA 0x3236E28

/* WARNING: Removing unreachable block (ram,0x0333714c) */

bool NLGPPDPDGPH__BKCFPHNEONL
               (NLGPPDPDGPH_o *__this,RaidConfig_o *GALCGHPGAIB,LDBDCAICCPP_o *EJLPDCKEJFJ,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  Il2CppClass *pIVar9;
  long lVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  bool bVar14;
  
  if ((DAT_0456702b & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_0456702b = 1;
  }
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar4->klass;
    uVar2._0_1_ = (pIVar9->_2).rank;
    uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar12 + 10);
          goto LAB_03336f18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,10);
LAB_03336f18:
    plVar6 = (long *)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerable_DBNEEHGBCJD__c **)(piVar13 + -2) ==
              System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03336f80;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01b81914(plVar6,System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo,0);
LAB_03336f80:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppSVar1 = &(__this->fields).FNBDGJPPKKO;
      bVar14 = true;
      do {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03337008;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03337008:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return bVar14;
          }
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_033370f4;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_033370dc;
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_DBNEEHGBCJD__c **)(piVar13 + -2) ==
                System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03337064;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo,0)
        ;
LAB_03337064:
        lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *ppSVar1 = *(System_String_o **)(lVar10 + 0x10);
        thunk_FUN_01c20e04(ppSVar1);
        pSVar8 = NLGPPDPDGPH__LDMLIFFJDDB(*ppSVar1,method_00);
        (__this->fields).super.DAIOCIKMNFD = pSVar8;
        thunk_FUN_01c20e04(&__this->fields);
        (__this->fields).super.HGCCJGDKCLH = true;
        bVar3 = NEFKBLNBOAB__BKCFPHNEONL
                          ((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,EJLPDCKEJFJ,(MethodInfo *)0x0);
        bVar14 = (bool)(bVar14 & bVar3);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_033370dc:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03337110;
    }
  }
LAB_033370f4:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03337110:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return bVar14;
}

