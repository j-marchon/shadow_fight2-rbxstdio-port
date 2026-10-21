// NLPJLHOEAOE$$BMONPCHAAPB @ RVA 0x31F4B64

/* WARNING: Removing unreachable block (ram,0x032f4ee8) */
/* WARNING: Removing unreachable block (ram,0x032f4f4c) */
/* WARNING: Removing unreachable block (ram,0x032f4f70) */

void NLPJLHOEAOE__BMONPCHAAPB(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar2;
  long *plVar3;
  System_Xml_XmlNode_o *pSVar4;
  undefined8 *puVar5;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *extraout_x1_00;
  System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *FBNKGGDFFLL;
  MethodInfo *pMVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  System_Xml_XmlDocument_o **ppSVar10;
  System_Xml_XmlDocument_o *JHMENEKPIBO;
  undefined1 auVar11 [16];
  
  if ((DAT_04566dc6 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14860);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_12336);
    FUN_01bab630(&StringLiteral_12865);
    FUN_01bab630(&StringLiteral_21186);
    DAT_04566dc6 = 1;
    method = extraout_x1;
  }
  ppSVar10 = &(__this->fields).POMPJGMJEDE;
  if (*ppSVar10 == (System_Xml_XmlDocument_o *)0x0) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
    }
    EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
    pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC
                       (EIJDDKJONFO,StringLiteral_21186,1,true,true,false,(MethodInfo *)0x0);
    *ppSVar10 = pSVar2;
    thunk_FUN_01c20e04(ppSVar10,pSVar2);
  }
  pSVar2 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(pSVar2,(MethodInfo *)0x0);
  ppSVar10 = &(__this->fields).EGJHNECPGGM;
  *ppSVar10 = pSVar2;
  thunk_FUN_01c20e04(ppSVar10,pSVar2);
  pSVar2 = (__this->fields).POMPJGMJEDE;
  if (pSVar2 != (System_Xml_XmlDocument_o *)0x0) {
    JHMENEKPIBO = *ppSVar10;
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_12336,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar3 + 0x468))
                         (plVar3,StringLiteral_14862,*(undefined8 *)(*plVar3 + 0x470));
      EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)JHMENEKPIBO,pSVar4,(MethodInfo *)0x0);
      pSVar2 = *ppSVar10;
      if ((pSVar2 != (System_Xml_XmlDocument_o *)0x0) &&
         (plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                     (pSVar2,StringLiteral_14862,
                                      (pSVar2->klass->vtable)._51_get_Item.method),
         plVar3 != (long *)0x0)) {
        pMVar6 = *(MethodInfo **)(*plVar3 + 0x470);
        plVar3 = (long *)(**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_12865);
        if ((plVar3 != (long *)0x0) &&
           (plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210))
           , plVar3 != (long *)0x0)) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar7 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_032f4db8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pMVar6 = (MethodInfo *)0x0;
            puVar5 = (undefined8 *)FUN_01b81914(plVar3);
LAB_032f4db8:
            uVar8 = (*(code *)*puVar5)(plVar3,puVar5[1]);
            if ((uVar8 & 1) == 0) {
              auVar11 = thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
              FBNKGGDFFLL = auVar11._8_8_;
              plVar3 = auVar11._0_8_;
              if (plVar3 == (long *)0x0) goto LAB_032f4edc;
              lVar7 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 == 0) goto LAB_032f4eb4;
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_032f4e9c;
            }
            lVar7 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_032f4e18;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            pMVar6 = (MethodInfo *)0x1;
            puVar5 = (undefined8 *)FUN_01b81914(plVar3);
LAB_032f4e18:
            pSVar4 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar3,puVar5[1]);
            if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((pSVar4->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pSVar4);
              }
            }
            NLPJLHOEAOE__BPONOOAAGHN(__this,pSVar4,pMVar6);
          } while( true );
        }
      }
    }
  }
  goto LAB_032f4f68;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_032f4e9c:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_032f4ed0;
    }
  }
LAB_032f4eb4:
  pMVar6 = (MethodInfo *)0x0;
  puVar5 = (undefined8 *)FUN_01b81914(plVar3);
LAB_032f4ed0:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  FBNKGGDFFLL = extraout_x1_00;
LAB_032f4edc:
  NLPJLHOEAOE__BGBBEOJGEID(__this,FBNKGGDFFLL,pMVar6);
  pSVar2 = (__this->fields).EGJHNECPGGM;
  if ((pSVar2 != (System_Xml_XmlDocument_o *)0x0) &&
     (plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar2,StringLiteral_14862,
                                  (pSVar2->klass->vtable)._51_get_Item.method),
     plVar3 != (long *)0x0)) {
    pMVar6 = *(MethodInfo **)(*plVar3 + 0x470);
    pSVar4 = (System_Xml_XmlNode_o *)(**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_14860);
    NLPJLHOEAOE__KFIFOEEFHDI(__this,pSVar4,pMVar6);
    return;
  }
LAB_032f4f68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

