// DBHEKFDNJKG$$DIPCNFGOHKJ @ RVA 0x33CCAE0

/* WARNING: Removing unreachable block (ram,0x034cce70) */

System_Xml_XmlNode_o *
DBHEKFDNJKG__DIPCNFGOHKJ
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
  System_Object_array *args;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  if ((DAT_04567e2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10240);
    FUN_01bab630(&StringLiteral_10213);
    DAT_04567e2f = 1;
  }
  if ((ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) &&
     (plVar3 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 != (long *)0x0)) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      do {
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_034ccc14;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034ccc14:
        uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar9 & 1) == 0) {
          pSVar5 = (System_Xml_XmlNode_o *)0x0;
          iVar11 = 5;
          goto LAB_034ccd38;
        }
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_034ccc74;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034ccc74:
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
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar6,StringLiteral_10213,(MethodInfo *)0x0);
      } while (!bVar2);
      __this = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (JFADJIGLMEE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(JFADJIGLMEE,pSVar6,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar11 = 4;
LAB_034ccd38:
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_034ccd98;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034ccd98:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if ((iVar11 == 5) || (iVar11 == 0)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_034cce68;
      if ((JFADJIGLMEE != (System_String_o *)0x0) &&
         (lVar8 = thunk_FUN_01bda71c(JFADJIGLMEE,(((args->obj).klass)->_1).element_class),
         lVar8 == 0)) {
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar7,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)JFADJIGLMEE;
      thunk_FUN_01c20e04(args->m_Items,JFADJIGLMEE);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10240,args,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlNode_o *)0x0;
    }
    return pSVar5;
  }
LAB_034cce68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

