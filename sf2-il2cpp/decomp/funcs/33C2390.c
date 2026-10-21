// HFLNADKHFLG$$NKLGCNHLBAF @ RVA 0x33C2390

/* WARNING: Removing unreachable block (ram,0x034c2764) */
/* WARNING: Removing unreachable block (ram,0x034c2814) */

void HFLNADKHFLG__NKLGCNHLBAF
               (System_String_o *LFGKEPCBPKF,System_Xml_XmlDocument_o *BAHGPKGMMPC,
               MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *pSVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *PHOLAJOMLEL;
  System_Collections_Generic_List_string__o *FHOOAEFKILG;
  long *plVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_Xml_XmlNode_o *JGHIJMJNJLE;
  System_Xml_XmlElement_o *pSVar6;
  undefined8 *puVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04567de2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12865);
    FUN_01bab630(&StringLiteral_9222);
    FUN_01bab630(&StringLiteral_9225);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_13926);
    DAT_04567de2 = 1;
  }
  pMVar8 = (MethodInfo *)0x1;
  pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC(LFGKEPCBPKF,StringLiteral_1,0,true,true,false,(MethodInfo *)0x0)
  ;
  if (pSVar2 == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  PHOLAJOMLEL = (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_TypeInfo
                                  );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>__ctor__);
  FHOOAEFKILG = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)FHOOAEFKILG,
             Method_System_Collections_Generic_List<string>__ctor__);
  plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                             (pSVar2,StringLiteral_9225,(pSVar2->klass->vtable)._51_get_Item.method)
  ;
  if (plVar3 != (long *)0x0) {
    pSVar4 = (System_Xml_XmlNode_o *)
             (**(code **)(*plVar3 + 0x468))
                       (plVar3,StringLiteral_12865,*(undefined8 *)(*plVar3 + 0x470));
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_9225,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar5 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar3 + 0x468))
                         (plVar3,StringLiteral_9222,*(undefined8 *)(*plVar3 + 0x470));
      plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar2,StringLiteral_9225,
                                  (pSVar2->klass->vtable)._51_get_Item.method);
      if (plVar3 != (long *)0x0) {
        JGHIJMJNJLE = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar3 + 0x468))
                                (plVar3,StringLiteral_13926,*(undefined8 *)(*plVar3 + 0x470));
        pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(BAHGPKGMMPC,StringLiteral_9225,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__DGPOFACHGMP((System_Xml_XmlNode_o *)pSVar6,pSVar5,(MethodInfo *)0x0);
        if ((pSVar5 != (System_Xml_XmlNode_o *)0x0) &&
           (plVar3 = (long *)(*(pSVar5->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (pSVar5,(pSVar5->klass->vtable)._13_get_ChildNodes.method),
           plVar3 != (long *)0x0)) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_034c2634;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c2634:
            uVar10 = (*(code *)*puVar7)(plVar3,puVar7[1]);
            if ((uVar10 & 1) == 0) {
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
              if (plVar3 == (long *)0x0) goto LAB_034c2758;
              lVar9 = *plVar3;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_034c2730;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_034c2718;
            }
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_034c2694;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c2694:
            pSVar5 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar3,puVar7[1]);
            if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64();
              }
            }
            HFLNADKHFLG__AAJAEHMJCPM(pSVar5,pSVar4,PHOLAJOMLEL,FHOOAEFKILG,pMVar8);
          } while( true );
        }
      }
    }
  }
  goto LAB_034c280c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_034c2718:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_034c274c;
    }
  }
LAB_034c2730:
  puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034c274c:
  (*(code *)*puVar7)(plVar3,puVar7[1]);
LAB_034c2758:
  if (BAHGPKGMMPC != (System_Xml_XmlDocument_o *)0x0) {
    pSVar5 = (System_Xml_XmlNode_o *)
             (*(BAHGPKGMMPC->klass->vtable)._51_get_Item.methodPtr)
                       (BAHGPKGMMPC,StringLiteral_9225,
                        (BAHGPKGMMPC->klass->vtable)._51_get_Item.method);
    pMVar8 = (MethodInfo *)0x0;
    pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(pSVar5,StringLiteral_12865,(MethodInfo *)0x0);
    HFLNADKHFLG__LANCGJALKOC((System_Xml_XmlNode_o *)pSVar6,pSVar4,pMVar8);
    pSVar4 = (System_Xml_XmlNode_o *)
             (*(BAHGPKGMMPC->klass->vtable)._51_get_Item.methodPtr)
                       (BAHGPKGMMPC,StringLiteral_9225,
                        (BAHGPKGMMPC->klass->vtable)._51_get_Item.method);
    pMVar8 = (MethodInfo *)0x0;
    pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(pSVar4,StringLiteral_13926,(MethodInfo *)0x0);
    HFLNADKHFLG__PPMHALAEKLH((System_Xml_XmlNode_o *)pSVar6,JGHIJMJNJLE,pMVar8);
    HFLNADKHFLG__GFFMEMGCOAG(BAHGPKGMMPC,method_00);
    return;
  }
LAB_034c280c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

