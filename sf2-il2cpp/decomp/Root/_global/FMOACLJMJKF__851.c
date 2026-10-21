// TypeDefIndex 851
// Namespace: 
// public class FMOACLJMJKF
// Fields:

// ===== public static void IGKCKMGGGFM(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE)  [RVA 0x3086378]
// FMOACLJMJKF$$IGKCKMGGGFM @ RVA 0x3086378

/* WARNING: Removing unreachable block (ram,0x031865e0) */

void FMOACLJMJKF__IGKCKMGGGFM
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04566027 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566027 = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0318645c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_0318645c:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_03186588;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_031864bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_031864bc:
    JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    uVar4 = (*(JOHFLOEABJL->klass->vtable)._8_unknown.methodPtr)
                      (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_unknown.method);
    if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(uVar4,uVar4);
    }
    lVar5 = (*(KENFFDHLNDA->klass->vtable)._51_get_Item.methodPtr)
                      (KENFFDHLNDA,uVar4,(KENFFDHLNDA->klass->vtable)._51_get_Item.method);
    if (lVar5 == 0) {
      EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JOHFLOEABJL,(MethodInfo *)0x0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_031865a4;
    }
  }
LAB_03186588:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_031865a4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== private static XmlNode DIPCNFGOHKJ(XmlNode ELOCKFLGKNO, string JFADJIGLMEE)  [RVA 0x30866B4]
// FMOACLJMJKF$$DIPCNFGOHKJ @ RVA 0x30866B4

/* WARNING: Removing unreachable block (ram,0x03186a1c) */

System_Xml_XmlNode_o *
FMOACLJMJKF__DIPCNFGOHKJ
          (System_Xml_XmlNode_o *ELOCKFLGKNO,System_String_o *JFADJIGLMEE,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_String_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  if ((DAT_04566028 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_492/*" not found"*/);
    FUN_01bab630(&StringLiteral_12819/*"TacticsSettings: tactics template "*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12807/*"Tactic"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566028 = 1;
  }
  if ((ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    do {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_031867fc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031867fc:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        pSVar5 = (System_Xml_XmlNode_o *)0x0;
        iVar10 = 5;
        goto LAB_03186918;
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0318685c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0318685c:
      pSVar5 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
         ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar5);
      }
      pSVar6 = (System_String_o *)
               (*(pSVar5->klass->vtable)._8_unknown.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._8_unknown.method);
      bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12807/*"Tactic"*/,(MethodInfo *)0x0);
    } while (!bVar2);
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(JFADJIGLMEE,pSVar6,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar10 = 4;
LAB_03186918:
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03186978;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03186978:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if ((iVar10 == 5) || (iVar10 == 0)) {
    pSVar6 = System_String__Concat
                       (StringLiteral_12819/*"TacticsSettings: tactics template "*/,JFADJIGLMEE,StringLiteral_492/*" not found"*/,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    pSVar5 = (System_Xml_XmlNode_o *)0x0;
  }
  return pSVar5;
}


// ===== public static void INFAEBPFJFC(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE, bool FKNHIPEEICO = False)  [RVA 0x3086B08]
// FMOACLJMJKF$$INFAEBPFJFC @ RVA 0x3086B08

/* WARNING: Removing unreachable block (ram,0x03186dc0) */

void FMOACLJMJKF__INFAEBPFJFC
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,bool FKNHIPEEICO
               ,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlAttribute_o *JOHFLOEABJL;
  System_String_o *name;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04566029 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_04566029 = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03186bf4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_03186bf4:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_03186d60;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03186c54;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_03186c54:
    JOHFLOEABJL = (System_Xml_XmlAttribute_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    name = (System_String_o *)
           (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                     (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
    if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(KENFFDHLNDA->klass->vtable)._16_get_Attributes.methodPtr)
                       (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,name,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JOHFLOEABJL,(MethodInfo *)0x0);
    }
    else if (FKNHIPEEICO) {
      uVar5 = (*(JOHFLOEABJL->klass->vtable)._9_get_Value.methodPtr)
                        (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._9_get_Value.method);
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,uVar5,(pSVar4->klass->vtable)._10_set_Value.method);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03186d7c;
    }
  }
LAB_03186d60:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_03186d7c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ===== public static void PDPCAGPGGOE(XmlNode KENFFDHLNDA, XmlNode JGHIJMJNJLE)  [RVA 0x3086EA4]
// FMOACLJMJKF$$PDPCAGPGGOE @ RVA 0x3086EA4

/* WARNING: Removing unreachable block (ram,0x0318755c) */
/* WARNING: Removing unreachable block (ram,0x0318754c) */
/* WARNING: Removing unreachable block (ram,0x0318737c) */

void FMOACLJMJKF__PDPCAGPGGOE
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *a_00;
  long *plVar7;
  long *plVar8;
  System_String_o *b;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  
  if ((DAT_0456602a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12811/*"Tactics"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12818/*"TacticsSettings"*/);
    FUN_01bab630(&StringLiteral_12807/*"Tactic"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456602a = 1;
  }
  if (((((KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) ||
        (plVar3 = (long *)(*(KENFFDHLNDA->klass->vtable)._51_get_Item.methodPtr)
                                    (KENFFDHLNDA,StringLiteral_12818/*"TacticsSettings"*/,
                                     (KENFFDHLNDA->klass->vtable)._51_get_Item.method),
        plVar3 == (long *)0x0)) ||
       (JHMENEKPIBO = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar3 + 0x468))
                                (plVar3,StringLiteral_12811/*"Tactics"*/,*(undefined8 *)(*plVar3 + 0x470)),
       JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0)) ||
      ((plVar3 = (long *)(*(JGHIJMJNJLE->klass->vtable)._51_get_Item.methodPtr)
                                   (JGHIJMJNJLE,StringLiteral_12818/*"TacticsSettings"*/,
                                    (JGHIJMJNJLE->klass->vtable)._51_get_Item.method),
       plVar3 == (long *)0x0 ||
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                   (plVar3,StringLiteral_12811/*"Tactics"*/,*(undefined8 *)(*plVar3 + 0x470)),
       plVar3 == (long *)0x0)))) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
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
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03187048;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03187048:
    uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_03187458;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_031870a8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031870a8:
    JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (JOHFLOEABJL == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    a = (System_String_o *)
        (*(JOHFLOEABJL->klass->vtable)._8_unknown.methodPtr)
                  (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_unknown.method);
    bVar2 = System_String__op_Inequality(a,StringLiteral_12807/*"Tactic"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(JOHFLOEABJL->klass->vtable)._16_get_Attributes.methodPtr)
                         (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      a_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      plVar7 = (long *)(*(KENFFDHLNDA->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        do {
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_031871cc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_031871cc:
          uVar10 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          uVar12 = uVar10 & 0xffffffff;
          if ((uVar10 & 1) == 0) {
            uVar12 = 0;
            goto LAB_031872ec;
          }
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_03187230;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03187230:
          plVar8 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
          if (plVar8 != (long *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(plVar8);
            }
          }
          bVar2 = System_String__op_Inequality(a,StringLiteral_12807/*"Tactic"*/,(MethodInfo *)0x0);
        } while (bVar2);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        b = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a_00,b,(MethodInfo *)0x0);
      } while (!bVar2);
LAB_031872ec:
      plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03187360;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03187360:
        (*(code *)*puVar4)(plVar7,puVar4[1]);
      }
      if ((uVar12 & 1) == 0) {
        EIABCPKDEBD__DGPOFACHGMP(JHMENEKPIBO,JOHFLOEABJL,(MethodInfo *)0x0);
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03187474;
    }
  }
LAB_03187458:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03187474:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public static void KCFGDEFAHLD(XmlDocument LKILNGEECIJ)  [RVA 0x3087670]
// FMOACLJMJKF$$KCFGDEFAHLD @ RVA 0x3087670

/* WARNING: Removing unreachable block (ram,0x03187bcc) */
/* WARNING: Removing unreachable block (ram,0x03187be0) */

void FMOACLJMJKF__KCFGDEFAHLD(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  System_Xml_XmlNode_o *ELOCKFLGKNO;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *KENFFDHLNDA;
  System_String_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *PHOLAJOMLEL;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  il2cpp_array_size_t iVar11;
  undefined1 auVar12 [16];
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  auVar12._8_8_ = method;
  auVar12._0_8_ = LKILNGEECIJ;
  if ((DAT_0456602b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12811/*"Tactics"*/);
    FUN_01bab630(&StringLiteral_12818/*"TacticsSettings"*/);
    FUN_01bab630(&StringLiteral_12807/*"Tactic"*/);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    auVar12 = FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456602b = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    auVar12 = (*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                        (LKILNGEECIJ,StringLiteral_12818/*"TacticsSettings"*/,
                         (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    plVar5 = auVar12._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar12._8_8_;
    auVar12 = auVar2 << 0x40;
    if (plVar5 != (long *)0x0) {
      ELOCKFLGKNO = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar5 + 0x468))
                              (plVar5,StringLiteral_12811/*"Tactics"*/,*(undefined8 *)(*plVar5 + 0x470));
      if (ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) {
        return;
      }
      auVar12 = (*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                          (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
      plVar5 = auVar12._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar12._8_8_;
      auVar12 = auVar3 << 0x40;
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0318786c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0318786c:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_03187b28;
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_03187b10;
          }
          lVar8 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_031878cc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_031878cc:
          KENFFDHLNDA = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((KENFFDHLNDA->klass->_2).naturalAligment < bVar1) ||
             ((KENFFDHLNDA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(KENFFDHLNDA);
          }
          pSVar7 = (System_String_o *)
                   (*(KENFFDHLNDA->klass->vtable)._8_unknown.methodPtr)
                             (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._8_unknown.method);
          bVar4 = System_String__op_Equality(pSVar7,StringLiteral_12807/*"Tactic"*/,(MethodInfo *)0x0);
          if (bVar4) {
            __this = (System_Xml_XmlAttributeCollection_o *)
                     (*(KENFFDHLNDA->klass->vtable)._16_get_Attributes.methodPtr)
                               (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._16_get_Attributes.method);
            if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (__this,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
            if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              collection = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0);
              PHOLAJOMLEL = (System_Collections_Generic_List_string__o *)
                            thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
              System_Collections_Generic_List<object>___ctor
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
                         Method_System_Collections_Generic_List<string>__ctor__);
              if (PHOLAJOMLEL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_List<object>__AddRange
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
                         (System_Collections_Generic_IEnumerable_T__o *)collection,
                         Method_System_Collections_Generic_List<string>_AddRange__);
              if (collection == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar11 = collection->max_length;
              FMOACLJMJKF__JGPKFEOBBCP(PHOLAJOMLEL,method_00);
              if (0 < (int)iVar11) {
                FMOACLJMJKF__KMGOILJJOPB(ELOCKFLGKNO,KENFFDHLNDA,PHOLAJOMLEL,0,in_x4);
              }
              pSVar7 = StringLiteral_1/*""*/;
              if ((PHOLAJOMLEL->fields)._size != 0) {
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_98,(System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
                           Method_System_Collections_Generic_List<string>_GetEnumerator__);
                local_80.fields._index = local_98.fields._index;
                local_80.fields._version = local_98.fields._version;
                local_80.fields._list = local_98.fields._list;
                local_80.fields._current = local_98.fields._current;
                while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                         (&local_80,
                                          Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                         ), bVar4) {
                  pSVar7 = System_String__Concat
                                     (pSVar7,(System_String_o *)local_80.fields._current,
                                      StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
                }
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                bVar4 = System_String__op_Inequality(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                if (bVar4) {
                  if (pSVar7 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = System_String__Remove
                                     (pSVar7,(pSVar7->fields)._stringLength + -1,(MethodInfo *)0x0);
                }
                (*(LBJNDMNEJJB->klass->vtable)._10_set_Value.methodPtr)
                          (LBJNDMNEJJB,pSVar7,(LBJNDMNEJJB->klass->vtable)._10_set_Value.method);
              }
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar12._0_8_,auVar12._8_8_);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03187b10:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03187b44;
    }
  }
LAB_03187b28:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03187b44:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== private static void JGPKFEOBBCP(List<string> PHOLAJOMLEL)  [RVA 0x3087D1C]
// FMOACLJMJKF$$JGPKFEOBBCP @ RVA 0x3087D1C

void FMOACLJMJKF__JGPKFEOBBCP
               (System_Collections_Generic_List_string__o *PHOLAJOMLEL,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *a;
  System_String_o *b;
  int iVar3;
  int index;
  int32_t index_00;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = PHOLAJOMLEL;
  if ((DAT_0456602c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_0456602c = 1;
  }
  if (PHOLAJOMLEL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
  iVar3 = (PHOLAJOMLEL->fields)._size;
  if (0 < iVar3) {
    index = 0;
    do {
      iVar1 = index + 1;
      index_00 = iVar1;
      if (iVar1 < iVar3) {
        do {
          a = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                         Method_System_Collections_Generic_List<string>_get_Item__);
          b = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                         Method_System_Collections_Generic_List<string>_get_Item__);
          bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
          if (bVar2) {
            System_Collections_Generic_List<object>__RemoveAt
                      ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index_00,
                       Method_System_Collections_Generic_List<string>_RemoveAt__);
            index_00 = index_00 + -1;
          }
          iVar3 = (PHOLAJOMLEL->fields)._size;
          index_00 = index_00 + 1;
        } while (index_00 < iVar3);
      }
      index = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}


// ===== private static void KMGOILJJOPB(XmlNode ELOCKFLGKNO, XmlNode KENFFDHLNDA, List<string> PHOLAJOMLEL, int DPJIDNBJIBG)  [RVA 0x3087E1C]
// FMOACLJMJKF$$KMGOILJJOPB @ RVA 0x3087E1C

void FMOACLJMJKF__KMGOILJJOPB
               (System_Xml_XmlNode_o *ELOCKFLGKNO,System_Xml_XmlNode_o *KENFFDHLNDA,
               System_Collections_Generic_List_string__o *PHOLAJOMLEL,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *JGHIJMJNJLE;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_array *collection;
  MethodInfo *pMVar2;
  MethodInfo *method_00;
  int index;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  pMVar2 = method_00;
  do {
    if ((DAT_0456602d & 1) == 0) {
      FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
      FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
      FUN_01bab630(&StringLiteral_12864/*"Template"*/);
      FUN_01bab630(&StringLiteral_1/*""*/);
      DAT_0456602d = 1;
    }
    if (PHOLAJOMLEL == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03187fe8;
    index = (int)pMVar2;
    if ((PHOLAJOMLEL->fields)._size <= index) {
      return;
    }
    pMVar2 = Method_System_Collections_Generic_List<string>_get_Item__;
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                        (MethodInfo_26E4ADC *)
                        Method_System_Collections_Generic_List<string>_get_Item__);
    JGHIJMJNJLE = FMOACLJMJKF__DIPCNFGOHKJ(ELOCKFLGKNO,pSVar1,pMVar2);
    if (JGHIJMJNJLE != (System_Xml_XmlNode_o *)0x0) {
      pMVar2 = (MethodInfo *)0x0;
      FMOACLJMJKF__INFAEBPFJFC(KENFFDHLNDA,JGHIJMJNJLE,false,method_00);
      FMOACLJMJKF__IGKCKMGGGFM(KENFFDHLNDA,JGHIJMJNJLE,pMVar2);
      __this = (System_Xml_XmlAttributeCollection_o *)
               (*(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.methodPtr)
                         (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.method);
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03187fe8;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
      if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
        if (pSVar1 == (System_String_o *)0x0) {
LAB_03187fe8:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (MethodInfo *)0x0;
        collection = System_String__Split(pSVar1,0x7c,0,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03187fe8;
        System_Collections_Generic_List<object>__AddRange
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<string>_AddRange__);
        DJNBJHPDKDP__OFNFOGHFDML<object>
                  ((System_Collections_Generic_List_T__o *)PHOLAJOMLEL,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
      }
    }
    pMVar2 = (MethodInfo *)(ulong)(index + 1);
  } while( true );
}


// ===== public void .ctor()  [RVA 0x3087FEC]
// FMOACLJMJKF$$.ctor @ RVA 0x3087FEC

void FMOACLJMJKF___ctor(FMOACLJMJKF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

