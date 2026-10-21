// OCMLPCKBHPN$$NJAGFHFHEGE @ RVA 0x3277BC4

/* WARNING: Removing unreachable block (ram,0x03378c24) */
/* WARNING: Removing unreachable block (ram,0x0337993c) */
/* WARNING: Removing unreachable block (ram,0x03378338) */
/* WARNING: Removing unreachable block (ram,0x03378f24) */
/* WARNING: Removing unreachable block (ram,0x03378630) */
/* WARNING: Removing unreachable block (ram,0x03379214) */
/* WARNING: Removing unreachable block (ram,0x0337952c) */
/* WARNING: Removing unreachable block (ram,0x033798ec) */

void OCMLPCKBHPN__NJAGFHFHEGE(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_Xml_XmlDocument_o *pSVar6;
  long *plVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_array *pSVar11;
  undefined8 *puVar12;
  System_Collections_Generic_List_string__o *pSVar13;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ulong uVar14;
  System_Int32_array *pSVar15;
  long lVar16;
  int *piVar17;
  System_Collections_Generic_List_int__o *__this;
  ulong uVar18;
  
  if ((DAT_04567257 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11934);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_4558);
    FUN_01bab630(&StringLiteral_13766);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_9105);
    FUN_01bab630(&StringLiteral_6123);
    FUN_01bab630(&StringLiteral_6584);
    FUN_01bab630(&StringLiteral_3165);
    FUN_01bab630(&StringLiteral_13765);
    FUN_01bab630(&StringLiteral_9998);
    FUN_01bab630(&StringLiteral_7628);
    FUN_01bab630(&StringLiteral_9221);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_21402);
    FUN_01bab630(&StringLiteral_9218);
    FUN_01bab630(&StringLiteral_12802);
    FUN_01bab630(&StringLiteral_9219);
    FUN_01bab630(&StringLiteral_12408);
    FUN_01bab630(&StringLiteral_9211);
    FUN_01bab630(&StringLiteral_12460);
    DAT_04567257 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar6 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar5,StringLiteral_21402,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar6 != (System_Xml_XmlDocument_o *)0x0) {
    FMOACLJMJKF__KCFGDEFAHLD(pSVar6,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    OCMLPCKBHPN__PBODEHBNBOD((System_Xml_XmlNode_o *)pSVar6,method_00);
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar6 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar5,StringLiteral_4558,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar6 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if ((((plVar7 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                   (plVar7,StringLiteral_12802,*(undefined8 *)(*plVar7 + 0x470)),
       plVar7 != (long *)0x0)) &&
      (plVar8 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9221,*(undefined8 *)(*plVar7 + 0x470)),
      plVar8 != (long *)0x0)) &&
     (pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240)),
     pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar9,StringLiteral_12408,(MethodInfo *)0x0);
    iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,1,(MethodInfo *)0x0);
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo);
    }
    OCMLPCKBHPN_TypeInfo->static_fields->BINJPMNNDEH = iVar4;
    plVar8 = (long *)(**(code **)(*plVar7 + 0x468))
                               (plVar7,StringLiteral_9221,*(undefined8 *)(*plVar7 + 0x470));
    if ((plVar8 != (long *)0x0) &&
       (pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240)),
       pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_12408,(MethodInfo *)0x0);
      iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,1,(MethodInfo *)0x0);
      OCMLPCKBHPN_TypeInfo->static_fields->KNHNJHANIGJ = iVar4;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                 (plVar7,StringLiteral_3165,*(undefined8 *)(*plVar7 + 0x470));
      if ((plVar7 != (long *)0x0) &&
         (pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
         pSVar9 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_6584,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((pSVar5 != (System_String_o *)0x0) &&
           (pSVar11 = System_String__Split(pSVar5,0x7c,0,(MethodInfo *)0x0),
           pSVar11 != (System_String_array *)0x0)) {
          if (0 < (int)pSVar11->max_length) {
            uVar18 = 0;
            uVar14 = pSVar11->max_length & 0xffffffff;
            do {
              if (uVar14 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar5 = pSVar11->m_Items[uVar18];
              if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this = OCMLPCKBHPN_TypeInfo->static_fields->BPDGEPIJFDK;
              iVar4 = PCOEHCPGBBG__JBGCINPPLAC(pSVar5,0,(MethodInfo *)0x0);
              lVar16 = Method_System_Collections_Generic_List<int>_Add__;
              if (__this == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0337984c;
              pSVar15 = (__this->fields)._items;
              (__this->fields)._version = (__this->fields)._version + 1;
              if (pSVar15 == (System_Int32_array *)0x0) goto LAB_0337984c;
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar15->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar15->m_Items[(int)uVar2] = iVar4;
              }
              else {
                System_Collections_Generic_List<int>__AddWithResize
                          (__this,iVar4,
                           *(MethodInfo_26C766C **)
                            (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              uVar2 = (uint)pSVar11->max_length;
              uVar14 = (ulong)uVar2;
              uVar18 = uVar18 + 1;
            } while ((long)uVar18 < (long)(int)uVar2);
          }
          plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                                     (pSVar6,StringLiteral_11934,
                                      (pSVar6->klass->vtable)._51_get_Item.method);
          if ((((plVar7 != (long *)0x0) &&
               (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                           (plVar7,StringLiteral_9221,
                                            *(undefined8 *)(*plVar7 + 0x470)), plVar7 != (long *)0x0
               )) && (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                                 (plVar7,StringLiteral_9219,
                                                  *(undefined8 *)(*plVar7 + 0x470)),
                     plVar7 != (long *)0x0)) &&
             (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x210)),
             plVar7 != (long *)0x0)) {
            plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0))
            ;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar16 = *plVar7;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0337813c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar18 != 0);
              }
              puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0)
              ;
LAB_0337813c:
              uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
              if ((uVar18 & 1) == 0) {
                plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
                if (plVar7 == (long *)0x0) goto LAB_0337832c;
                lVar16 = *plVar7;
                uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar18 == 0) goto LAB_03378304;
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                goto LAB_033782ec;
              }
              lVar16 = *plVar7;
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_0337819c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar18 != 0);
              }
              puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1)
              ;
LAB_0337819c:
              plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar8);
              }
              pSVar5 = (System_String_o *)
                       (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              bVar3 = System_String__op_Equality(pSVar5,StringLiteral_2968,(MethodInfo *)0x0);
              if (bVar3) {
                pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
                if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
                pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
                if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->MHAOHAGBIIO;
                if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar11 = (pSVar13->fields)._items;
                (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
                if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (pSVar13->fields)._size;
                if (uVar2 < (uint)pSVar11->max_length) {
                  (pSVar13->fields)._size = uVar2 + 1;
                  pSVar11->m_Items[(int)uVar2] = pSVar5;
                  thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar13,
                             (Il2CppObject *)pSVar5,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_0337984c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_033782ec:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03378320;
    }
  }
LAB_03378304:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03378320:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_0337832c:
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if (((plVar7 != (long *)0x0) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9221,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0)) &&
     ((plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9218,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0 &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
      plVar7 != (long *)0x0)))) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03378434;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03378434:
      uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_03378624;
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_033785fc;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_033785e4;
      }
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03378494;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03378494:
      plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_2968,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->OJACBCBKNCN;
        if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (pSVar13->fields)._items;
        (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
        if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_0337984c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_033785e4:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03378618;
    }
  }
LAB_033785fc:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03378618:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_03378624:
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if (((plVar7 != (long *)0x0) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9105,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0)) &&
     ((plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9219,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0 &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
      plVar7 != (long *)0x0)))) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03378738;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03378738:
      uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_0337892c;
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_03378904;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_033788ec;
      }
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03378798;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03378798:
      plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_2968,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->DKEPJDJLJHB;
        if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (pSVar13->fields)._items;
        (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
        if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_0337984c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_033788ec:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03378920;
    }
  }
LAB_03378904:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03378920:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_0337892c:
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if ((((plVar7 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                   (plVar7,StringLiteral_9105,*(undefined8 *)(*plVar7 + 0x470)),
       plVar7 != (long *)0x0)) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9218,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0)) &&
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
     plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03378a30;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03378a30:
      uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_03378c18;
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_03378bf0;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_03378bd8;
      }
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03378a90;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03378a90:
      plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_2968,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->PLIEIFNPIEM;
        if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (pSVar13->fields)._items;
        (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
        if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_0337984c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_03378bd8:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03378c0c;
    }
  }
LAB_03378bf0:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03378c0c:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_03378c18:
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if (((plVar7 != (long *)0x0) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9211,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0)) &&
     ((plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_12460,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0 &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
      plVar7 != (long *)0x0)))) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03378d28;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03378d28:
      uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_03378f18;
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_03378ef0;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_03378ed8;
      }
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03378d88;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03378d88:
      plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_7628,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->IIFEIAMPOMC;
        if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (pSVar13->fields)._items;
        (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
        if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_0337984c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_03378ed8:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03378f0c;
    }
  }
LAB_03378ef0:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03378f0c:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_03378f18:
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if (((plVar7 != (long *)0x0) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9211,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0)) &&
     ((plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_6123,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0 &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
      plVar7 != (long *)0x0)))) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03379020;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03379020:
      uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_03379208;
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_033791e0;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_033791c8;
      }
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03379080;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03379080:
      plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_7628,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->PLIHHKCKDAI;
        if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (pSVar13->fields)._items;
        (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
        if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_0337984c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_033791c8:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_033791fc;
    }
  }
LAB_033791e0:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033791fc:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_03379208:
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if ((((plVar7 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                   (plVar7,StringLiteral_9998,*(undefined8 *)(*plVar7 + 0x470)),
       plVar7 != (long *)0x0)) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_13766,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0)) &&
     ((plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_13766,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0 &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
      plVar7 != (long *)0x0)))) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03379330;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03379330:
      uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_03379520;
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_033794f8;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_033794e0;
      }
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_03379390;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03379390:
      plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_2968,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->MOBOOACLABJ;
        if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (pSVar13->fields)._items;
        (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
        if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_0337984c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_033797ec:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03379820;
    }
  }
LAB_03379804:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03379820:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
  return;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar17 = piVar17 + 4;
    if (uVar18 == 0) break;
LAB_033794e0:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03379514;
    }
  }
LAB_033794f8:
  puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03379514:
  (*(code *)*puVar12)(plVar7,puVar12[1]);
LAB_03379520:
  plVar7 = (long *)(*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar6,StringLiteral_11934,(pSVar6->klass->vtable)._51_get_Item.method
                             );
  if (((plVar7 != (long *)0x0) &&
      (plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_9998,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0)) &&
     ((plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_13766,*(undefined8 *)(*plVar7 + 0x470)),
      plVar7 != (long *)0x0 &&
      ((plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                   (plVar7,StringLiteral_13765,*(undefined8 *)(*plVar7 + 0x470)),
       plVar7 != (long *)0x0 &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
       plVar7 != (long *)0x0)))))) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03379648;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03379648:
      uVar18 = (*(code *)*puVar12)(plVar7,puVar12[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 == 0) goto LAB_03379804;
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_033797ec;
      }
      lVar16 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_033796a8;
          }
          uVar18 = uVar18 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033796a8:
      plVar8 = (long *)(*(code *)*puVar12)(plVar7,puVar12[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar8);
      }
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_7628,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1,(MethodInfo *)0x0);
        if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar16 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar13 = OCMLPCKBHPN_TypeInfo->static_fields->IOAGKHDBEDO;
        if (pSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (pSVar13->fields)._items;
        (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
        if (pSVar11 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar13->fields)._size;
        if (uVar2 < (uint)pSVar11->max_length) {
          (pSVar13->fields)._size = uVar2 + 1;
          pSVar11->m_Items[(int)uVar2] = pSVar5;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar2,pSVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
LAB_0337984c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

